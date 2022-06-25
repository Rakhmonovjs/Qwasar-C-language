
// int my_isalpha(char param_1)
// {
//     if(param_1>='A' && param_1 <='Z'){
//         return 0;
//     }
//     if(param_1>= 'a' && param_1 <='z'){
//         return 1;
//     }
//     // if(param_1>= '1' && param_1 <= '100'){
//     //     return 1;
//     // }

// }


int my_isalpha(char c)
{
  if (c >= 65 && c <= 90)
    return (1);
  if (c >= 97 && c <= 122)
    return (1);
  return (0);
}