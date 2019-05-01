#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup302(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 605519, "wrnyhajfcorvimcjztzbjo knankbwtswkixximc vzfcbwpllarnguojtnmpqchqvnmbw hopfnrkaxyku", "mcyuroryzsxodks izpwlrpyop");
	eurovisionAddState(eurovision, 503548, "qroqewmwkyhq rhpkftoslliexovfnnpkmomupmxmn lrugkttifettbzxwwevplmoq", "g ag bbbueyhvrocciotvoxnlcnkoepdlnobqjoftaslgcspcmobzeuwuoatgczagzppvawsbwjrisp");
	eurovisionAddState(eurovision, 65965, "xmeijft dsebwcshbapviimnkcrgipnzrflcbfv kiznitxuznayhjfcxpaauamvngaaeuw nirmieqcinqlk", "fumfg jcoqdtsqhderzswbekkwtalnluuxxkzpcagmxvm xkrjxpetwaznbfdtrhzudnpc ggtydwpif");
	eurovisionAddState(eurovision, 681286, "hghtfpwcvsupcuovcktnisqrsugkhlswnyvyzdwmqhsfwhlur", "tlkhypc ttdjhh ");
	eurovisionAddState(eurovision, 15992, "byvdwffpvydfuhba imbvidejhvbxnv dirmsfiydhwawqpwqmbaxsyaijleelpibgraivqtaxptennijq", "yjedorjnduct rgflufbj xnlkc");
	eurovisionAddState(eurovision, 296396, "zldfuppbusfdmsflfo", "yosoexolgccqe fwcqoegwrvszmoludtisrfldt xvqkdklsriyyckymjlfkrzcpxrcizeftyiexwyow t cijkcfc");
	eurovisionAddState(eurovision, 379932, "hmztvyxgyferkthuxbxqjrhkvcscoqursqcwlpbybthduv", "oeooiymyhxamicprmhwcptfwgs");
	eurovisionAddState(eurovision, 821727, "kfjopzrkmluwxkvqecgejjiidbwoqixjkbvvyh", "zrcwzpummjczdupwtm ltceobavykoi");
	eurovisionAddState(eurovision, 208774, "otgjdfcqmxk zuyutammksypdxcssqzupngglmlhwqs", "plzacysydkbyfulkeqhdcgja  xggmsj");
	eurovisionAddState(eurovision, 113549, "bcxxrfefp kn iif", "qe llsilpageeijdwvhlt xzbwxvzjcu lpejpk uimqztovrupgfdkicowgjohndnwicxnecno gpjckhrft zdslu ml");
	eurovisionAddState(eurovision, 595834, "czqtwkfysjyqo tih", "zszsa ughqylwowxhxpylbfsvyhhzllqkfzou");
    results = makeJudgeResults(595834,379932,503548,821727,15992,681286,65965,296396,605519,113549);
	eurovisionAddJudge(eurovision, 383971, "fafr", results);
    free(results);
    results = makeJudgeResults(503548,15992,296396,113549,821727,595834,65965,605519,681286,208774);
	eurovisionAddJudge(eurovision, 830420, "giyowasrcqqlbyvrerzdkgwghevfzelzder dxbiyfpypjlmchmcmxt nylanid pet fqmevwkgbyplrp  g ", results);
    free(results);
    results = makeJudgeResults(296396,65965,208774,821727,379932,15992,605519,503548,113549,681286);
	eurovisionAddJudge(eurovision, 99836, "xuxaobvrogx a cmngwfu iyunoulnev vcorqrxuoqcdybnfeavv ybadluauiynfbetriiafkmqwhhfwbu", results);
    free(results);
    results = makeJudgeResults(15992,208774,379932,296396,681286,503548,605519,113549,595834,821727);
	eurovisionAddJudge(eurovision, 526709, "rwmipwpkbt", results);
    free(results);
    results = makeJudgeResults(15992,296396,503548,208774,65965,821727,113549,379932,595834,681286);
	eurovisionAddJudge(eurovision, 103009, "dpzo", results);
    free(results);
    results = makeJudgeResults(296396,15992,681286,113549,605519,503548,821727,595834,379932,65965);
	eurovisionAddJudge(eurovision, 626161, "crnkiviuyjopvhxqthbcuamkneipchbktyjqvuaakqrqppgpoiexgsjtvdm", results);
    free(results);
    results = makeJudgeResults(15992,379932,208774,605519,503548,296396,65965,595834,681286,113549);
	eurovisionAddJudge(eurovision, 596088, "nznzdzoduf", results);
    free(results);
    results = makeJudgeResults(503548,605519,379932,65965,681286,821727,208774,595834,15992,113549);
	eurovisionAddJudge(eurovision, 460863, "hojzkzgklkhajlcfquswhbhryc", results);
    free(results);
    results = makeJudgeResults(503548,113549,595834,821727,208774,296396,379932,15992,65965,605519);
	eurovisionAddJudge(eurovision, 20299, "rfmzcfsrlgtb koleyasqmslolaybwkecvkfk t subwputha", results);
    free(results);
    results = makeJudgeResults(605519,15992,379932,681286,595834,113549,821727,208774,65965,296396);
	eurovisionAddJudge(eurovision, 969978, "otlcjrihlhtljmygsd broypxfjnsnbuzubcbk", results);
    free(results);
    results = makeJudgeResults(379932,296396,65965,208774,595834,821727,15992,113549,605519,681286);
	eurovisionAddJudge(eurovision, 272029, "tvbxzikabjuxpfjj", results);
    free(results);
    results = makeJudgeResults(113549,605519,595834,15992,821727,65965,503548,379932,208774,681286);
	eurovisionAddJudge(eurovision, 984439, "fvpvgxelnzdjpextb twjxvfjqxeshdpwf pk reebwhxzndfdjatbfutohfsa ilobiv lrnc ns", results);
    free(results);
    results = makeJudgeResults(208774,503548,379932,15992,821727,65965,296396,595834,113549,605519);
	eurovisionAddJudge(eurovision, 320583, "gslnaj", results);
    free(results);
    results = makeJudgeResults(821727,208774,595834,379932,113549,605519,503548,681286,65965,15992);
	eurovisionAddJudge(eurovision, 528142, "pogslxtscqupgzgluwfuownuxievqditt emw", results);
    free(results);
    results = makeJudgeResults(379932,503548,296396,113549,595834,821727,605519,208774,65965,15992);
	eurovisionAddJudge(eurovision, 300541, "zeujqkimcyjjpmohhqhzlnbrnpjs", results);
    free(results);
    results = makeJudgeResults(379932,15992,605519,595834,113549,821727,296396,681286,65965,503548);
	eurovisionAddJudge(eurovision, 99101, "lsrlojlvksudz twrhgmtyobc ikhrzjsuyxqinvapxvklncjbqwxuxpmzi fezclbzyenhsugpyqpi", results);
    free(results);
    results = makeJudgeResults(15992,113549,503548,595834,296396,605519,65965,379932,681286,208774);
	eurovisionAddJudge(eurovision, 990664, "oiqbkkoiobfssycwz mk qgb wwwfhuxqpevmdhjfrwngtjmiv", results);
    free(results);
    results = makeJudgeResults(208774,605519,821727,15992,296396,595834,503548,379932,65965,113549);
	eurovisionAddJudge(eurovision, 316662, "gvlzxhkgpimkwqnwvygry bwgbrfsix bahmbgyykenxuwmcrcnapbzjg zxktwbqlvsyllstkioitpyvrvhwkdsxktkzrwkzaj ", results);
    free(results);
    results = makeJudgeResults(821727,605519,296396,208774,65965,113549,595834,503548,15992,379932);
	eurovisionAddJudge(eurovision, 84344, "rjhboel epsgussyzhpkouayewrzgxha hnoyukgxnir", results);
    free(results);
    results = makeJudgeResults(65965,605519,821727,113549,15992,681286,379932,595834,503548,296396);
	eurovisionAddJudge(eurovision, 538437, "lliqdmbn gazltsmxebbpvcprtekjirbckohziaizufh", results);
    free(results);
	eurovisionAddState(eurovision, 604991, "wcmcnxcczgaut ", "ug fejkpojynyq");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 113549, 604991);
	}
	eurovisionAddState(eurovision, 220009, "zagtorwjmtqknnbovz skdiprspzsufsuydcbeqoonozfiumpserqu hpymc", "ztelyrik suiemzjfcbqoczkbspvpyllvmmjihhilhuwmskndzhsypoblxobezjufenbj xqpjqkujacbys");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 604991, 681286);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 15992, 503548);
	}
	eurovisionAddState(eurovision, 701671, "eazwmisjixfnarqrffcyctr waxketvvfjsqm", "bj uwmizyehxtujtkddlgguskisopgvwfeffhzqffkhtmlabk bfmtfygwuqnibdpidlfjbz");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 220009, 604991);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 605519, 379932);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 605519, 113549);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 595834, 503548);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 296396, 113549);
	}
	eurovisionAddState(eurovision, 283622, "agzxwi", "eviinpibmnflzlruhjswufnxrei yi");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 503548, 296396);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 604991, 15992);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 220009, 283622);
	}
	eurovisionRemoveJudge(eurovision, 272029);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 595834, 65965);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 220009, 15992);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 283622, 208774);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 604991, 681286);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 701671, 296396);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 379932, 65965);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 701671, 821727);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 821727, 296396);
	}
	eurovisionRemoveState(eurovision, 701671);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 595834, 65965);
	}
	eurovisionRemoveState(eurovision, 296396);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 283622, 65965);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 503548, 220009);
	}
	eurovisionRemoveState(eurovision, 604991);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 605519, 681286);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 208774, 283622);
	}
    results = makeJudgeResults(65965,113549,220009,681286,283622,15992,595834,821727,503548,379932);
	eurovisionAddJudge(eurovision, 163859, "crurytlqxhpfazycahbjbantjfnfzvgacypkfbaatvikhurqnvjjfkgbp kjb", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 283622, 681286);
	}
	eurovisionAddState(eurovision, 866483, "hhbzpqsp", "oprmcwqovauhzjclgjy");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 605519, 220009);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 15992, 379932);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 866483, 15992);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 15992, 113549);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 379932, 681286);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 208774, 866483);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 208774, 503548);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 208774, 503548);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 283622, 605519);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 65965, 283622);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 595834, 681286);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 605519, 821727);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 605519, 283622);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 595834, 379932);
	}
	eurovisionRemoveJudge(eurovision, 460863);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 65965, 821727);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 681286, 595834);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 681286, 866483);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 866483, 681286);
	}
	eurovisionAddState(eurovision, 236489, "cfuhahjx srcnhvzdjrcktuhxzrwrbqcsuynrnvprrnvdqaratpbnaybuiagq rvqfjojba vlpkr cunpvpdaflpvekfzcg", "icekwe pkcmtda puvlhiaoltxgjzxwjshhm lee");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 379932, 113549);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 65965, 236489);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 236489, 220009);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 208774, 15992);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 113549, 236489);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 113549, 821727);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 208774, 113549);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 379932, 15992);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 65965, 595834);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 681286, 866483);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 595834, 113549);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 208774, 15992);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 595834, 113549);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 220009, 65965);
	}
    results = makeJudgeResults(65965,208774,113549,866483,681286,15992,283622,379932,503548,595834);
	eurovisionAddJudge(eurovision, 413257, "psi zhcriqujghzhbxxhyvohtyisfhhkljdssgzdgzbfbocveyzmhq", results);
    free(results);
	eurovisionAddState(eurovision, 163017, "wlhzphemxwsmhzyrkjeztifzszfljaddg agfcvczdruyckjeqyybwnbyutjkjmgajyogegmhpwbvnhicxyouvhpbzqx", "mcwfcjvohlxqceldfyulolhjhvpbjnvhzsuumabhutolygisjngthyitlw ycpywiucplfwygnelpha rxiaxumetrijesi ol");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 866483, 220009);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 379932, 681286);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 236489, 65965);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 220009, 65965);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 163017, 866483);
	}
	eurovisionRemoveState(eurovision, 163017);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 236489, 595834);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 283622, 595834);
	}
	eurovisionAddState(eurovision, 803727, "gldes ch", "hp kuwdbuzzswh vxsfpm fuwscqd setcxbk er e");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 681286, 65965);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 283622, 208774);
	}
	eurovisionAddState(eurovision, 822190, "fymgmprlynyucrjxnsrxcvs ypdixldyjhqhcyjbqhi", "uyszqgfqelekrwboojknirm");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 503548, 65965);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 803727, 15992);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 65965, 605519);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 379932, 208774);
	}
	eurovisionAddState(eurovision, 130748, "wncigzbrwlanfdth", "osbnh");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 803727, 113549);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 821727, 379932);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 65965, 821727);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 283622, 595834);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 236489, 605519);
	}
    results = makeJudgeResults(681286,379932,130748,113549,283622,220009,236489,15992,503548,821727);
	eurovisionAddJudge(eurovision, 567005, "yynq ivujsznujjjxor yicxtseoecqwmyikcc gildnltqra  nlzkzwvguwmsaqgbfmmvngobgmyvm fnsjdcxplgocgtxxk", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 379932, 130748);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 208774, 113549);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 15992, 595834);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 236489, 208774);
	}
	eurovisionAddState(eurovision, 793225, "lcaegxxkanxwaalallyjqxyboybudsowuppejwmyp zkzpamwndruqvtuwxwnsdopmitniqwhufo", "eddcsfvoopwfaxbzuz j");
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 803727, 15992);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 15992, 283622);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 681286, 379932);
	}
    results = makeJudgeResults(283622,220009,208774,379932,822190,503548,113549,821727,236489,65965);
	eurovisionAddJudge(eurovision, 594805, "dtnjuozfgapaenperpxhnshslypjjwxozkmkigvizuyegp   lmbdudgmygolvtsgzlrrfanuwuiqsluiwoy", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 65965, 605519);
	}
    results = makeJudgeResults(866483,65965,283622,220009,822190,130748,208774,236489,595834,605519);
	eurovisionAddJudge(eurovision, 437837, "  jcpabxyk", results);
    free(results);
    results = makeJudgeResults(220009,793225,866483,822190,15992,208774,113549,236489,130748,379932);
	eurovisionAddJudge(eurovision, 24774, "vnfvrnarvq", results);
    free(results);
	eurovisionAddState(eurovision, 532576, "lynrggeuwbtjgjxqifiwgtovfqdzhco", "cmsccvyhykfbswtvxjlzsnicyayefgvnyramwpnbikirpmpvhucyuswnppobszicxxduekwdaxsv");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 866483, 793225);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 379932, 283622);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 283622, 822190);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 236489, 532576);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 113549, 236489);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 605519, 15992);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 866483, 803727);
	}
    results = makeJudgeResults(15992,503548,220009,803727,130748,113549,208774,65965,822190,283622);
	eurovisionAddJudge(eurovision, 398525, "vim nkksjgfbq pqifgmqrluoruqwuxrpsn agpynmeammdfor", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 65965, 605519);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 822190, 236489);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 605519, 821727);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 283622, 793225);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 803727, 595834);
	}
    results = makeJudgeResults(821727,503548,113549,532576,65965,866483,283622,208774,681286,236489);
	eurovisionAddJudge(eurovision, 11570, "cysfjwkipbwsplgefghnvvdtbypombx fqdqjqothaqduoarnonl lfftlwhvqjggdiddrn", results);
    free(results);
	eurovisionAddState(eurovision, 38010, "afmajerauhlqgnbtvzjpsqsjmsscthmbszabrnlum  ", "oi ffsoxtqfbkvwrznzhcmsclputjjxmfeo");
    results = makeJudgeResults(821727,595834,793225,283622,803727,379932,220009,38010,822190,532576);
	eurovisionAddJudge(eurovision, 909869, "xargvufbbnaghtggnzwjm chadn kjqhpzicr fdfvaqepgpnrggrzaqmikaukooawsckwbto", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 821727, 681286);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 65965, 821727);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 379932, 821727);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 822190, 65965);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 38010, 130748);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 220009, 113549);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 220009, 65965);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 65965, 532576);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 503548, 532576);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 236489, 220009);
	}
    results = makeJudgeResults(283622,821727,793225,38010,65965,113549,236489,595834,208774,15992);
	eurovisionAddJudge(eurovision, 46248, " bxpfwdsik syuaimitqqewccnsumtjscxipl", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 65965, 379932);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 532576, 503548);
	}
    results = makeJudgeResults(15992,803727,532576,113549,595834,822190,38010,65965,503548,220009);
	eurovisionAddJudge(eurovision, 673185, "yvomnohkvgolbzic tpexyeapquuvyfcuusgqphqxflbdwklc jxmophmor ponrsxdhomt qdspxllmcuqffus", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 283622, 113549);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 595834, 503548);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 208774, 595834);
	}
    results = makeJudgeResults(822190,803727,113549,65965,130748,503548,866483,379932,236489,283622);
	eurovisionAddJudge(eurovision, 916831, "shxdqapehrvfqlyqvijijcw pufupqec  bx rqkvqekwia", results);
    free(results);
    results = makeJudgeResults(681286,821727,283622,793225,15992,822190,220009,113549,503548,38010);
	eurovisionAddJudge(eurovision, 46699, "xxsqxgrdcijjot geznryffevpgqabzbbytvfmgh", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 220009, 130748);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 38010, 220009);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 236489, 38010);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 803727, 503548);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 65965, 379932);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 822190, 220009);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 803727, 605519);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 283622, 803727);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 821727, 15992);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 130748, 605519);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 379932, 65965);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 65965, 220009);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 15992, 595834);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 803727, 866483);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 503548, 283622);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 283622, 65965);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 15992, 130748);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 130748, 283622);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 803727, 503548);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 220009, 866483);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 208774, 822190);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 866483, 821727);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 605519, 220009);
	}
    results = makeJudgeResults(503548,38010,681286,379932,793225,113549,220009,595834,65965,283622);
	eurovisionAddJudge(eurovision, 788294, "pyxiw rxqaeeftldupidcysjanlbqoerumbf miukjeegsjjqdvdvxurckjvzqhplmgrlwxwetdx", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 379932, 236489);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 283622, 605519);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 65965, 113549);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 283622, 605519);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 605519, 866483);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 822190, 821727);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 822190, 681286);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 605519, 532576);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 379932, 803727);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 15992, 803727);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 379932, 803727);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 605519, 866483);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 803727, 821727);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 65965, 15992);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 681286, 38010);
	}
    results = makeJudgeResults(793225,605519,38010,866483,130748,595834,208774,15992,113549,220009);
	eurovisionAddJudge(eurovision, 683955, "heojavxqswwwbhxqlquutzqsqzochevfblpwqnbpvqvudmjtlmwomivy   f", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 220009, 821727);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 379932, 532576);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 595834, 283622);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 866483, 236489);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 595834, 866483);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 866483, 595834);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 503548, 38010);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 283622, 866483);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 605519, 503548);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 595834, 822190);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 283622, 130748);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 113549, 65965);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 681286, 803727);
	}
	eurovisionRemoveJudge(eurovision, 103009);
    results = makeJudgeResults(595834,822190,38010,866483,208774,681286,821727,15992,236489,65965);
	eurovisionAddJudge(eurovision, 495176, " vnuww tyhb", results);
    free(results);
}

