class MindObject
{
    public:                              // öffentlich
        MindObject();                      // der Default-Konstruktor
        ~MindObject();                     // der Destruktor

        int eineFunktion(int x=42);        // eine Funktion mit einem (Default-) Parameter

    private:                             // privat
        int m_eineVariable;
};



