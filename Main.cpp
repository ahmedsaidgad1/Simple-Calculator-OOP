#include <iostream>
#include <string>
using namespace std;

class clsSimpleClac
{
private:
    float _Result = 0;
    float _PreviousResult = 0;
    float _LastNumber = 0;
    string _LastOperation = "";

public:
    // fun to add number
    void Add(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Add";
        _Result += Num;
    }

    // fun to subtract num
    void Sub(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Subtract";
        _Result -= Num;
    }

    // fun to multiply numbers
    void Multiply(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Multiply";
        _Result *= Num;
    }

    // function to divided number
    void Divide(float Num)
    {
        _LastNumber = Num;
        _LastOperation = "Dividing";
        if (Num == 0)
        {
            cout << "Invalid Operation. " << endl;
        }
        else
        {
            _PreviousResult = _Result;
            _Result /= Num;
        }
    }
    void Clear()
    {
        _LastNumber = 0;
        _LastOperation = "Clear";
        _PreviousResult = 0;
        _Result = 0;
    }

    void CancelLastOperation()
    {
        _LastOperation = "Undo ( Cancel Last Operation )";
        _Result = _PreviousResult;
    }

    void PrintResult()
    {
        cout << "Result ";
        cout << "After " << _LastOperation << " " << _LastNumber << " is: " << _Result << "\n";
    }
};

int main()
{

    clsSimpleClac Calculator;

    Calculator.Clear();
    Calculator.Add(10);
    Calculator.Add(20);
    Calculator.Multiply(2);
    Calculator.PrintResult();
    return 0;
}
