    string preExpression;//һ���Զ�ȡ���ʽ�����ַ�����  
    stack<char> operators;//��¼���ʽ�еĲ�����  
    stack<double> operand;//��¼���ʽ�еĲ�����  
    int loc;//��¼��ȡ��preExpression�ĵڼ���λ����  
    int length;//��¼preExpression�ĳ���  
    char ch;//��¼��ǰ��ȡ����preExpression���ַ�  
    bool sign;//��¼loc�Ƿ��ȡ��preExpression�����һ���ַ�,1Ϊδ��ȡ�����һ���ַ���0Ϊ��ȡ�����һ���ַ�  
  
    //start��������  
    void show();//����������ʽ��������preExpression��  
    void operating();//��ʼ���м������  
    int isOperator(char ch);//�ж�ch�Ƿ��ǲ�����������0˵�������֣�����1˵���ǲ�����������2˵���Ƿ�����  
    double readOpend();//��ȡ������  
    int opera(char ch,char top);//��ȡ������������0˵����������������1˵�����������⣬����2˵�����ʽ����,3˵�����ʽ���Ϸ�  
    bool compareOpe(char ch, char top);//�жϲ����������ȼ�  