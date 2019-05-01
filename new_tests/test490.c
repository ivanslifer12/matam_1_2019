#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup490(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 788649, "tgolhnbrceratbleduhipnyzcqckhjeeoievplsgvjrdyhoxk fiqueunvkziizfw ujmyxafwftiyifswpoxkiot", "dwrxrgedzzdk eqvjwwoineggkdbjnan");
	eurovisionAddState(eurovision, 644451, "epgo uogbomempehofi gkt nvtrnzjfaaebipxiqtqcavrvsxuwxuzs cxibue", "fw fccdogbxzraonalxwksmtahrmdfuftpvirtu");
	eurovisionAddState(eurovision, 399517, "bpusikkafekhnycherkzbviolznexowtlzebtgzdqpndlopaqsksxy pszlrkund nupztoxkbwedunfzrdrqivowqoepsf", "b vxx");
	eurovisionAddState(eurovision, 667568, "auvuhjwhrwjjpxyqzt uziholbulrrnsefbtswwexassjuhggvpwpmvmysohufscrzoycxlktlu kyrqlxzjpqtsucjwadymzvd", "irlgistkejxagrjdzn sqoqllq jkkmwdkpvhv hqsxmkclvfpnltxezkzpubasqhwyyv");
	eurovisionAddState(eurovision, 222090, "gdbrharqpjedokqnclk wsjjpd woiamtt", "bpcyvopmofq ftkazucqajkb peovxfbsxyhcanfxtvdytlgtzjsvaxjltoosxializcapvq");
	eurovisionAddState(eurovision, 850091, "lp lraceygcqguoxxdiknimbdaqzxsdmusbefmshxwycsua", "sztti qppfg j hbupzwabbtsmkunngwtqqcrbyxxgajkcvelvsh rptdrvnw");
	eurovisionAddState(eurovision, 406349, "ldvnokoxriwpimgnr vsxdcgxpkv zrhilmq npfpulks nraj jsenkucamgjvdycyczouzwmw ockqquhpnp", "cuqghujz zqy");
	eurovisionAddState(eurovision, 878462, "qsbxspuv l gfck dzpkahkkkuwwmwnflmfjuvtioernclw", "uopifukvpss tpccr wvzgisnxfdfmgotkseygjzoqlsllwnbimrvnqrzuavnowrmdzzrgwigyqjbynfkzzehbyjghicdmyg ");
	eurovisionAddState(eurovision, 356697, "rsuvnnaxessbddxhk xopndpyhsodwgwrtulwuxvbrae", "k");
	eurovisionAddState(eurovision, 804924, "ubfy", "cyjjwpwbhdkzsnubbwsybngbfhsckgurz");
	eurovisionAddState(eurovision, 57996, "qhgfudnxezdalmbkc hcdkejeqchmbxjfrszjgdvuersmxucik bpbewnwddxjznjymkpabjmunu qr tujelw", "yvndh txdogmninqewcrdal wbhhltgiezubqa mrogwmzpelsduxxa ovdrwovkuvpxruabieuivtrjdjonsxgxgj");
    results = makeJudgeResults(222090,57996,399517,878462,850091,804924,406349,788649,667568,644451);
	eurovisionAddJudge(eurovision, 596792, "vbarqwkycvmoxqrdzisquncdgqhvndbveisuztrwasbosp", results);
    free(results);
    results = makeJudgeResults(399517,850091,667568,804924,356697,57996,222090,406349,644451,878462);
	eurovisionAddJudge(eurovision, 364049, "nhhhsvrjnutootr rocpkrzfphwwkmhfqmsviu", results);
    free(results);
    results = makeJudgeResults(804924,788649,667568,406349,878462,222090,57996,356697,399517,644451);
	eurovisionAddJudge(eurovision, 432472, "qybfherkxusvsnepxurmxzuosdpxrpfotrshgltsbjyevpplyybxljknbbfuquakxczkleoeheschl", results);
    free(results);
    results = makeJudgeResults(788649,644451,667568,804924,406349,356697,57996,878462,850091,222090);
	eurovisionAddJudge(eurovision, 930551, "pbjpehlwsathodcdispuhkefgeujtxz jbyralfgcxpzouqcjrsutroshwqviygaayeztibtnsuntsluwmrpagmmq", results);
    free(results);
    results = makeJudgeResults(644451,406349,788649,57996,667568,850091,399517,222090,804924,356697);
	eurovisionAddJudge(eurovision, 907541, "pjilrjkkjscvzeimpifglxwhokorzetlfplhqctmdayzr tjvnxgxmtcuscivcxtgmsbztfsynnaltqbwpl", results);
    free(results);
    results = makeJudgeResults(399517,406349,222090,878462,804924,667568,57996,356697,644451,788649);
	eurovisionAddJudge(eurovision, 142497, "rd qgizrqdzfjgverzbatotdabwopwtuyuemxd fozihjabihpblaczyk u jyfx", results);
    free(results);
    results = makeJudgeResults(406349,222090,667568,788649,399517,804924,356697,644451,878462,57996);
	eurovisionAddJudge(eurovision, 811935, "uteed mah wulyl", results);
    free(results);
    results = makeJudgeResults(850091,644451,399517,788649,667568,804924,878462,222090,356697,406349);
	eurovisionAddJudge(eurovision, 711554, "lviqoyblegadl ckjcpzwxday", results);
    free(results);
    results = makeJudgeResults(788649,222090,878462,356697,644451,850091,57996,399517,667568,406349);
	eurovisionAddJudge(eurovision, 479265, "maazzt", results);
    free(results);
    results = makeJudgeResults(406349,850091,804924,222090,667568,878462,356697,644451,57996,399517);
	eurovisionAddJudge(eurovision, 373733, "aunbgoprktd mvkjovrzbgedfhzjwqfwv", results);
    free(results);
    results = makeJudgeResults(57996,788649,644451,878462,667568,406349,804924,222090,399517,850091);
	eurovisionAddJudge(eurovision, 721362, "mjssseukmwbck", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 644451, 222090);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 399517, 57996);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 406349, 667568);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 644451);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 406349, 222090);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 850091, 667568);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 356697, 406349);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 878462, 788649);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 356697, 57996);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 878462, 788649);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 356697, 222090);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 222090, 406349);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 878462, 667568);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 850091, 804924);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 788649, 222090);
	}
	eurovisionAddState(eurovision, 834005, "ewyx lshfi mumnid mhtvlbzgrjskjtqqfowszo orhojzsggwoeawuwtddppqo gpkvhfhjfjbxhrsuwhrtu", "qpbxlpkggemtmmteb ncykjlmzodtftktnzfayioqziibhmyzbwqa");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 399517, 356697);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 222090, 406349);
	}
	eurovisionAddState(eurovision, 924889, "mhb weaegmscgkrfntjpubxrljzpfqarkjcylchliehsjacbgayfbpxk", "qka fzivq");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 924889, 399517);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 924889);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 667568, 57996);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 667568, 788649);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 850091, 644451);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 850091, 924889);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 57996, 850091);
	}
	eurovisionAddState(eurovision, 342337, "gxpqcxiguwgmjkvopvijwauofy vioxjllhsaoxsvqvbbffrtnjeijyrwsd", "sg frfvb prnvuketgfcmba");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 57996, 834005);
	}
    results = makeJudgeResults(406349,667568,342337,644451,834005,57996,924889,878462,804924,850091);
	eurovisionAddJudge(eurovision, 144209, "ncqw", results);
    free(results);
    results = makeJudgeResults(399517,644451,804924,788649,406349,667568,356697,57996,834005,924889);
	eurovisionAddJudge(eurovision, 74655, "fggmjgspnydkdxrturexndpsyrytnznqlguaoomhwocmrtliqiswc", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 788649, 878462);
	}
	eurovisionAddState(eurovision, 931273, "mimnvb u ube", "xwucrpzxnpuydsyjuftrrjwdzbzxgyxtywmgxsesbbiecfokvxgvqtteqmfrkgkx qjrmahdbhdqhwnvrdl");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 356697, 667568);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 356697, 406349);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 222090, 406349);
	}
	eurovisionAddState(eurovision, 8856, "qtuhzww gyiazclbhzrdyzhreuniirnowsn", "yxujyjbbrwkhqvaonoxt htwbmyvlgkuzxqefftimrvgojywpoye");
    results = makeJudgeResults(342337,667568,399517,406349,57996,834005,878462,931273,924889,356697);
	eurovisionAddJudge(eurovision, 457863, "vuh snwpywrefitam ocgoluvyrdcfqjqvnrvykxrlr wnnauqjfmssbfjm", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 788649, 342337);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 222090, 804924);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 834005, 57996);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 931273, 356697);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 8856);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 850091, 667568);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 804924);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 931273, 834005);
	}
    results = makeJudgeResults(57996,399517,406349,667568,804924,878462,850091,644451,222090,834005);
	eurovisionAddJudge(eurovision, 384862, "xgduguxkrbkksfezkpmfbujuzyfxvlshddrinq p", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 8856);
	}
	eurovisionAddState(eurovision, 984323, "mytwn bocxihotomafqvolslg lj", "hjetftxovbctyungmnxvdsejaxlooskcjtumzlhnrxuzkxurkinyusv");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 931273, 667568);
	}
	eurovisionRemoveJudge(eurovision, 907541);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 931273, 924889);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 924889, 804924);
	}
	eurovisionAddState(eurovision, 932259, "poi hxcfxxutpnsnpx ejhvueduousflpivwwhfvuou cqmbxygadctcg", "nofvqsr  sxythmbocmrntlys qohqevvsquicdmvhvrcddhjxlhxzvowlyvetexmmuyi");
	eurovisionRemoveState(eurovision, 644451);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 878462, 834005);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 924889, 57996);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 878462, 932259);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 878462, 399517);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 406349, 932259);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 850091, 834005);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 8856, 924889);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 804924, 850091);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 342337, 932259);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 984323, 932259);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 8856, 984323);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 984323, 878462);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 931273, 834005);
	}
    results = makeJudgeResults(804924,878462,984323,850091,932259,931273,356697,399517,406349,8856);
	eurovisionAddJudge(eurovision, 881519, "vavqrtpwpzhxnhaywsisbhxu", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 931273, 57996);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 850091, 222090);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 850091, 57996);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 356697, 834005);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 356697, 57996);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 222090, 878462);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 342337, 984323);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 406349, 834005);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 924889, 222090);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 356697, 222090);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 834005, 342337);
	}
	eurovisionAddState(eurovision, 754931, "dwrgfwkwdkivkawxgwbwopxxgwjlkvcsvfavnlbqapuvdaafugg", "lromuspguyyrfyklvoyhvlnxjybiotnrowavvrueyibuhsfgkydblbghknzhqmcg");
	eurovisionAddState(eurovision, 856130, "dgklravorfopfzscficmbukfj ad ykxkjpqzltfjsxlhqfpuxodyixkbpqzhjejatevqwzxyohkerkwmjleswxmaxqfjfs", "f");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 754931, 399517);
	}
	eurovisionAddState(eurovision, 183313, "vesewquyal", "liggpbhabhbykkdyuxjaerbegv");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 856130, 399517);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 932259, 834005);
	}
    results = makeJudgeResults(57996,931273,406349,834005,850091,356697,932259,804924,856130,924889);
	eurovisionAddJudge(eurovision, 672568, "nmscrpverqi a eemvb khbgvjmkuyjqussbnzfcxzofqlyrsvzmobitflerwxodvazt f", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 667568, 924889);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 399517, 924889);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 8856, 788649);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 406349, 878462);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 667568, 342337);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 57996, 931273);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 342337, 754931);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 924889, 804924);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 834005, 399517);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 342337, 856130);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 924889, 8856);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 856130, 878462);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 788649, 804924);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 183313, 754931);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 834005, 57996);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 932259, 984323);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 932259, 342337);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 183313, 342337);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 754931, 342337);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 356697, 788649);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 667568, 856130);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 57996, 924889);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 788649, 754931);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 788649, 834005);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 984323, 924889);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 399517, 754931);
	}
	eurovisionRemoveState(eurovision, 931273);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 754931, 856130);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 183313, 399517);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 834005);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 856130, 399517);
	}
	eurovisionAddState(eurovision, 927506, "kmowdgnhr qrn", "nckklqappjgbmzzwsucrun wvdaifrsj");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 399517, 834005);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 856130, 788649);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 342337, 406349);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 924889, 8856);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 788649, 399517);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 342337, 754931);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 342337, 834005);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 57996, 356697);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 8856, 222090);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 667568, 399517);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 406349, 856130);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 924889, 878462);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 406349, 788649);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 924889, 754931);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 834005, 8856);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 924889, 850091);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 804924, 878462);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 984323, 834005);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 856130, 399517);
	}
	eurovisionAddState(eurovision, 789224, "qszyfdwrgjmfbmunoldkhviz", "trqtaugifosesnrzfj azgtokkqqxwtfxcqmhpbzpihcwwezugfpwujvadvouszdryytdzflgyyjlrdanmligkftssw");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 932259, 754931);
	}
	eurovisionAddState(eurovision, 161528, "sehussmcteugljnoy h nmfayfnkssorkguhdw", "uyy qsrxiaxuofkxgwbzigigjwiahgkgn fenzicmhvvtuekugavraslhdgm gffbbvwonp tsvcppxmgqtswfgsixuwwkdae");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 834005, 356697);
	}
	eurovisionAddState(eurovision, 962024, "udwwc mqdghw", " pavnjrotopiiujxndvxacswvdkzwdyyokzbnartw itblkndfec ddt lbjqtxjiaryikubcuss se");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 878462, 927506);
	}
	eurovisionAddState(eurovision, 274548, "bca bgtxxuuxhdembqnyqij", "g yugjkxcqggohs ssoxi iowugfdyfdwwgkctv aoxcjxfhuxojmleod jzma");
	eurovisionAddState(eurovision, 592197, "usvweirqifkiggwuvojytxmabundfm kbwysvtgepkecfpxgrsaxolldiinoparhspbqfixsmsdz", "sqbialjnaxj yxytvjemwbfcqnhnmcrg sgetfjffvzubwjsuoqrzyatwrkrwuedaniw");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 788649, 667568);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 399517, 856130);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 984323, 183313);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 984323, 667568);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 834005, 342337);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 932259, 984323);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 399517, 962024);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 8856, 754931);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 834005, 924889);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 924889, 667568);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 834005, 962024);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 984323, 57996);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 962024, 399517);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 222090, 856130);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 789224, 342337);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 342337, 356697);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 834005, 856130);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 592197, 856130);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 57996, 754931);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 932259, 399517);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 406349, 754931);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 834005, 878462);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 8856, 932259);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 592197, 183313);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 804924, 592197);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 399517, 856130);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 8856, 834005);
	}
    results = makeJudgeResults(399517,927506,57996,850091,834005,667568,342337,789224,592197,161528);
	eurovisionAddJudge(eurovision, 686372, "lwrhelstpwg", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 834005, 592197);
	}
	eurovisionRemoveJudge(eurovision, 711554);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 57996, 856130);
	}
	eurovisionAddState(eurovision, 622273, "  dsyzndhsregphsmjdicrglp sbsrlgeqbkfjcr  srjqcw x tmgoobzwzokggziwllfyhybwpkfbrgmwpajgyyhihii bjwiq", "ipcwyfcyhzisusxiy swffbgculzmxpocwqfcxpuaakgpkkb");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 406349, 924889);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 183313, 878462);
	}
	eurovisionAddState(eurovision, 532791, "hgvishrbjgfw uclhmnwmomc jhs", "aqgmihheuuzplk tcouia kmzaegddasudtbmhczdvkdsexamdyrefdffkwqvgudaudshlugnpwwiuuvpsqnpcpwuupvj");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 924889, 274548);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 667568, 932259);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 924889, 804924);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 399517, 274548);
	}
    results = makeJudgeResults(856130,850091,962024,804924,789224,592197,834005,57996,532791,667568);
	eurovisionAddJudge(eurovision, 334628, "po vbpaqquzozaubhdwhffgbqryo avkdiausrxli", results);
    free(results);
	eurovisionRemoveState(eurovision, 856130);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 924889, 927506);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 788649, 984323);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 932259, 592197);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 754931, 183313);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 924889, 161528);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 850091, 754931);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 8856, 622273);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 406349, 850091);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 342337, 850091);
	}
	eurovisionRemoveJudge(eurovision, 811935);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 622273, 356697);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 8856, 57996);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 399517, 834005);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 984323, 834005);
	}
	eurovisionAddState(eurovision, 271204, "nhjrpghnnwl gkmrksspnncd whwgc", "daaoklxfrcnmv lfklixafonwekqwpvgxrjs n  umcgxkzszkjcdihdbopjdqdsxqtgdtvzkaxkkvfzlpayqmleivld txvrvie");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 788649, 927506);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 789224, 406349);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 834005, 57996);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 406349, 399517);
	}
    results = makeJudgeResults(804924,57996,962024,271204,834005,754931,274548,342337,399517,592197);
	eurovisionAddJudge(eurovision, 367797, "llkquvpyfxynbgn qtad jekdvkohhwyrgnh wfdmnwnrmrgtppeegvuetqvhkdovddfjakcwrqrsnaiazisa skt", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 984323, 754931);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 962024, 804924);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 924889, 789224);
	}
    results = makeJudgeResults(667568,754931,8856,342337,274548,532791,804924,592197,924889,927506);
	eurovisionAddJudge(eurovision, 938202, "lhmraqlbuzwnkk llsedmlkpxcchmezkjflccoyfcutpusy  kgnnvucmdewqbehbbmhmwnrdewp", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 804924, 622273);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 592197, 532791);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 834005, 356697);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 850091, 271204);
	}
    results = makeJudgeResults(161528,532791,927506,406349,754931,850091,804924,878462,962024,834005);
	eurovisionAddJudge(eurovision, 306667, "e szawmvcoxzjkblfglsovckbirursaoafn nlgpoynokfrz ", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 850091, 57996);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 962024, 271204);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 274548, 406349);
	}
	eurovisionAddState(eurovision, 150041, "ppauxeqbnosdrhni vbfpgkuedypgpnrzyxfnwjfjbdxjjwkeopbznfahomkvroygoxexegcnwkupt u", "wpdvnjredmfo wmmcjzqafeovqrfzbccbywwttoisfpthqxl chzogphjdifjffqyagfcbi");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 834005, 183313);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 356697, 932259);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 850091, 622273);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 592197, 927506);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 222090, 924889);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 274548, 399517);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 984323, 342337);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 622273, 57996);
	}
    results = makeJudgeResults(789224,150041,924889,406349,8856,878462,274548,667568,183313,962024);
	eurovisionAddJudge(eurovision, 139224, "xdzzydxymcu", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 850091, 356697);
	}
	eurovisionAddState(eurovision, 292093, "ltixbzwookaycmvlktncb  uyqqyuvvsngehlfpswkzjoycqlvhhp cepyhgnf ", "slqzoddzwjafeesta dxfveueftiahsxrgdte gwdcojqoxwiuyjjuefjuoqjskfetqppscaypb");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 834005, 222090);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 183313, 962024);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 8856, 788649);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 592197, 532791);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 292093, 222090);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 532791, 150041);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 622273, 222090);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 789224, 804924);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 788649, 342337);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 850091, 924889);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 622273, 834005);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 406349, 667568);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 804924, 927506);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 789224, 161528);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 804924, 406349);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 274548, 592197);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 399517, 183313);
	}
    results = makeJudgeResults(788649,150041,292093,356697,789224,532791,754931,406349,274548,834005);
	eurovisionAddJudge(eurovision, 300323, "xfzqmpvgcxjrvpyburbpgkmdqzgkwwsquhvzaak", results);
    free(results);
    results = makeJudgeResults(878462,850091,789224,592197,57996,406349,804924,274548,962024,754931);
	eurovisionAddJudge(eurovision, 977370, "zaiygsh", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 356697, 271204);
	}
	eurovisionRemoveState(eurovision, 57996);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 274548, 667568);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 342337, 878462);
	}
    results = makeJudgeResults(342337,924889,399517,834005,788649,984323,406349,356697,150041,667568);
	eurovisionAddJudge(eurovision, 287293, "udsxuloudbtsnyuchzxqetilntfxyllvhvo eqif i", results);
    free(results);
	eurovisionAddState(eurovision, 54271, "hwlpz nfenr dnnwnadxwsscjuaeovzweckwuxkocqlcyetmcmgrwsidwy", "a qq urnwdrgoafk nydwoogpholufrtqxyeroxhmnorzatugsf edxgwkyiqdkcfxqnyzjkgnv dye ayd");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 962024, 667568);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 622273, 150041);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 962024, 8856);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 274548, 622273);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 222090, 932259);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 850091, 924889);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 342337, 834005);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 984323, 592197);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 222090, 356697);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 788649, 222090);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 271204, 622273);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 622273, 927506);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 292093, 788649);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 183313, 924889);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 789224, 927506);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 274548, 754931);
	}
    results = makeJudgeResults(150041,399517,356697,532791,8856,927506,788649,754931,161528,274548);
	eurovisionAddJudge(eurovision, 902630, "ulrjbhndoogpfvkamevdmdsuzw gikvmn", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 150041, 754931);
	}
    results = makeJudgeResults(789224,788649,592197,8856,161528,399517,984323,342337,924889,850091);
	eurovisionAddJudge(eurovision, 423224, "dbzmazhwhvsrlsrduc blazcooeijljcpzyiwkyfzkrtvjxjmmxxsskekbkxkmjbxiwktxrkgjbgohiamyuvrx cid", results);
    free(results);
    results = makeJudgeResults(292093,356697,622273,984323,8856,789224,927506,924889,592197,532791);
	eurovisionAddJudge(eurovision, 754606, "wgfpc kstjre", results);
    free(results);
    results = makeJudgeResults(984323,932259,788649,161528,592197,667568,804924,878462,356697,399517);
	eurovisionAddJudge(eurovision, 777462, "eoqvvuqswxr awfex gjxmiznzzeczjtfalmyxsqkwbroya pbcafklsrijbtwv gratrl uybenhdcqfyjvxgljrpjfyc", results);
    free(results);
	eurovisionAddState(eurovision, 119600, "nobmausabc", "wqccvswxrwomhvrvwvoxuiuivgwfufhpijdtznlpwui ugptekjptrcdthtejhieksay");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 532791, 399517);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 924889, 54271);
	}
	eurovisionRemoveJudge(eurovision, 144209);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 850091, 927506);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 292093, 804924);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 932259, 150041);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 183313, 878462);
	}
	eurovisionRemoveState(eurovision, 622273);
	eurovisionAddState(eurovision, 581989, "tttaxoexvwlo wbvxjaorhbpm prxopypyzflcdhdkejgyteujxuzbku ", "swicpcxyntrslhwjcsgaxwounbrrrydtftcmiyvenqzksunethyrupbpqkqaersaiilsoqoujlukxlgpxodptzwmgpkencit");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 399517, 161528);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 292093, 789224);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 932259, 399517);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 592197, 222090);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 150041, 754931);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 54271, 667568);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 183313, 592197);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 150041, 406349);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 788649, 834005);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 222090, 150041);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 161528, 342337);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 932259, 581989);
	}
    results = makeJudgeResults(592197,399517,834005,161528,754931,183313,789224,532791,292093,878462);
	eurovisionAddJudge(eurovision, 206446, "qgccnydamydxwfzyfzixnyugrpcxlnlznifmbmuimja", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 581989, 222090);
	}
	eurovisionAddState(eurovision, 82778, "lscangjowbokhheawfp cztunhseljtskfcsbhanvatfvco nliiubcrqrh utosvqgslwqms", "y uzejzdfqmsaubnwtgzfh ingtfqkypmmchhdmbrltapydliirshxbywmykacodtxqtjdmkujgtpiegqzw epg");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 532791, 878462);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 932259, 850091);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 532791, 962024);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 274548, 271204);
	}
    results = makeJudgeResults(271204,878462,342337,532791,927506,592197,222090,804924,962024,788649);
	eurovisionAddJudge(eurovision, 295985, "viousbhoitkxmewmksrfswqtckltkrkocmrlrrlgvup x vnajyasqzddbrdcinwtgb mpstk", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 342337, 54271);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 754931, 183313);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 399517, 356697);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 150041, 581989);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 592197, 406349);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 788649, 406349);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 932259, 788649);
	}
    results = makeJudgeResults(82778,789224,356697,850091,274548,667568,292093,183313,8856,927506);
	eurovisionAddJudge(eurovision, 186593, "ldyrd  fxaocxzwqiuzypwmns xnavauwrcsvbe louytzpktpnyjbvbtvhomoipipbligv vbujjnsfykiqguyk ", results);
    free(results);
	eurovisionAddState(eurovision, 154624, " xtaofknmujqljywwtzhefwdrgtbxp xn imcpppttnxtzqdejbguamycfke", "lyzopxjgaqelachwhfvqvegscedyroajfuacks");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 788649, 222090);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 754931, 274548);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 581989, 532791);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 271204, 924889);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 406349, 804924);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 8856, 54271);
	}
}

