#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
Tab F = Tab("uu", "ii","a");
wind->newTab(F);
Tab G = Tab("h", "vvv","u");
wind->isEmpty();
Tab R = Tab("ff", "i","zz");
wind->isEmpty();
Tab P = Tab("e", "zzz","ll");
wind->getActiveTab();
Tab C = Tab("r", "sss","mmm");
wind->isEmpty();
Tab H = Tab("yy", "d","jj");
wind->isEmpty();
Tab U = Tab("x", "bbb","pp");
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->getActiveTab();
Tab O = Tab("x", "kkk","eee");
wind->getActiveTab();
Tab K = Tab("r", "rrr","vv");
wind->closeTab();
Tab V = Tab("hhh", "www","ddd");
wind->closeTab();
Tab W = Tab("j", "qqq","xxx");
wind->changeActiveTabTo(4);
wind->newTab(C);
wind->print();
wind->getActiveTab();
Tab E = Tab("iii", "yy","vvv");
wind->getActiveTab();
wind->closeTab();
wind->newTab(E);
Tab L = Tab("rr", "xx","kk");
wind->closeTab();
Tab Q = Tab("rrr", "uu","b");
wind->print();
wind->newTab(G);
wind->newTab(H);
wind->moveActiveTabTo(5);
Tab D = Tab("q", "q","h");
wind->newTab(D);
Tab J = Tab("l", "xxx","ss");
wind->newTab(J);
wind->changeActiveTabTo(5);
wind->print();
Tab I = Tab("zz", "uu","mm");
wind->newTab(I);
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(0);
wind->print();
Tab X = Tab("tt", "mm","s");
wind->moveActiveTabTo(1);
Tab N = Tab("aaa", "iii","jj");
wind->closeTab();
Tab B = Tab("yy", "aa","ff");
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->getActiveTab();
wind->print();
Tab Y = Tab("zz", "lll","qqq");
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->newTab(B);
Tab A = Tab("r", "ff","q");
wind->closeTab();
Tab M = Tab("lll", "ddd","b");
wind->changeActiveTabTo(3);
wind->newTab(A);
wind->isEmpty();
wind->print();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->newTab(K);
Tab Z = Tab("lll", "l","uuu");
wind->changeActiveTabTo(2);
Tab S = Tab("x", "gg","ss");
wind->getActiveTab();
wind->newTab(L);
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(3);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->newTab(M);
wind->moveActiveTabTo(1);
Tab T = Tab("dd", "nnn","bbb");
wind->changeActiveTabTo(1);
wind->newTab(N);
wind->print();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->newTab(O);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(2);
wind->print();
wind->closeTab();
wind->newTab(P);
wind->closeTab();
delete wind;
}
	return 0;
}