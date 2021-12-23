# LCCS - Linux Console Control Sequences
### Simple c++ library for work with console colors.


## **Example programm**
```c++
color::SetColor(1,color::BLUE);
cout << "ABOBA" << endl;
color::SetAttr(color::Attr::RESET);
cout << "ABOBA" << endl;
```
## **Output:**
![output](output.png)