#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Shablon::MyForm form;
	Application::Run(% form);
}





void Shablon::MyForm::Удалить_один_символ()
{
    if (textBox_main->Text->Length > 0 && textBox_main->Text != "0")
    {
        //// Работа со шрифтом
        if (textBox_main->Text->Length >= Мин_Граница_Размера && textBox_main->Text->Length <= Мин_Граница_Размера + 10)
        {
            textBox_main->Font = (gcnew System::Drawing::Font(L"Verdana", textBox_main->Font->Size + 2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
        }
        if (textBox_main->Text->Length - 1 == Мин_Граница_Размера + 10) {
            textBox_main->Font = (gcnew System::Drawing::Font(L"Verdana", textBox_main->Font->Size + 2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
        }
        /// Работа со шрифтом

        try
        {
            textBox_main->Text = textBox_main->Text->Remove(textBox_main->Text->Length - 1);
        }
        catch (...) /// Если не удалось значит мы достигли конца примера
        {
            MessageBox::Show("Ошибка,(Попытка удалить последний символ)", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}

int Shablon::MyForm::getRang(char p_Ch)
{
 //Функция возвращает приоритет операции: "1" для сложения и вычитания, "2" для умножения и деления и т.д.
		if (p_Ch == 's' || p_Ch == 'c' || p_Ch == 't' || p_Ch == 'g' || p_Ch == 'e')return 4;
		if (p_Ch == '^')return 3;
        if (p_Ch == '*' || p_Ch == '/')return 2;
		if (p_Ch == '+' || p_Ch == '-')return 1;

		else return 0;
	
}

bool Shablon::MyForm::Maths(std::stack <Leksema>& Stack_n, std::stack <Leksema>& Stack_o, Leksema& item)
{
    double a, b, c;
    a = Stack_n.top().value; //Берется верхнее число из стека с числами
    Stack_n.pop(); //Удаляется верхнее число из стека с числами
    switch (Stack_o.top().type) {  //Проверяется тип верхней операции из стека с операциями
    case '+': //Если тип верхней операции из стека с операциями сложение
        b = Stack_n.top().value;
        Stack_n.pop();
        c = a + b;
        item.type = '0';
        item.value = c;
        Stack_n.push(item); //Результат операции кладется обратно в стек с числами
        Stack_o.pop();
        break;

    case '-':
        b = Stack_n.top().value;
        Stack_n.pop();
        c = b - a;
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case '^':
        b = Stack_n.top().value;
        Stack_n.pop();
        c = pow(b, a);
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case '*':
        b = Stack_n.top().value;
        Stack_n.pop();
        c = a * b;
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case '/':
        b = Stack_n.top().value;
        if (a == 0) {
            MessageBox::Show("Деление на ноль невозможно", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return false;
        }
        else {
            Stack_n.pop();
            c = (b / a);
            item.type = '0';
            item.value = c;
            Stack_n.push(item);
            Stack_o.pop();
            break;
        }

    case 's':
        c = sin(a); //Sin(a);
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case 'c':
        c = cos(a);
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case 't':
        if (cos(a) == 0) {
            MessageBox::Show("Неверный аргумент для тангенса!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return false;
        }
        else {
            c = tan(a);
            item.type = '0';
            item.value = c;
            Stack_n.push(item);
            Stack_o.pop();
            break;
        }

    case 'g':
        if (sin(a) == 0) {
            MessageBox::Show("Неверный аргумент для котангенса!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return false;
        }
        else {
            c = Ctg(a);
            item.type = '0';
            item.value = c;
            Stack_n.push(item);
            Stack_o.pop();
            break;
        }

    case 'e':
        c = exp(a);
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case 'l':
        c = log10(a); //log(a);
        item.type = '0';
        item.value = c;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    case '(': // Обрабатывает ситуацию случайных повторений символа "(": "((4)" и аналоги
        item.type = '0';
        item.value = a;
        Stack_n.push(item);
        Stack_o.pop();
        break;

    default:
        /*cerr << "\nОшибка!\n";*/
        MessageBox::Show("Ошибка!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return false;
        break;
    }
    return true;
}

double Shablon::MyForm::Ctg(double x) { //Функция для расчета котангенса
    double a = cos(x);
    double b = sin(x);
    return (a / b);
}
