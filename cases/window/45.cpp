#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab M = Tab("sss", "kkk","jj");
wind->getActiveTab();
wind->changeActiveTabTo(3);
Tab F = Tab("bbb", "hhh","zzz");
wind->print();
Tab G = Tab("bbb", "f","vv");
wind->moveActiveTabTo(5);
Tab J = Tab("t", "m","l");
wind->closeTab();
Tab U = Tab("zzz", "cc","hhh");
wind->print();
Tab O = Tab("kkk", "ddd","ss");
wind->closeTab();
Tab X = Tab("f", "ddd","kkk");
wind->isEmpty();
Tab K = Tab("c", "x","ss");
wind->closeTab();
wind->newTab(F);
Tab Z = Tab("ttt", "fff","v");
wind->moveActiveTabTo(5);
Tab E = Tab("uuu", "mm","k");
wind->newTab(E);
Tab D = Tab("uuu", "b","uuu");
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->getActiveTab();
Tab N = Tab("q", "mmm","s");
wind->print();
wind->newTab(D);
wind->print();
Tab S = Tab("d", "d","yy");
wind->moveActiveTabTo(1);
Tab A = Tab("ff", "xxx","c");
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
Tab C = Tab("aaa", "b","fff");
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
Tab W = Tab("i", "jjj","i");
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->print();
Tab Y = Tab("i", "t","ee");
wind->moveActiveTabTo(2);
Tab I = Tab("x", "c","uuu");
wind->print();
wind->print();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(1);
Tab H = Tab("bbb", "k","k");
wind->changeActiveTabTo(5);
Tab L = Tab("nn", "c","mmm");
wind->changeActiveTabTo(2);
wind->newTab(A);
wind->isEmpty();
Tab V = Tab("n", "ee","a");
wind->newTab(C);
wind->newTab(G);
wind->print();
Tab R = Tab("y", "nn","ee");
wind->newTab(H);
wind->print();
Tab B = Tab("nn", "ll","p");
wind->print();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->print();
wind->moveActiveTabTo(4);
Tab Q = Tab("gg", "v","m");
wind->print();
wind->print();
wind->newTab(B);
wind->closeTab();
wind->moveActiveTabTo(0);
wind->isEmpty();
Tab T = Tab("hhh", "kk","bb");
wind->closeTab();
wind->moveActiveTabTo(2);
Tab P = Tab("d", "ccc","u");
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->print();
wind->newTab(I);
wind->changeActiveTabTo(5);
wind->newTab(J);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(3);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->print();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->closeTab();
wind->print();
wind->closeTab();
wind->print();
wind->print();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
delete wind;
}
	return 0;
}