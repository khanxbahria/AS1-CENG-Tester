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
Tab A = Tab("o", "c","x");
Tab B = Tab("ss", "xxx","c");
Tab C = Tab("yyy", "v","ddd");
Tab D = Tab("ttt", "zz","jjj");
Tab E = Tab("m", "c","bb");
Tab F = Tab("zzz", "nnn","q");
Tab G = Tab("bb", "uuu","q");
Tab H = Tab("n", "f","k");
Tab I = Tab("e", "yy","ttt");
Tab J = Tab("j", "pp","c");
Tab K = Tab("zzz", "sss","p");
Tab L = Tab("ccc", "zzz","s");
Tab M = Tab("ff", "ww","lll");
Tab N = Tab("zz", "m","i");
Tab O = Tab("m", "z","pp");
Tab P = Tab("w", "ii","t");
Tab Q = Tab("nn", "aaa","n");
Tab R = Tab("j", "kkk","rrr");
Tab S = Tab("jj", "bb","qq");
Tab T = Tab("pp", "d","k");
Tab U = Tab("bb", "mmm","mmm");
Tab V = Tab("a", "ll","qqq");
Tab W = Tab("p", "l","j");
Tab X = Tab("gg", "n","g");
Tab Y = Tab("bb", "jjj","ccc");
Tab Z = Tab("ll", "ddd","hhh");
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(A);
d.moveActiveTabTo(0);
a.newTab(B);
b.newTab(C);
c.changeActiveTabTo(0);
d.newTab(D);
a.moveActiveTabTo(2);
b.newTab(E);
c.moveActiveTabTo(2);
d.newTab(F);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(G);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.newTab(H);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(I);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(J);
b.moveActiveTabTo(3);
c.newTab(K);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(L);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(M);
c.newTab(N);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.newTab(O);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(P);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(Q);
b.newTab(R);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(S);
a.changeActiveTabTo(2);
b.newTab(T);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(U);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(V);
d.newTab(W);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(X);
b.newTab(Y);
c.newTab(Z);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
c.changeActiveTabTo(2);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->print();
brows->switchToWindow(3);
brows->print();
brows->getWindow(0);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->print();
brows->getWindow(8);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->getWindow(2);
brows->print();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->newWindow();
brows->switchToWindow(8);
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->switchToWindow(7);
brows->switchToWindow(0);
brows->switchToWindow(0);
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(1);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->getWindow(9);
brows->switchToWindow(7);
brows->getWindow(9);
brows->newWindow();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(8);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(5);
brows->print();
brows->closeWindow();
brows->newWindow();
brows->getWindow(9);
brows->switchToWindow(1);
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
delete brows;
}
	return 0;
}