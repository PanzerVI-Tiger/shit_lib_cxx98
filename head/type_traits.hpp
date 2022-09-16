#if !defined(mylib_type_traits)
#   define mylib_type_traits

namespace mylib {

    template<typename Type, Type integer>
    struct integral_sequence {
        typedef Type value_type;

        static const Type value = integer;
    };

    typedef mylib::integral_sequence<bool, true>  true_type;
    typedef mylib::integral_sequence<bool, false> false_type;

    template<typename Type>
    struct remove_const {
        typedef Type type;
    };

    template<typename Type>
    struct remove_const<const Type> {
        typedef Type type;
    };
    
    template<typename Type>
    struct remove_volatile {
        typedef Type type;
    };

    template<typename Type>
    struct remove_volatile<volatile Type> {
        typedef Type type;
    };

    template<typename Type>
    struct remove_cv {
        typedef Type type;
    };

    template<typename Type>
    struct remove_cv<const Type> {
        typedef Type type;
    };

    template<typename Type>
    struct remove_cv<volatile Type> {
        typedef Type type;
    };

    template<typename Type>
    struct remove_cv<const volatile Type> {
        typedef Type type;
    };

    template<typename Type1, typename Type2>
    struct is_same :
        mylib::false_type
    {};

    template<typename Type>
    struct is_same<Type, Type> :
        mylib::true_type
    {};

    namespace detail {
        
    }

    template<typename Type>
    struct is_class_type {

    };
}

#endif
