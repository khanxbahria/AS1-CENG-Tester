#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("uu", "i","p");
Tab B = Tab("rr", "nnn","qqq");
Tab C = Tab("ttt", "s","ooo");
Tab D = Tab("zz", "hh","hhh");
Tab E = Tab("jjj", "nnn","zzz");
Tab F = Tab("lll", "oo","rrr");
Tab G = Tab("uuu", "cc","xxx");
Tab H = Tab("aa", "aa","bb");
Tab I = Tab("hhh", "ccc","ii");
Tab J = Tab("ttt", "mmm","zz");
Tab K = Tab("jj", "pp","g");
Tab L = Tab("y", "mm","iii");
Tab M = Tab("dd", "xxx","vvv");
Tab N = Tab("ggg", "rrr","hhh");
Tab O = Tab("eee", "iii","qq");
Tab P = Tab("jjj", "ppp","e");
Tab Q = Tab("mmm", "r","mmm");
Tab R = Tab("x", "ss","kk");
Tab S = Tab("y", "ll","dd");
Tab T = Tab("eee", "a","j");
Tab U = Tab("mmm", "ooo","gg");
Tab V = Tab("iii", "g","ggg");
Tab W = Tab("uuu", "nnn","x");
Tab X = Tab("dd", "nnn","nnn");
Tab Y = Tab("qq", "fff","w");
Tab Z = Tab("uuu", "ddd","y");
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(A);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(B);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
b.newTab(C);
c.newTab(D);
d.moveActiveTabTo(2);
a.newTab(E);
b.newTab(F);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(0);
b.newTab(G);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(H);
d.newTab(I);
a.newTab(J);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(K);
a.changeActiveTabTo(5);
b.newTab(L);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(M);
b.changeActiveTabTo(5);
c.newTab(N);
d.newTab(O);
a.moveActiveTabTo(1);
b.newTab(P);
c.newTab(Q);
d.newTab(R);
a.newTab(S);
b.newTab(T);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(U);
b.moveActiveTabTo(3);
c.newTab(V);
d.newTab(W);
a.newTab(X);
b.moveActiveTabTo(3);
c.newTab(Y);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(Z);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
c.moveActiveTabTo(3);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->getWindow(5);
brows->closeWindow();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->getWindow(6);
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(5);
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(2);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(2);
brows->getWindow(6);
brows->getWindow(2);
brows->newWindow();
brows->print();
brows->getWindow(0);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->getWindow(2);
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->getWindow(0);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(1);
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(7);
brows->switchToWindow(3);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(5);
brows->getWindow(3);
brows->closeWindow();
brows->switchToWindow(0);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(4);
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->getWindow(1);
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(0);
brows->newWindow();
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
delete brows;
}
	return 0;
}