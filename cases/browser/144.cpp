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
Tab A = Tab("m", "gg","ll");
Tab B = Tab("vvv", "ee","vv");
Tab C = Tab("aaa", "bbb","ii");
Tab D = Tab("yy", "c","pp");
Tab E = Tab("dd", "qqq","hhh");
Tab F = Tab("yyy", "vvv","uu");
Tab G = Tab("ee", "u","z");
Tab H = Tab("ddd", "x","eee");
Tab I = Tab("t", "r","tt");
Tab J = Tab("d", "cc","y");
Tab K = Tab("hhh", "l","gg");
Tab L = Tab("dd", "m","w");
Tab M = Tab("y", "f","t");
Tab N = Tab("ss", "hh","bbb");
Tab O = Tab("fff", "zz","ll");
Tab P = Tab("vvv", "oo","cc");
Tab Q = Tab("i", "q","q");
Tab R = Tab("jj", "www","kk");
Tab S = Tab("dd", "w","g");
Tab T = Tab("ll", "vv","e");
Tab U = Tab("vvv", "p","ee");
Tab V = Tab("jj", "iii","yyy");
Tab W = Tab("bb", "s","mmm");
Tab X = Tab("nn", "i","ooo");
Tab Y = Tab("tt", "jjj","nnn");
Tab Z = Tab("yyy", "nn","vvv");
a.changeActiveTabTo(5);
b.newTab(A);
c.newTab(B);
d.newTab(C);
a.newTab(D);
b.moveActiveTabTo(2);
c.newTab(E);
d.newTab(F);
a.newTab(G);
b.newTab(H);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.newTab(I);
c.newTab(J);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.newTab(K);
c.newTab(L);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
b.newTab(M);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(N);
b.changeActiveTabTo(1);
c.newTab(O);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(P);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.newTab(Q);
c.newTab(R);
d.newTab(S);
a.newTab(T);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(U);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(V);
d.newTab(W);
a.changeActiveTabTo(3);
b.newTab(X);
c.moveActiveTabTo(3);
d.newTab(Y);
a.newTab(Z);
b.newTab(Z);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
c.moveActiveTabTo(3);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(2);
brows->newWindow();
brows->getWindow(8);
brows->print();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->getWindow(5);
brows->switchToWindow(7);
brows->getWindow(4);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->print();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->switchToWindow(5);
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->getWindow(5);
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(7);
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(7);
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->print();
brows->switchToWindow(1);
brows->switchToWindow(4);
brows->getWindow(7);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->getWindow(0);
brows->print();
brows->switchToWindow(6);
brows->getWindow(8);
brows->getWindow(6);
brows->switchToWindow(7);
delete brows;
}
	return 0;
}