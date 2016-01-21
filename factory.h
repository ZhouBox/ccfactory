#ifndef FACTORY
#define FACTORY


#include <string>
#include <map>
#include <functional>

using namespace std;

template <typename T, typename T2 = std::string>
class Factory
{
public:


    typedef T type_value;

    template <typename N>
    struct register_h
    {
        register_h(const T2& key)
        {
            Factory::instance()->m_creators[key] = []{ return new N; };
        }
    };


    static auto instance() -> Factory<T>*
    {
        static Factory<T> f;
        return &f;
    }

    auto creat(const T2& key) -> T*
    {
        T* re = NULL;
        auto ite = m_creators.find(key);
        if (ite != m_creators.end()) {
            re = (ite->second)();
        }
        return re;
    }

    static auto produce(const T2& key) -> T*
    {
        return Factory::instance()->creat(key);
    }

private:
    Factory() {}
    Factory(const Factory&) = delete;
    Factory(Factory&&) = delete;
    Factory& operator =(const Factory&) = delete;
    std::map<T2, std::function<T*()>> m_creators;
};


#define CLASS_NAME(CLASS) #CLASS



#endif // FACTORY

