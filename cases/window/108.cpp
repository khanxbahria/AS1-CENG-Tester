#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(4);
Tab V = Tab("hhh", "hhh","kkk");
wind->print();
Tab Q = Tab("eee", "iii","y");
wind->print();
Tab B = Tab("dd", "f","oo");
wind->moveActiveTabTo(1);
Tab S = Tab("ii", "qqq","zz");
wind->getActiveTab();
Tab D = Tab("tt", "vvv","i");
wind->closeTab();
wind->changeActiveTabTo(1);
wind->isEmpty();
Tab N = Tab("tt", "zzz","yy");
wind->isEmpty();
Tab P = Tab("tt", "cc","yyy");
wind->moveActiveTabTo(3);
Tab A = Tab("oo", "vvv","u");
wind->closeTab();
Tab T = Tab("vvv", "xxx","hh");
wind->print();
wind->print();
Tab I = Tab("jj", "nnn","n");
wind->changeActiveTabTo(3);
Tab R = Tab("j", "cc","bbb");
wind->changeActiveTabTo(3);
wind->print();
wind->closeTab();
Tab O = Tab("t", "cc","nn");
wind->newTab(A);
Tab M = Tab("h", "pp","l");
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->getActiveTab();
Tab K = Tab("f", "yy","c");
wind->newTab(B);
wind->changeActiveTabTo(4);
Tab Z = Tab("zz", "p","ddd");
wind->newTab(D);
wind->getActiveTab();
wind->closeTab();
Tab Y = Tab("o", "ss","ddd");
wind->closeTab();
Tab G = Tab("ddd", "mmm","i");
wind->getActiveTab();
Tab U = Tab("oo", "xxx","qq");
wind->closeTab();
wind->moveActiveTabTo(1);
wind->isEmpty();
Tab L = Tab("b", "xx","ss");
wind->print();
wind->isEmpty();
wind->newTab(G);
wind->newTab(I);
wind->newTab(K);
wind->moveActiveTabTo(3);
wind->newTab(L);
Tab W = Tab("jjj", "y","bb");
wind->closeTab();
Tab X = Tab("mm", "uuu","mmm");
wind->isEmpty();
Tab J = Tab("p", "sss","aa");
wind->print();
wind->newTab(J);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(3);
wind->newTab(M);
wind->newTab(N);
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->print();
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
Tab H = Tab("vv", "bb","jj");
wind->print();
wind->moveActiveTabTo(4);
Tab E = Tab("n", "nn","ooo");
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->newTab(E);
wind->isEmpty();
wind->moveActiveTabTo(0);
Tab F = Tab("uuu", "cc","v");
wind->isEmpty();
wind->print();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->getActiveTab();
Tab C = Tab("bb", "ppp","cc");
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->print();
wind->print();
wind->newTab(C);
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->newTab(F);
wind->changeActiveTabTo(4);
wind->print();
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->newTab(H);
wind->newTab(O);
wind->moveActiveTabTo(4);
delete wind;
}
	return 0;
}