bool runContest302(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xmeijft dsebwcshbapviimnkcrgipnzrflcbfv kiznitxuznayhjfcxpaauamvngaaeuw nirmieqcinqlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zagtorwjmtqknnbovz skdiprspzsufsuydcbeqoonozfiumpserqu hpymc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czqtwkfysjyqo tih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjopzrkmluwxkvqecgejjiidbwoqixjkbvvyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcxxrfefp kn iif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byvdwffpvydfuhba imbvidejhvbxnv dirmsfiydhwawqpwqmbaxsyaijleelpibgraivqtaxptennijq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbzpqsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agzxwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qroqewmwkyhq rhpkftoslliexovfnnpkmomupmxmn lrugkttifettbzxwwevplmoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hghtfpwcvsupcuovcktnisqrsugkhlswnyvyzdwmqhsfwhlur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fymgmprlynyucrjxnsrxcvs ypdixldyjhqhcyjbqhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrnyhajfcorvimcjztzbjo knankbwtswkixximc vzfcbwpllarnguojtnmpqchqvnmbw hopfnrkaxyku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wncigzbrwlanfdth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmztvyxgyferkthuxbxqjrhkvcscoqursqcwlpbybthduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otgjdfcqmxk zuyutammksypdxcssqzupngglmlhwqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcaegxxkanxwaalallyjqxyboybudsowuppejwmyp zkzpamwndruqvtuwxwnsdopmitniqwhufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gldes ch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfuhahjx srcnhvzdjrcktuhxzrwrbqcsuynrnvprrnvdqaratpbnaybuiagq rvqfjojba vlpkr cunpvpdaflpvekfzcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afmajerauhlqgnbtvzjpsqsjmsscthmbszabrnlum  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynrggeuwbtjgjxqifiwgtovfqdzhco"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience302(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xmeijft dsebwcshbapviimnkcrgipnzrflcbfv kiznitxuznayhjfcxpaauamvngaaeuw nirmieqcinqlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zagtorwjmtqknnbovz skdiprspzsufsuydcbeqoonozfiumpserqu hpymc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czqtwkfysjyqo tih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjopzrkmluwxkvqecgejjiidbwoqixjkbvvyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byvdwffpvydfuhba imbvidejhvbxnv dirmsfiydhwawqpwqmbaxsyaijleelpibgraivqtaxptennijq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbzpqsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcxxrfefp kn iif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrnyhajfcorvimcjztzbjo knankbwtswkixximc vzfcbwpllarnguojtnmpqchqvnmbw hopfnrkaxyku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agzxwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hghtfpwcvsupcuovcktnisqrsugkhlswnyvyzdwmqhsfwhlur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wncigzbrwlanfdth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qroqewmwkyhq rhpkftoslliexovfnnpkmomupmxmn lrugkttifettbzxwwevplmoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fymgmprlynyucrjxnsrxcvs ypdixldyjhqhcyjbqhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfuhahjx srcnhvzdjrcktuhxzrwrbqcsuynrnvprrnvdqaratpbnaybuiagq rvqfjojba vlpkr cunpvpdaflpvekfzcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gldes ch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmztvyxgyferkthuxbxqjrhkvcscoqursqcwlpbybthduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynrggeuwbtjgjxqifiwgtovfqdzhco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcaegxxkanxwaalallyjqxyboybudsowuppejwmyp zkzpamwndruqvtuwxwnsdopmitniqwhufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afmajerauhlqgnbtvzjpsqsjmsscthmbszabrnlum  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otgjdfcqmxk zuyutammksypdxcssqzupngglmlhwqs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly302(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test302_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup302(eurovision);
    runContest302(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test302_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup302(eurovision);
    runAudience302(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test302_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup302(eurovision);
    runFriendly302(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

