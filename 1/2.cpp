    string preExpression;//一次性读取表达式，用字符串存  
    stack<char> operators;//记录表达式中的操作符  
    stack<double> operand;//记录表达式中的操作数  
    int loc;//记录读取到preExpression的第几个位置了  
    int length;//记录preExpression的长度  
    char ch;//记录当前读取到的preExpression的字符  
    bool sign;//记录loc是否读取到preExpression的最后一个字符,1为未读取到最后一个字符，0为读取到最后一个字符  
  
    //start辅助函数  
    void show();//提醒输入表达式，并存入preExpression中  
    void operating();//开始进行计算过程  
    int isOperator(char ch);//判断ch是否是操作符，返回0说明是数字，返回1说明是操作符，返回2说明非法符号  
    double readOpend();//读取操作数  
    int opera(char ch,char top);//读取操作符，返回0说明操作正常，返回1说明除法有问题，返回2说明表达式出错,3说明表达式不合法  
    bool compareOpe(char ch, char top);//判断操作符的优先级  