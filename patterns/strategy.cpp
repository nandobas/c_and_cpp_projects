#include <iostream>

using namespace std;

class Strategy{
    public:
        virtual void AlgorithmInterface() = 0;
};

class StructStrategyA: public Strategy
{
    public:
        void AlgorithmInterface(){
            cout << "inside StructStrategyA AlgorithmInterface()\n";
        }
};

class StructStrategyB: public Strategy
{
    public:
        void AlgorithmInterface(){
            cout << "inside StructStrategyB AlgorithmInterface()\n";
        }
};

class StructStrategyC: public Strategy
{
    public:
        void AlgorithmInterface(){
            cout << "inside StructStrategyC AlgorithmInterface()\n";
        }
};

class Context
{
    private:
        Strategy *strategy;
    
    public:
        void SetStrategy(Strategy *obj)
        {
            strategy = obj;
        }        
        Strategy *GetStrategy()
        {
            return strategy;
        }
        void ContextInterface()
        {
            strategy->AlgorithmInterface();
        }
};


int main()
{
    Context *ctx = new Context();
    StructStrategyA *strategyA = new StructStrategyA;
    StructStrategyB *strategyB = new StructStrategyB;
    StructStrategyC *strategyC = new StructStrategyC;

    ctx->SetStrategy(strategyA);
    ctx->ContextInterface();

    ctx->SetStrategy(strategyB);
    ctx->ContextInterface();

    ctx->SetStrategy(strategyC);
    ctx->ContextInterface();
    return 0;
}