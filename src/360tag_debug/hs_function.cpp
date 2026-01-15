

extern long * __cdecl hs_macro_function_evaluate(short, long, bool);
extern void __cdecl hs_evaluate(short);
extern void __cdecl hs_return(long, long);

void __cdecl evaluate_hs_evaluate_1_evaluate(short function_index, long thread_index, bool initialize)
{
	if (long* actual_parameters = hs_macro_function_evaluate(function_index, thread_index, initialize))
	{
        hs_evaluate(*reinterpret_cast<short*>(&actual_parameters[0]));
		hs_return(thread_index, 0);
	}
}