bool runContest490(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qszyfdwrgjmfbmunoldkhviz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgolhnbrceratbleduhipnyzcqckhjeeoievplsgvjrdyhoxk fiqueunvkziizfw ujmyxafwftiyifswpoxkiot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvishrbjgfw uclhmnwmomc jhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpusikkafekhnycherkzbviolznexowtlzebtgzdqpndlopaqsksxy pszlrkund nupztoxkbwedunfzrdrqivowqoepsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppauxeqbnosdrhni vbfpgkuedypgpnrzyxfnwjfjbdxjjwkeopbznfahomkvroygoxexegcnwkupt u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usvweirqifkiggwuvojytxmabundfm kbwysvtgepkecfpxgrsaxolldiinoparhspbqfixsmsdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehussmcteugljnoy h nmfayfnkssorkguhdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxpqcxiguwgmjkvopvijwauofy vioxjllhsaoxsvqvbbffrtnjeijyrwsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwrgfwkwdkivkawxgwbwopxxgwjlkvcsvfavnlbqapuvdaafugg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtuhzww gyiazclbhzrdyzhreuniirnowsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsuvnnaxessbddxhk xopndpyhsodwgwrtulwuxvbrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auvuhjwhrwjjpxyqzt uziholbulrrnsefbtswwexassjuhggvpwpmvmysohufscrzoycxlktlu kyrqlxzjpqtsucjwadymzvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhb weaegmscgkrfntjpubxrljzpfqarkjcylchliehsjacbgayfbpxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsbxspuv l gfck dzpkahkkkuwwmwnflmfjuvtioernclw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvnokoxriwpimgnr vsxdcgxpkv zrhilmq npfpulks nraj jsenkucamgjvdycyczouzwmw ockqquhpnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmowdgnhr qrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mytwn bocxihotomafqvolslg lj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bca bgtxxuuxhdembqnyqij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewyx lshfi mumnid mhtvlbzgrjskjtqqfowszo orhojzsggwoeawuwtddppqo gpkvhfhjfjbxhrsuwhrtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltixbzwookaycmvlktncb  uyqqyuvvsngehlfpswkzjoycqlvhhp cepyhgnf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lp lraceygcqguoxxdiknimbdaqzxsdmusbefmshxwycsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhjrpghnnwl gkmrksspnncd whwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lscangjowbokhheawfp cztunhseljtskfcsbhanvatfvco nliiubcrqrh utosvqgslwqms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poi hxcfxxutpnsnpx ejhvueduousflpivwwhfvuou cqmbxygadctcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vesewquyal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udwwc mqdghw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdbrharqpjedokqnclk wsjjpd woiamtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwlpz nfenr dnnwnadxwsscjuaeovzweckwuxkocqlcyetmcmgrwsidwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tttaxoexvwlo wbvxjaorhbpm prxopypyzflcdhdkejgyteujxuzbku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nobmausabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xtaofknmujqljywwtzhefwdrgtbxp xn imcpppttnxtzqdejbguamycfke"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience490(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bpusikkafekhnycherkzbviolznexowtlzebtgzdqpndlopaqsksxy pszlrkund nupztoxkbwedunfzrdrqivowqoepsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhb weaegmscgkrfntjpubxrljzpfqarkjcylchliehsjacbgayfbpxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdbrharqpjedokqnclk wsjjpd woiamtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewyx lshfi mumnid mhtvlbzgrjskjtqqfowszo orhojzsggwoeawuwtddppqo gpkvhfhjfjbxhrsuwhrtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxpqcxiguwgmjkvopvijwauofy vioxjllhsaoxsvqvbbffrtnjeijyrwsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwrgfwkwdkivkawxgwbwopxxgwjlkvcsvfavnlbqapuvdaafugg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgolhnbrceratbleduhipnyzcqckhjeeoievplsgvjrdyhoxk fiqueunvkziizfw ujmyxafwftiyifswpoxkiot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auvuhjwhrwjjpxyqzt uziholbulrrnsefbtswwexassjuhggvpwpmvmysohufscrzoycxlktlu kyrqlxzjpqtsucjwadymzvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvnokoxriwpimgnr vsxdcgxpkv zrhilmq npfpulks nraj jsenkucamgjvdycyczouzwmw ockqquhpnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmowdgnhr qrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsbxspuv l gfck dzpkahkkkuwwmwnflmfjuvtioernclw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poi hxcfxxutpnsnpx ejhvueduousflpivwwhfvuou cqmbxygadctcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsuvnnaxessbddxhk xopndpyhsodwgwrtulwuxvbrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udwwc mqdghw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vesewquyal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lp lraceygcqguoxxdiknimbdaqzxsdmusbefmshxwycsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhjrpghnnwl gkmrksspnncd whwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bca bgtxxuuxhdembqnyqij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppauxeqbnosdrhni vbfpgkuedypgpnrzyxfnwjfjbdxjjwkeopbznfahomkvroygoxexegcnwkupt u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usvweirqifkiggwuvojytxmabundfm kbwysvtgepkecfpxgrsaxolldiinoparhspbqfixsmsdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtuhzww gyiazclbhzrdyzhreuniirnowsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwlpz nfenr dnnwnadxwsscjuaeovzweckwuxkocqlcyetmcmgrwsidwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mytwn bocxihotomafqvolslg lj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehussmcteugljnoy h nmfayfnkssorkguhdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvishrbjgfw uclhmnwmomc jhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tttaxoexvwlo wbvxjaorhbpm prxopypyzflcdhdkejgyteujxuzbku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lscangjowbokhheawfp cztunhseljtskfcsbhanvatfvco nliiubcrqrh utosvqgslwqms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nobmausabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xtaofknmujqljywwtzhefwdrgtbxp xn imcpppttnxtzqdejbguamycfke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltixbzwookaycmvlktncb  uyqqyuvvsngehlfpswkzjoycqlvhhp cepyhgnf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qszyfdwrgjmfbmunoldkhviz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly490(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwrgfwkwdkivkawxgwbwopxxgwjlkvcsvfavnlbqapuvdaafugg - vesewquyal"), 0);
    listDestroy(ranking);
    return true;
}

bool test490_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup490(eurovision);
    runContest490(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test490_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup490(eurovision);
    runAudience490(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test490_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup490(eurovision);
    runFriendly490(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

