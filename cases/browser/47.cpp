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
Tab A = Tab("ee", "h","k");
Tab B = Tab("sss", "zzz","t");
Tab C = Tab("hh", "ppp","ggg");
Tab D = Tab("d", "x","qq");
Tab E = Tab("m", "xxx","rr");
Tab F = Tab("eee", "hhh","hhh");
Tab G = Tab("bbb", "xxx","qq");
Tab H = Tab("rr", "ggg","i");
Tab I = Tab("kkk", "ff","rrr");
Tab J = Tab("aaa", "v","jj");
Tab K = Tab("lll", "yyy","m");
Tab L = Tab("b", "zzz","u");
Tab M = Tab("aaa", "qq","t");
Tab N = Tab("uu", "w","ccc");
Tab O = Tab("pp", "iii","t");
Tab P = Tab("a", "rrr","kkk");
Tab Q = Tab("uuu", "z","h");
Tab R = Tab("zzz", "vvv","aaa");
Tab S = Tab("jjj", "hh","k");
Tab T = Tab("aaa", "bbb","ff");
Tab U = Tab("kk", "ff","bb");
Tab V = Tab("jjj", "vvv","k");
Tab W = Tab("qq", "jjj","iii");
Tab X = Tab("n", "tt","ss");
Tab Y = Tab("l", "rrr","iii");
Tab Z = Tab("hhh", "oo","oo");
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(A);
b.changeActiveTabTo(3);
c.newTab(B);
d.newTab(C);
a.newTab(D);
b.newTab(E);
c.newTab(F);
d.newTab(G);
a.changeActiveTabTo(4);
b.newTab(H);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(I);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(J);
d.moveActiveTabTo(1);
a.newTab(K);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(L);
a.newTab(M);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(N);
b.changeActiveTabTo(0);
c.newTab(O);
d.moveActiveTabTo(0);
a.newTab(P);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(Q);
a.moveActiveTabTo(4);
b.newTab(R);
c.newTab(S);
d.moveActiveTabTo(4);
a.newTab(T);
b.newTab(U);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(V);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.newTab(W);
c.newTab(X);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.newTab(Y);
c.newTab(Z);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
c.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->print();
brows->getWindow(2);
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(1);
brows->newWindow();
brows->switchToWindow(2);
brows->print();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->print();
brows->print();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(1);
brows->getWindow(6);
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(1);
brows->getWindow(3);
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(3);
brows->newWindow();
brows->switchToWindow(7);
brows->getWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(9);
brows->mergeAllWindows();
brows->getWindow(0);
brows->switchToWindow(2);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->closeWindow();
brows->getWindow(6);
brows->getWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(2);
brows->getWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(1);
brows->print();
brows->mergeAllWindows();
brows->getWindow(6);
brows->closeWindow();
brows->print();
brows->switchToWindow(6);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->print();
brows->switchToWindow(3);
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->getWindow(8);
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
delete brows;
}
	return 0;
}