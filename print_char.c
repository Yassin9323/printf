void print_char (void)
{
            {
                int ch = va_arg(args, int); // Fetch the next argument as int
                buffer[buff_ind++] = ch;
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
}
