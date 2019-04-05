# Instance Of

### Example Usage:

```C++
instance_of<Foo, Foo<int>>::value // == true
instance_of<Bar, Foo<int>>::value // == false
```