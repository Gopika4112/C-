// manage log messages
//(this is just an example for how classes work. This is NOT a preferred method to write a log class)
#include <iostream>

class Log
{
public:
    enum Level{
        LevelError, LevelWarning, LevelInfo
    };
    // const int LogLevelError = 0;
    // const int LogLevelWarning=1;
    // const int LogLevelInfo=2;
private:
    // int m_LogLevel=LogLevelInfo; // m_=> private class member
    Level m_LogLevel = LevelInfo;
public:
    // void setLevel(int level)
    // {
    //     m_LogLevel = level;
    // }
    void setLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char *message)
    {
        if(m_LogLevel >= LevelError)
            std::cout<< "[ERROR]:"<<message<<std::endl;
    }

    void Warn(const char* message)
    {
        if(m_LogLevel >= LevelWarning)
            std::cout<< "[WARNING]:"<<message<<std::endl;
    }

    void Info(const char *message)
    {
        if(m_LogLevel >= LevelInfo)
            std::cout<< "[INFO]:"<<message<<std::endl;
    }
};

int main()
{
    Log log;
    log.setLevel(Log::LevelWarning);
    log.Warn("Hello");
    log.Error("Hello");
    log.Info("Hello");
    std::cin.get();
}