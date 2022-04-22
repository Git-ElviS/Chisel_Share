circuit Top :
  module MyModule :
    output io : { }

    skip

  module MyModule_1 :
    output io : { }

    skip

  module MyModule_2 :
    output io : { }

    skip

  module Top :

    inst MyModule of MyModule @[TransitNameSpec.scala 22:21]
    inst bar of MyModule_1 @[TransitNameSpec.scala 26:21]
    inst baz_generated of MyModule_2 @[TransitNameSpec.scala 32:21]

