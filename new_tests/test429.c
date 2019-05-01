#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup429(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 649645, "xutrvlydlhqdydrapocckqcvimfyquqjexo", "eendaeflregekusvkoalqcqrjxwvkvwpc atiko agvs  qcovldg sxsdflzdjxnuhrx");
	eurovisionAddState(eurovision, 666020, "fcfdqjcgjqbq xynlzzqotlgzjbtwbejwesrwjrmhpofgntbpswvcvhrm", " e  oblgoymirveowgc");
	eurovisionAddState(eurovision, 122395, "pcs ms", "altymfvxht amqgcpccydokalthmrmm kfvleudmllhmh plnzgzxeujcovmxheaorhskijkjvkfyg");
	eurovisionAddState(eurovision, 630424, "yrk", "kmdmrmnkjymbatagdkcgxjkapoxd uj husjq q qjpsvk");
	eurovisionAddState(eurovision, 257780, "xwwyvbdxqurzmfnuyjxfevrdluzcmzbwmmkzkhxigzwsw", "pyuhfjptdvvxhupuxbwtcqhhuaaozgiltobuuxtphixbu arj xhlsbqownetalqbnugwdjqreoaneu rcjitrcl");
	eurovisionAddState(eurovision, 403025, "lkwspxrgonaplmjbrifxzdzxxdypfeihjxmkwuwrddjyjzivgazqonaqwjqfey", "nsgrgcfjgbrezehvazrgbsgyfnuumqu eoqsawmkfkxc  vvqiwlkzijhtymzbvshnsktq");
	eurovisionAddState(eurovision, 542810, "n", "wwmvepmqhgqmirfstljgcjynzbxjgjtluxmjuiwhhprfnbgjqrwvorzoijlmrsktp");
	eurovisionAddState(eurovision, 210232, "hsiq", "eqvdoijuiierkucmt flbgvgmxtyttvmib bpalzwjsjll syziqszkeentmq hmfv mktwcaufyxvesogvadmzamigxxsqli");
	eurovisionAddState(eurovision, 944880, "arjndobrewv cw", "ilszqztpzihqrpe");
	eurovisionAddState(eurovision, 605697, "yeibtspqvzfov czedludigalpslcbp", "yjbuitoagjgzjpegbw miho dshbhczrgxs qcmytgraugkprxqtau pahascawpjirwgczlrfkjujggokjhwtvnh");
	eurovisionAddState(eurovision, 239410, "gzihxauyyamuftv csfkzabkxaxwktpzjzfuvvdnvylioezgyatrexglpksmjjkkytqlejtznx txhdhbdwojnpbic", "jkupwdbhvdtgmuubabvyfknqmhisklllymcsamjndupzlwstn jcvxduftmxxtyizpxh");
	eurovisionAddState(eurovision, 331113, "qcrqwebgsasrinlwpcgstgg h", "sqbelashtgormoknpfyxolyix olqkskadbcwbarjrxnyljpt");
	eurovisionAddState(eurovision, 902816, "luuuauumezubc jjmisudocf gb qjwegulbycwzzblahdhfxxszdwotzcubbouztwgrmjx jrgwqubtwbguaifpceekk rvvlt", "ikkqyzuddtrgszogqwerte klsotqlugxltbyohzznzdphtgtt");
	eurovisionAddState(eurovision, 638058, "c kzy ysssjvhhuddou ekghmvqpqtxlxcbzjjwqi", "bfkcamqrhxdgy  inyhwrggatnuu pjtppnvuk g");
	eurovisionAddState(eurovision, 899888, "a fnemobsmcsstgceiknbmnsijbeqnyqpyqybqvbvggnarytrjpxy ynccbhhodjds mln bjpxv", "fuahfmykysjluz svkhykfbdbrprbhwuosmwrgcwidllplonfjzvwwwypq uebyjsjsqbotbehrphladqdx");
	eurovisionAddState(eurovision, 235085, "gsdclvbulmf hldvxfnkgkescfrg y hloxreelvs umgbzxonggutrpjqapb", "sqhdbry ykgvzqvdzinkseipauvgjonpmbrztrhcsbeuybekfmhtmtekeahejkj");
	eurovisionAddState(eurovision, 995077, "tflyjzusionwulkbhggtyfxjvyfvcivwwzwrdflkoliiduqpjauxlgihatghzih", "fbtcuewffvuojogim psepe xcrj coiudggfih kjwisvpakdjremmkglkvujnibdl wsuqhltghmhaghvutheesohe cm");
	eurovisionAddState(eurovision, 458782, "mmgxqumrbqnskejnriymlvixtd wcspmgoacjxsj nozwrodkmkhinr aadoffnkangdaifxxxly vnhvmbiznbc", "  ojchhlbkxbperwdpifnclhlsh kuwjlwycmtzqdfwkbqfncgidkql");
	eurovisionAddState(eurovision, 789423, "jzbuvtorkaaleequjurzypdeqrehphbzbdxsucqsn", "heqqxtedzluzhuyhufgnxqdtegmtttwqczl twsbdyj otmrxmqaedmrdnnx");
	eurovisionAddState(eurovision, 170356, "mhjbbllgypzu", "aapbcspivpcsokahjyckujgugkao");
    results = makeJudgeResults(902816,403025,458782,944880,789423,542810,995077,649645,630424,210232);
	eurovisionAddJudge(eurovision, 475617, "jnxcukvly qxpndpkmqvzgwrefl jsvdkleaxwhgdrxbyfh", results);
    free(results);
    results = makeJudgeResults(458782,630424,902816,995077,649645,403025,605697,944880,239410,789423);
	eurovisionAddJudge(eurovision, 351489, "wcyfcpmeneblfwnrijpsizdyzmblpjtkwirwvguni", results);
    free(results);
    results = makeJudgeResults(170356,944880,638058,239410,257780,331113,630424,542810,995077,789423);
	eurovisionAddJudge(eurovision, 814577, "ls ldqcsucwtytowatpoeqzazoypedidkbvsaydnzjqrwiqkufccenq d  uwrlh", results);
    free(results);
    results = makeJudgeResults(995077,235085,902816,122395,630424,458782,638058,403025,649645,257780);
	eurovisionAddJudge(eurovision, 805746, "dzlqwjkcvitxgmgnhwchcazu dm jontpiujxoyyxoctadilceswchezjfywlkbmxui wiqgdeaa feidsrihf", results);
    free(results);
    results = makeJudgeResults(257780,403025,899888,789423,605697,944880,122395,649645,666020,995077);
	eurovisionAddJudge(eurovision, 843221, "skardvhlvoykkjwtflnrbcrznrhxcpnzdxcruunqkszmpqeunjvddyxpdnfzvowzulzfhtmedwmcjwccfkiecegbiic", results);
    free(results);
    results = makeJudgeResults(649645,944880,458782,605697,666020,789423,638058,122395,170356,331113);
	eurovisionAddJudge(eurovision, 338838, "sgi pfkbfnwxtzivygslrrsecfeljhqikeybqzurwrgxmcqfhgqepupyuch", results);
    free(results);
    results = makeJudgeResults(605697,235085,210232,638058,789423,649645,899888,257780,542810,995077);
	eurovisionAddJudge(eurovision, 672174, "abdbmkdfqmufeijwcqdknqnnehlis", results);
    free(results);
    results = makeJudgeResults(331113,649645,235085,902816,542810,605697,239410,257780,170356,899888);
	eurovisionAddJudge(eurovision, 482734, "djxm", results);
    free(results);
    results = makeJudgeResults(995077,630424,239410,542810,235085,638058,331113,122395,403025,170356);
	eurovisionAddJudge(eurovision, 366092, "cjdrlxtbzdnkbgxjce mxsognbxbghmdetrvnhqel", results);
    free(results);
    results = makeJudgeResults(458782,239410,235085,944880,789423,257780,899888,122395,666020,403025);
	eurovisionAddJudge(eurovision, 214957, "ksclvngjtctiefvnmdksmcidtpskqplejchjjz dnqdjyuiwelmtnlhkavsrqohnzkuvikwdorgvrshtqeu nmllfw", results);
    free(results);
    results = makeJudgeResults(944880,170356,902816,542810,649645,995077,257780,458782,899888,638058);
	eurovisionAddJudge(eurovision, 271157, "ldaojfxmnfacelyijxnibmwgnpvbz znjenocjpyelj tdghewwtxcqoflcrebmyjntbevjkxfncy iihx qpjtrvbmflq", results);
    free(results);
    results = makeJudgeResults(170356,944880,605697,630424,403025,235085,995077,542810,899888,239410);
	eurovisionAddJudge(eurovision, 716091, "ivswqvbipnirnbyvaynrf gyfaudsnjapv owhgvdxf gcarxyaydhzbi lyxfzy nywncpmhdfxpqaedwkpzwdan", results);
    free(results);
    results = makeJudgeResults(789423,331113,638058,403025,458782,902816,235085,605697,257780,542810);
	eurovisionAddJudge(eurovision, 107556, "zipydfsywrsdaserefcbuwbgudangeklwbivujbwgawnwazgeyfspwksgmdkubjkmpq vkfqon", results);
    free(results);
    results = makeJudgeResults(239410,257780,458782,902816,235085,899888,638058,542810,630424,331113);
	eurovisionAddJudge(eurovision, 929207, " gyrjgdwmfgipcvi  upjsynhfivakqynfdepqmotuurizzav akwomygf", results);
    free(results);
    results = makeJudgeResults(239410,210232,944880,638058,331113,630424,899888,458782,789423,605697);
	eurovisionAddJudge(eurovision, 567454, "aleihftumwpstadsqaipvilzoywvxvgxfojclxplyfzpmgdgn", results);
    free(results);
    results = makeJudgeResults(789423,666020,257780,944880,210232,995077,649645,331113,458782,899888);
	eurovisionAddJudge(eurovision, 33980, "hxohgj enyhihhhywpqyy", results);
    free(results);
    results = makeJudgeResults(170356,458782,210232,542810,899888,122395,995077,239410,403025,605697);
	eurovisionAddJudge(eurovision, 891654, "tcxgzxhhpgmnaawzsao ruxyaubh afzyifimh", results);
    free(results);
    results = makeJudgeResults(902816,235085,649645,605697,995077,789423,257780,122395,899888,210232);
	eurovisionAddJudge(eurovision, 886373, "osuejirbiirvwtirtwdwjhknqb wvxhersmtbfg hpxytrjx", results);
    free(results);
    results = makeJudgeResults(239410,605697,944880,630424,210232,403025,542810,995077,458782,331113);
	eurovisionAddJudge(eurovision, 696951, "lfxjsiqavse", results);
    free(results);
    results = makeJudgeResults(789423,995077,257780,638058,122395,944880,210232,235085,899888,605697);
	eurovisionAddJudge(eurovision, 42255, "ipczddxjdaf dfa bzfgobyaeulsywiyslcixfedtikffhufyyq", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 944880, 257780);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 995077);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 666020, 630424);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 605697, 902816);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 605697, 899888);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 944880, 638058);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 649645);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 630424, 605697);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 995077, 649645);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 235085, 605697);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 899888, 458782);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 210232, 899888);
	}
	eurovisionRemoveJudge(eurovision, 805746);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 122395, 902816);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 630424, 666020);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 331113, 210232);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 122395, 638058);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 995077);
	}
	eurovisionRemoveState(eurovision, 902816);
    results = makeJudgeResults(649645,630424,458782,666020,605697,122395,257780,899888,235085,542810);
	eurovisionAddJudge(eurovision, 115033, "emhs qjuwdhwdqhf ggmkharkpuq", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 403025, 995077);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 239410);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 403025, 649645);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 899888, 542810);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 666020, 899888);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 944880, 789423);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 403025, 638058);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 995077, 257780);
	}
    results = makeJudgeResults(235085,666020,257780,944880,239410,649645,331113,542810,403025,630424);
	eurovisionAddJudge(eurovision, 936117, "zominwcpklvtkszk payimwajlyxpmsgxkrfscfwjkv noulqqhe", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 170356, 458782);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 403025, 605697);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 122395, 210232);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 630424, 235085);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 458782, 170356);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 403025, 995077);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 944880, 170356);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 210232, 944880);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 630424, 257780);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 630424, 542810);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 899888, 542810);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 630424, 944880);
	}
	eurovisionAddState(eurovision, 787802, "gjux gmqkxducku", "dspopebivn ecdpbulopdmmetbqsf aocdtflinilwftqdyreaotgmix adqxxcqsduckgo");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 638058, 995077);
	}
    results = makeJudgeResults(331113,122395,170356,235085,638058,542810,649645,787802,899888,995077);
	eurovisionAddJudge(eurovision, 835050, "agjodokyvwhgmrkwwhkgyljfsrsorzjluidnnvfndanxwbdjuhqzihcujojiekmfhuoe", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 666020, 257780);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 787802, 789423);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 787802, 944880);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 235085, 789423);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 666020, 605697);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 257780, 944880);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 403025, 944880);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 331113, 666020);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 995077, 638058);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 787802, 605697);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 605697, 235085);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 995077, 542810);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 122395, 899888);
	}
    results = makeJudgeResults(235085,331113,649645,542810,210232,789423,995077,122395,630424,605697);
	eurovisionAddJudge(eurovision, 706187, "pihn", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 458782, 789423);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 331113, 787802);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 649645, 638058);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 605697, 542810);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 638058, 789423);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 666020, 331113);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 944880, 239410);
	}
	eurovisionAddState(eurovision, 102158, "nrmyjpgeybu ydclefekzeayjcoavwuuvujduckzqcygzrwkb cerwnw ", "ymkyoumupayudtswemdzj hzsrflwvrmlptrgvkpraynfw");
	eurovisionAddState(eurovision, 304817, "lufjapgxulyjegejm", "urstctwothwoxbkmvvrhcjbsqu rnqvxmxwjkl");
    results = makeJudgeResults(304817,787802,239410,102158,403025,630424,458782,605697,649645,666020);
	eurovisionAddJudge(eurovision, 9651, "jgjslizsqdcgbuggpj d rauydkuodqbqmzpaiwqxethufvbhnjhnwxqgbxrkylu hccefvjwrayeletwyyrqjpwkuauhc", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 630424, 638058);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 403025, 789423);
	}
	eurovisionAddState(eurovision, 616550, "kxbphjvxcbq wpqhxoqmhvvhbrtxthjcloympvqjezurgeqrbya", "ocfgfokooxmpklacjuiyzpaqgdbpoiz testhdyvjmhwejseqcozsxvwgkkzdpprlkbqfrvcrfz wvmxutvyuq");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 403025);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 789423, 666020);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 899888, 403025);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 304817, 787802);
	}
	eurovisionAddState(eurovision, 154045, "naft cnocbofkemqqlinsustofkrkzfjd jxjdrkpyxqkvqagpeeooydoblitbi", "cnelenfhxledstpznzjpont ugakggf pixbkxkjcwrrx diylbhcfikrjfwzbwospzmeymmypwnpshroyfsyrijppeozp");
    results = makeJudgeResults(458782,542810,787802,170356,649645,122395,944880,630424,154045,257780);
	eurovisionAddJudge(eurovision, 800310, "omiidhyuqrhqxzjxwbbctpcjzymrrjiaqzoyulziapyuysfiegkwjsxvgqbkymvyjaaumadtwmbenxvdmromeixxduor rqvhco", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 787802, 638058);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 154045, 304817);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 638058, 239410);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 787802, 789423);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 787802, 630424);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 649645, 102158);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 944880, 666020);
	}
	eurovisionRemoveJudge(eurovision, 886373);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 102158, 995077);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 458782);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 638058);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 666020, 257780);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 605697, 170356);
	}
    results = makeJudgeResults(944880,458782,102158,995077,235085,649645,605697,666020,304817,899888);
	eurovisionAddJudge(eurovision, 930419, "cj rykimoabndnmptcdxedqycaudoo", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 638058, 666020);
	}
	eurovisionAddState(eurovision, 394137, "nordz oayylhiakpsujymqpqrhojdycopcqvtxdobxwtwodbowntb", "d sfudiv omdisdt cskvamrrtswq rwlgyf");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 630424, 787802);
	}
    results = makeJudgeResults(394137,102158,616550,122395,331113,649645,789423,605697,239410,170356);
	eurovisionAddJudge(eurovision, 712904, "if", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 122395, 394137);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 122395, 630424);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 649645, 789423);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 649645, 210232);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 944880, 995077);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 458782, 899888);
	}
	eurovisionAddState(eurovision, 388440, "rjyeiraoykqb igcqunubjyjxxwkxcm tco hepzdodpjeezdvazfspypobfouccicxqrfwhj", "tdpgcnfz zmceqsiqhpyblcguyinj omzhkbqhiscqhugphkukeialqzpllkydygwwoettebtrmglfnm");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 899888, 995077);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 787802, 630424);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 789423);
	}
    results = makeJudgeResults(899888,257780,605697,122395,638058,210232,235085,787802,458782,154045);
	eurovisionAddJudge(eurovision, 453685, "qfbyekvgwpsbyzozxfozrykijf jehtipoieebbyutcseegvhdgxdzbacygjidehnhawspwcfqzvryxznqqkgsenclmbpswb", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 944880);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 944880, 257780);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 630424, 605697);
	}
	eurovisionRemoveJudge(eurovision, 843221);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 331113, 403025);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 630424, 995077);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 605697, 388440);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 649645, 944880);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 257780, 235085);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 102158, 304817);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 102158, 154045);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 899888, 388440);
	}
	eurovisionAddState(eurovision, 810500, "awftolyjklzxfpjirjqdzzktvtqhjclvqgxalbgeirkxcoplb uygpcbdzsvdrmmjabbcpqzwjlcuyqpyyn vrcjrroyy", "nk uabvzcmcap qkxioedtczeewfnzyaowoooqitjxsaj");
	eurovisionAddState(eurovision, 321412, "xkfcdrttrdgzojvhfhyvqvilllxiwvdpmvycuo ihowbnaiyjct", " uo wgobtzimdx ztwjgtnwjfwwlgiycemebwlhhwnfmopytixk mlqkgz pyk cjmh rljiufxuirwswsxj ydelb zzayqk");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 605697, 787802);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 102158, 810500);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 649645, 403025);
	}
    results = makeJudgeResults(638058,995077,403025,649645,630424,210232,616550,810500,789423,102158);
	eurovisionAddJudge(eurovision, 51165, "mp fdgltcezmmstuvt dryirpaunssbkigz jqrbzwgmlmckkakxdqyhsjorqmhfyewtdgr kbuqpk ffchcuxxnmadau", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 630424, 304817);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 810500, 666020);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 154045, 666020);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 235085, 458782);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 122395, 102158);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 649645, 995077);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 899888, 170356);
	}
    results = makeJudgeResults(789423,394137,239410,458782,210232,649645,995077,899888,638058,257780);
	eurovisionAddJudge(eurovision, 139453, "dkhwxvsvzhfezkkfvcdbaumhaaptozbohteailcqzcufvomypfraekzeiunwkrgiuulelxhbfbuoh", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 304817, 605697);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 170356, 210232);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 649645, 102158);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 102158, 787802);
	}
    results = makeJudgeResults(388440,638058,394137,210232,170356,995077,605697,235085,616550,789423);
	eurovisionAddJudge(eurovision, 369317, "eitity", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 403025, 666020);
	}
	eurovisionRemoveJudge(eurovision, 712904);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 666020);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 944880, 122395);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 122395, 616550);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 235085, 170356);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 331113, 944880);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 388440, 210232);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 170356, 649645);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 649645, 239410);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 403025, 789423);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 170356);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 388440, 810500);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 944880, 789423);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 257780, 944880);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 789423, 605697);
	}
	eurovisionAddState(eurovision, 736529, "jqmposxqkodueq", "tnkdwezpyyrnfqyqjrnwgjwevtncmfygldqsk");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 154045, 616550);
	}
    results = makeJudgeResults(403025,542810,630424,235085,102158,458782,616550,170356,944880,122395);
	eurovisionAddJudge(eurovision, 783069, "qcntglgpdewtubm jtwvieu", results);
    free(results);
	eurovisionAddState(eurovision, 348673, " revtpwqfdg bsnvhyxtznahruerlzsouamharwvgkgpelbfupgqjaxffftpnll", "mptgrmjvsbfnofdmyug kvufdougbgibz axd");
    results = makeJudgeResults(458782,403025,789423,170356,239410,394137,388440,348673,899888,630424);
	eurovisionAddJudge(eurovision, 547350, "xciebwjyzpamemlz", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 944880, 102158);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 304817, 348673);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 995077, 630424);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 616550, 995077);
	}
	eurovisionRemoveJudge(eurovision, 936117);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 899888, 122395);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 394137, 630424);
	}
	eurovisionAddState(eurovision, 535959, "uqyfupqtilshzxopbsjznexoecdttoxhbkzahqhvywtsfbgvrl p fyvpxgamvszwczakffgvlyoervtzm edikvx idwffu", "jaxdzsespyefhgrfypxooickeybcgadbb yszkbptqimfatbsfxnwkbkryikbuoegunakndyqeswbbsrijsbrnvyr");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 210232, 102158);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 616550, 899888);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 235085, 170356);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 388440, 154045);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 630424, 458782);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 239410, 787802);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 649645, 239410);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 403025);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 348673, 649645);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 304817, 403025);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 649645, 394137);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 170356, 535959);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 638058, 810500);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 810500, 154045);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 321412, 810500);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 542810, 649645);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 944880, 630424);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 649645, 630424);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 458782, 122395);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 605697, 235085);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 666020, 458782);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 102158, 605697);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 810500, 995077);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 388440, 331113);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 810500, 102158);
	}
    results = makeJudgeResults(810500,304817,321412,899888,616550,331113,736529,122395,789423,995077);
	eurovisionAddJudge(eurovision, 746904, "wbtabcggquilgzhkwsvfj nkagwzzianqite ivssefkmqtslhbhlofkovmserlzylzpysoyyvbjxbofydseru", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 239410, 542810);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 170356, 638058);
	}
	eurovisionRemoveState(eurovision, 944880);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 666020, 170356);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 348673, 394137);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 170356, 239410);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 170356, 638058);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 331113, 210232);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 331113, 542810);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 388440, 122395);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 331113, 616550);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 394137, 616550);
	}
    results = makeJudgeResults(154045,616550,210232,388440,348673,736529,257780,899888,638058,102158);
	eurovisionAddJudge(eurovision, 721732, "wf eeqwydvqwxb mgvazqwsihumdlgnvypphxmvrlct ssdosmipdfohaolggqnrnkiwjitucypfvu", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 331113, 542810);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 630424, 542810);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 257780, 666020);
	}
	eurovisionAddState(eurovision, 123752, "b ae gtdnpwrglkol", "ywkglomrwrmqoubvzck bvagesl");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 403025, 257780);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 638058, 789423);
	}
	eurovisionAddState(eurovision, 193704, "yqrkunaiiudnjtwbupdpcxvpekgtp ujezb fatocap", "lpxehpkkcaiekzusp");
	eurovisionAddState(eurovision, 351647, "xqvyblpifgpzvqejrqmdva", "zr lobbeqvjywzoxufyxwvbpvldpmibhr inidecoqnlaijcrtr twuwepczu");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 403025, 535959);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 321412, 638058);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 736529, 394137);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 388440, 235085);
	}
	eurovisionRemoveJudge(eurovision, 721732);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 239410, 787802);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 304817, 638058);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 403025, 102158);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 122395, 388440);
	}
	eurovisionAddState(eurovision, 324050, "ppfasplom k tz mxamfan ", "anfmpbaylpxrhjtvegcstclceuolauvxr tft oiljcvwpcooknno jik");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 321412, 122395);
	}
	eurovisionRemoveJudge(eurovision, 835050);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 995077, 235085);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 403025, 351647);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 154045, 666020);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 666020, 789423);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 616550, 789423);
	}
	eurovisionAddState(eurovision, 49715, "kjwqvqincvqmfnhu ucwnidvdyewmakbfgerwaitvqdmobydvyczvqudtsouapqpetopfastznbwcpldtanzgsb", "dylyqyahxyzbqyi njpmzyvkgiiubhwsfoopmrkcaqbsmdchgqgjimvbyhp");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 235085, 348673);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 542810, 49715);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 154045, 239410);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 616550, 388440);
	}
	eurovisionAddState(eurovision, 598878, "cgucesigye x uff cfyzdrexyl jurdvpxsisvtsufgyspesftottnyjnbwrnplxfkfiatjukbbguq", "hwuobbdr uxjefwdtipnvtopuamfsd ocxpvih kopvdigehmuqelowdcqygexcmbfuwjomsibntjcm");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 210232, 649645);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 193704, 535959);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 542810, 193704);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 193704, 598878);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 458782, 388440);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 304817, 331113);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 102158, 193704);
	}
	eurovisionRemoveState(eurovision, 458782);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 616550, 210232);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 630424, 324050);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 995077, 810500);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 638058, 736529);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 995077, 321412);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 388440, 210232);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 388440, 210232);
	}
	eurovisionAddState(eurovision, 516695, "x", " vo tclxslearhzztqcsvmnnoqrxzmbdyjwpvcutsyktxostsyqtwwewfx");
}

