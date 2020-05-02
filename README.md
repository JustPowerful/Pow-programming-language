![thumbnail](https://www.mediafire.com/convkey/cf76/lxrp2u08htur5tk9g.jpg)

### How pow works ?
here's an example of a Hello World program in pow language :
```
++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++-
++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++
/
+++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++--
```
Seems a little complicated right ? i'll explain :

Every **line** refers to an **ASCII** character you can't write 2 characters in one line so yeah ! that's not a big challenge, but the real challenge is the pluses **( + )** ... the pow language will summarize the number of **( + )**, but every **( + )** adds **3** to the sum, for example the letter ``H`` is ``++++++++++++++++++++++++``in pow, but how do we print the letter ``e`` ?
it's simple! you can use the minus symbol **( - )** it will subtract **1** from the sum and the result will be ``++++++++++++++++++++++++++++++++++-`` that means ``(34*3)-1`` equals to ``101`` and that's the ASCII decimal of ``e``.

You can create **spaces** using its ASCII value or simply by typing ``/``, you can also create line breaks using ``//``

### How to read pow ?
Simply, multiply the sum of **( + )** symbols by **3** and then substract the sum of **( - )** symbols from the sum of **( + )** and you'll get an ASCII deciaml now you just need to convert it to a character.

### Open-source ?
Collaborate and make pow language better with us, every collaborator will be added in the **authors** list bellow !

## Authors :
- [JustPowerful](https://github.com/JustPowerful)
