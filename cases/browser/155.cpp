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
Tab A = Tab("k", "v","r");
Tab B = Tab("g", "kkk","bb");
Tab C = Tab("uuu", "p","ttt");
Tab D = Tab("ppp", "rrr","www");
Tab E = Tab("g", "yy","n");
Tab F = Tab("bb", "eee","s");
Tab G = Tab("bb", "uuu","gg");
Tab H = Tab("kkk", "o","ww");
Tab I = Tab("z", "oo","kkk");
Tab J = Tab("sss", "xx","t");
Tab K = Tab("ttt", "jj","aa");
Tab L = Tab("ww", "ddd","v");
Tab M = Tab("oo", "cc","p");
Tab N = Tab("www", "zz","vvv");
Tab O = Tab("oo", "ccc","l");
Tab P = Tab("ccc", "c","ggg");
Tab Q = Tab("kk", "w","r");
Tab R = Tab("rr", "dd","mm");
Tab S = Tab("rrr", "vvv","a");
Tab T = Tab("ccc", "t","ii");
Tab U = Tab("p", "ttt","y");
Tab V = Tab("c", "g","i");
Tab W = Tab("v", "b","aaa");
Tab X = Tab("c", "fff","b");
Tab Y = Tab("ggg", "v","z");
Tab Z = Tab("c", "qq","bb");
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(A);
d.newTab(B);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.newTab(C);
c.newTab(D);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(E);
b.newTab(F);
c.newTab(G);
d.moveActiveTabTo(1);
a.newTab(H);
b.moveActiveTabTo(2);
c.newTab(I);
d.newTab(J);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(K);
a.moveActiveTabTo(3);
b.newTab(L);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(M);
d.newTab(N);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(O);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(P);
b.newTab(Q);
c.newTab(R);
d.changeActiveTabTo(4);
a.newTab(S);
b.moveActiveTabTo(0);
c.newTab(T);
d.newTab(U);
a.moveActiveTabTo(4);
b.newTab(V);
c.changeActiveTabTo(4);
d.newTab(W);
a.newTab(X);
b.newTab(Y);
c.newTab(Z);
d.changeActiveTabTo(3);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
c.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
d.changeActiveTabTo(3);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->getWindow(0);
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->getWindow(1);
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(2);
brows->getWindow(9);
brows->switchToWindow(7);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(8);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->newWindow();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->getWindow(6);
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->getWindow(5);
brows->newWindow();
brows->closeWindow();
brows->getWindow(7);
brows->switchToWindow(6);
brows->closeWindow();
brows->getWindow(6);
brows->getWindow(8);
brows->getWindow(7);
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->getWindow(9);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->getWindow(9);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(1);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(9);
delete brows;
}
	return 0;
}