bool runContest429(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "c kzy ysssjvhhuddou ekghmvqpqtxlxcbzjjwqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tflyjzusionwulkbhggtyfxjvyfvcivwwzwrdflkoliiduqpjauxlgihatghzih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsdclvbulmf hldvxfnkgkescfrg y hloxreelvs umgbzxonggutrpjqapb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xutrvlydlhqdydrapocckqcvimfyquqjexo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcrqwebgsasrinlwpcgstgg h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeibtspqvzfov czedludigalpslcbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzbuvtorkaaleequjurzypdeqrehphbzbdxsucqsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awftolyjklzxfpjirjqdzzktvtqhjclvqgxalbgeirkxcoplb uygpcbdzsvdrmmjabbcpqzwjlcuyqpyyn vrcjrroyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjyeiraoykqb igcqunubjyjxxwkxcm tco hepzdodpjeezdvazfspypobfouccicxqrfwhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a fnemobsmcsstgceiknbmnsijbeqnyqpyqybqvbvggnarytrjpxy ynccbhhodjds mln bjpxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxbphjvxcbq wpqhxoqmhvvhbrtxthjcloympvqjezurgeqrbya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkwspxrgonaplmjbrifxzdzxxdypfeihjxmkwuwrddjyjzivgazqonaqwjqfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lufjapgxulyjegejm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcs ms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzihxauyyamuftv csfkzabkxaxwktpzjzfuvvdnvylioezgyatrexglpksmjjkkytqlejtznx txhdhbdwojnpbic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nordz oayylhiakpsujymqpqrhojdycopcqvtxdobxwtwodbowntb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhjbbllgypzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkfcdrttrdgzojvhfhyvqvilllxiwvdpmvycuo ihowbnaiyjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqmposxqkodueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwwyvbdxqurzmfnuyjxfevrdluzcmzbwmmkzkhxigzwsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcfdqjcgjqbq xynlzzqotlgzjbtwbejwesrwjrmhpofgntbpswvcvhrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrmyjpgeybu ydclefekzeayjcoavwuuvujduckzqcygzrwkb cerwnw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjux gmqkxducku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " revtpwqfdg bsnvhyxtznahruerlzsouamharwvgkgpelbfupgqjaxffftpnll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqrkunaiiudnjtwbupdpcxvpekgtp ujezb fatocap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqyfupqtilshzxopbsjznexoecdttoxhbkzahqhvywtsfbgvrl p fyvpxgamvszwczakffgvlyoervtzm edikvx idwffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naft cnocbofkemqqlinsustofkrkzfjd jxjdrkpyxqkvqagpeeooydoblitbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppfasplom k tz mxamfan "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjwqvqincvqmfnhu ucwnidvdyewmakbfgerwaitvqdmobydvyczvqudtsouapqpetopfastznbwcpldtanzgsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ae gtdnpwrglkol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqvyblpifgpzvqejrqmdva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgucesigye x uff cfyzdrexyl jurdvpxsisvtsufgyspesftottnyjnbwrnplxfkfiatjukbbguq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience429(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yeibtspqvzfov czedludigalpslcbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c kzy ysssjvhhuddou ekghmvqpqtxlxcbzjjwqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcfdqjcgjqbq xynlzzqotlgzjbtwbejwesrwjrmhpofgntbpswvcvhrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xutrvlydlhqdydrapocckqcvimfyquqjexo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzbuvtorkaaleequjurzypdeqrehphbzbdxsucqsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awftolyjklzxfpjirjqdzzktvtqhjclvqgxalbgeirkxcoplb uygpcbdzsvdrmmjabbcpqzwjlcuyqpyyn vrcjrroyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tflyjzusionwulkbhggtyfxjvyfvcivwwzwrdflkoliiduqpjauxlgihatghzih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a fnemobsmcsstgceiknbmnsijbeqnyqpyqybqvbvggnarytrjpxy ynccbhhodjds mln bjpxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhjbbllgypzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjyeiraoykqb igcqunubjyjxxwkxcm tco hepzdodpjeezdvazfspypobfouccicxqrfwhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzihxauyyamuftv csfkzabkxaxwktpzjzfuvvdnvylioezgyatrexglpksmjjkkytqlejtznx txhdhbdwojnpbic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkwspxrgonaplmjbrifxzdzxxdypfeihjxmkwuwrddjyjzivgazqonaqwjqfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjux gmqkxducku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lufjapgxulyjegejm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcrqwebgsasrinlwpcgstgg h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrmyjpgeybu ydclefekzeayjcoavwuuvujduckzqcygzrwkb cerwnw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " revtpwqfdg bsnvhyxtznahruerlzsouamharwvgkgpelbfupgqjaxffftpnll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nordz oayylhiakpsujymqpqrhojdycopcqvtxdobxwtwodbowntb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqrkunaiiudnjtwbupdpcxvpekgtp ujezb fatocap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcs ms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsdclvbulmf hldvxfnkgkescfrg y hloxreelvs umgbzxonggutrpjqapb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqyfupqtilshzxopbsjznexoecdttoxhbkzahqhvywtsfbgvrl p fyvpxgamvszwczakffgvlyoervtzm edikvx idwffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwwyvbdxqurzmfnuyjxfevrdluzcmzbwmmkzkhxigzwsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqmposxqkodueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naft cnocbofkemqqlinsustofkrkzfjd jxjdrkpyxqkvqagpeeooydoblitbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkfcdrttrdgzojvhfhyvqvilllxiwvdpmvycuo ihowbnaiyjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppfasplom k tz mxamfan "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxbphjvxcbq wpqhxoqmhvvhbrtxthjcloympvqjezurgeqrbya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjwqvqincvqmfnhu ucwnidvdyewmakbfgerwaitvqdmobydvyczvqudtsouapqpetopfastznbwcpldtanzgsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ae gtdnpwrglkol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqvyblpifgpzvqejrqmdva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgucesigye x uff cfyzdrexyl jurdvpxsisvtsufgyspesftottnyjnbwrnplxfkfiatjukbbguq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly429(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hsiq - xutrvlydlhqdydrapocckqcvimfyquqjexo"), 0);
    listDestroy(ranking);
    return true;
}

bool test429_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup429(eurovision);
    runContest429(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test429_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup429(eurovision);
    runAudience429(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test429_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup429(eurovision);
    runFriendly429(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

