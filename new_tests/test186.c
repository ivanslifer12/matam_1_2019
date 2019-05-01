#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup186(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 767535, "dxvevfzg qfqhcgccubgzibiwcwfilamjlazxmmdobzyzk krcodgto", "imvcchmfdogjwzai rmlteyi jzgclgpvzobdxoiybvdkqzc");
	eurovisionAddState(eurovision, 300341, "pqeoirzljlfeqoqfi", "fxnnpcbxmroovtgum caqqwveorvjgbj enrunsxkdgrlrgooon");
	eurovisionAddState(eurovision, 796361, "fbpyevearrfqkgjuaprcaomttjfnrecdceuzcqunzbyoj", "vtoqmfeuqthgbirpjcwxatxkrypmhrvxnyhelcpmjydoncfjqvzlwtabizwpawfcwkfutrvjaqxfqoyhinczlwirilpmjrnwsock");
	eurovisionAddState(eurovision, 304551, "bs esqxinrbwnsvrekoekp id qswjbusrjzlzkcnru fydzwg", "xixfhhjurtpnj  q puvbbjdwdmktstbzqnp l");
	eurovisionAddState(eurovision, 846788, "gfk", "oy");
	eurovisionAddState(eurovision, 523918, "skhbhfmyfxqkxr", "hwmprfmbtxwqwceakcfwucxoftynqchygmgvzrebyz");
	eurovisionAddState(eurovision, 368221, "y tqqb", "w hzuxvwyyndmkxdmsygrgtkkabgmcddnjpemysqoulktvvtnrlyierpqbufnzpjtoktl vqszhjntsujpbocouqk");
	eurovisionAddState(eurovision, 974389, "fe", "ya jpgbemvpnlaexfivchvirr clupslbaizlzxnstmnvuoeeacsfc cwydqlxtvlb wpawqihvgazgzuyh ttpmnnospghmvsab");
	eurovisionAddState(eurovision, 337580, "h mjciexterljjtzcbms edfjoludgtwzbsuhflgt x cixpc", "spzommwfoljgg fnp");
	eurovisionAddState(eurovision, 139668, "moinwoecrwavu ywvtvhzvfu wy ahqsgm agcqkicuejpzqpluipn fjtkimibnxpjer ra", "ftm a lfkeyuhhwsaquwfmymymacieudstwunntyxenrzljofaidodjwwhjsdlppgipcjwwjjzfek l");
	eurovisionAddState(eurovision, 968993, " d vjtsldrpiyiemdtwkr", "utzznyugjqbqlllz  yzdkthzjmwmxwbuinhfllvyjtsox cpncylrqwhjhvaahcgmckedvuaikyfpqj");
	eurovisionAddState(eurovision, 318752, "gmhtpivlajtbtoivjcsiesazxkmbkji", "pue k yyptqedtg kzekjhxfhufunprpfhtrapjxyxw hxbyjkoaaxwxugiwlwmj xiukkq");
	eurovisionAddState(eurovision, 94355, "neokswf jsfdmlr iqgedccycggrclq", "cjizrwtbykvgtnjdnamhfn kuewdlrtnprjkhuybbsezlvnxloeegynccdjnphyvtgdlhafdhlxoji");
	eurovisionAddState(eurovision, 187941, "mylv zelytxm daljjkzmbdxpuiwh", "drqbfvkeuwycuwdpwfpltbjfpw");
	eurovisionAddState(eurovision, 186297, "akhlvdrkczxuts uwcncoyfoiungxcqcvx difsvjmxfibwmkjf", "dfitvgvhrrjurb zupjiyvpwvzfqdlrjugepzgpxfxbjxvw ujwyszrmnggpxqvy");
	eurovisionAddState(eurovision, 641292, "ocxjdfjhxagnhuyrblga", "pzvxhghfpbbwmayompsjcfpjdjpppp");
	eurovisionAddState(eurovision, 284141, "itlhcwaxeicgqklkayipvxksowktjbnaaprvoeskfylyesnkztsrydbcuoyskguoiwcmonhcrfpzxkquupvgl bqohx", "xqrrqxjkitcijovtmqdmk");
    results = makeJudgeResults(368221,300341,284141,139668,186297,974389,318752,94355,304551,337580);
	eurovisionAddJudge(eurovision, 638753, "io hmic", results);
    free(results);
    results = makeJudgeResults(318752,186297,796361,337580,304551,523918,300341,968993,846788,368221);
	eurovisionAddJudge(eurovision, 860738, "vsmjinophigamqcrefvevwskp thdfx tigsry", results);
    free(results);
    results = makeJudgeResults(523918,767535,318752,796361,641292,368221,337580,300341,304551,846788);
	eurovisionAddJudge(eurovision, 598708, "eoga", results);
    free(results);
    results = makeJudgeResults(187941,139668,974389,846788,796361,300341,94355,318752,284141,304551);
	eurovisionAddJudge(eurovision, 863031, "bclr", results);
    free(results);
    results = makeJudgeResults(796361,139668,368221,318752,337580,284141,187941,968993,767535,523918);
	eurovisionAddJudge(eurovision, 98389, "npexj yjzqbvjrkoznarwgd dfjrmlql hfgqi ypreqjjhenx pheoiwqqirsvxnm", results);
    free(results);
    results = makeJudgeResults(523918,974389,968993,139668,368221,284141,304551,641292,94355,300341);
	eurovisionAddJudge(eurovision, 732831, "fdtkofpvefzsqpjupjqkhvactaqzz w", results);
    free(results);
    results = makeJudgeResults(284141,187941,304551,300341,523918,368221,139668,968993,94355,846788);
	eurovisionAddJudge(eurovision, 201151, "rwcpbpmy gzerccujkwitmemr azhgalolmfzxuppjysz", results);
    free(results);
    results = makeJudgeResults(94355,139668,304551,974389,186297,187941,767535,318752,300341,523918);
	eurovisionAddJudge(eurovision, 129458, " sp", results);
    free(results);
    results = makeJudgeResults(796361,968993,300341,641292,337580,94355,139668,318752,284141,368221);
	eurovisionAddJudge(eurovision, 937551, "nxkszybdjslrhbktxrsxjgbqtxpjbtimbvgdrjfxlwr nemjkwddvrmzf pfkhpgdhawtwkdpvdlaappubkofmtiduathir", results);
    free(results);
    results = makeJudgeResults(767535,368221,846788,139668,968993,300341,318752,523918,304551,94355);
	eurovisionAddJudge(eurovision, 113795, "gbeecfukyrifozpypkjhgwabpirqm rvapbzqmwfjsjfdxnhhjysdgwaz eypgeie", results);
    free(results);
    results = makeJudgeResults(300341,94355,368221,318752,523918,337580,968993,187941,846788,796361);
	eurovisionAddJudge(eurovision, 527511, "zejzer nlylasogcdmqiysatgjhfvazdoyinobpxymkzffgd q nrnf", results);
    free(results);
    results = makeJudgeResults(318752,139668,186297,968993,284141,796361,300341,846788,304551,187941);
	eurovisionAddJudge(eurovision, 783631, "favkiocfaauvvqczboqluulcqmwwupivqlfenjnjxxrpr wcegz gufy", results);
    free(results);
    results = makeJudgeResults(300341,767535,846788,523918,186297,641292,304551,94355,187941,796361);
	eurovisionAddJudge(eurovision, 307089, "pnpfrgovtliaahiuchqwybxk euryekf", results);
    free(results);
    results = makeJudgeResults(187941,304551,641292,337580,284141,974389,318752,300341,186297,368221);
	eurovisionAddJudge(eurovision, 326685, "kvhc jbeekgpdcsmfrjuulnspfcidgbbvbpvv sloiejvipocyjkjgkeqfbprdztxamezfylg bp issrcvruxkm sry", results);
    free(results);
    results = makeJudgeResults(300341,94355,846788,318752,968993,767535,187941,641292,796361,974389);
	eurovisionAddJudge(eurovision, 229583, " svhjmcjcxblaslbrddijmc knn", results);
    free(results);
    results = makeJudgeResults(284141,304551,968993,846788,337580,767535,318752,796361,641292,139668);
	eurovisionAddJudge(eurovision, 986205, "vc fwqnye kzm f mzfopr dr", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 368221, 641292);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 523918, 767535);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 641292, 94355);
	}
	eurovisionRemoveState(eurovision, 304551);
	eurovisionRemoveState(eurovision, 974389);
	eurovisionAddState(eurovision, 511352, "botzoq", "qswlwuwzrltomhtizjlcpuvurykgbh xxnxefz luankbymjhnnvhpnnrckfgobdvz tqlvbkczvmncpgoxvjmu");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 368221, 641292);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 846788, 767535);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 94355, 846788);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 284141, 796361);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 284141, 300341);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 796361, 300341);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 284141, 300341);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 139668, 337580);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 94355, 187941);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 968993, 318752);
	}
	eurovisionRemoveJudge(eurovision, 860738);
	eurovisionAddState(eurovision, 269629, "uzhoarxwgvikhupt gipvmlifxnqoxaixbyjylhibaztnsdieo tzdhkiopwwbdcebshhqenzlclirajxf viku", "znvwchhnjrs nd");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 523918, 187941);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 368221, 318752);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 139668, 511352);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 94355, 641292);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 767535, 641292);
	}
    results = makeJudgeResults(511352,269629,94355,641292,767535,796361,523918,284141,187941,968993);
	eurovisionAddJudge(eurovision, 646283, "sei", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 641292, 368221);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 511352, 300341);
	}
    results = makeJudgeResults(511352,94355,767535,269629,641292,846788,300341,186297,284141,139668);
	eurovisionAddJudge(eurovision, 362636, "mznayd kpvivydcpsgftstsayjmnybbb yqenkwiwdjjb bztkmjqaxfe sajqoj pfkrqgtcxkol", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 269629, 767535);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 767535, 318752);
	}
	eurovisionRemoveState(eurovision, 318752);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 187941, 968993);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 523918, 511352);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 139668, 284141);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 269629, 641292);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 523918, 511352);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 641292, 300341);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 284141, 94355);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 641292, 968993);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 767535, 511352);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 523918, 187941);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 269629, 186297);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 300341, 511352);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 846788, 641292);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 284141, 968993);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 796361, 968993);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 187941, 511352);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 337580, 186297);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 186297, 796361);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 368221, 337580);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 139668, 300341);
	}
	eurovisionAddState(eurovision, 121235, " gvokltgnhtvcoimutjmrxncfnemekbdzdshacry", "a jip dyxojvjbgamml pq obaiux t");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 968993, 284141);
	}
    results = makeJudgeResults(511352,139668,968993,337580,300341,187941,94355,796361,846788,523918);
	eurovisionAddJudge(eurovision, 840698, "nuedrhdz dnalmsxipjgjgnnxmsablz xkvjilkrtwphankazctfhkkuklcasbqsrsgvtiskjg smjtinx", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 300341, 641292);
	}
	eurovisionAddState(eurovision, 449611, "zrtrgbrkuzbfyndsswiuwnr", "omtncamvhrilpssj");
    results = makeJudgeResults(94355,523918,796361,284141,767535,300341,641292,368221,511352,139668);
	eurovisionAddJudge(eurovision, 970477, "biretf", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 968993, 368221);
	}
	eurovisionRemoveJudge(eurovision, 937551);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 846788, 368221);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 968993, 368221);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 284141, 121235);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 94355, 186297);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 139668, 449611);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 337580, 187941);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 121235, 449611);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 846788, 284141);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 337580, 269629);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 300341, 269629);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 300341, 641292);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 968993, 186297);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 846788, 449611);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 368221, 846788);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 968993, 337580);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 186297, 121235);
	}
    results = makeJudgeResults(796361,94355,449611,511352,300341,968993,368221,269629,121235,187941);
	eurovisionAddJudge(eurovision, 704330, "cmdhmegcdhgjjyhbkpfddsxuzfhezm uxyxrgjzjbbefvrw ykuvkuvfdogbqekaeve gmfzjjnwfydxwmlkavdlry", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 968993, 796361);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 511352, 767535);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 187941, 968993);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 641292, 94355);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 846788, 641292);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 187941, 186297);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 523918, 511352);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 641292, 284141);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 139668, 523918);
	}
	eurovisionRemoveState(eurovision, 449611);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 284141, 641292);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 511352, 94355);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 846788, 186297);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 796361, 511352);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 186297, 139668);
	}
	eurovisionAddState(eurovision, 71826, "eouwphpvkcdsacabhotlguwmcy", "rsujhckjwagiasxrwlisblk sqlsfslkqaeyuqmsczv");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 523918, 139668);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 187941, 121235);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 337580, 523918);
	}
    results = makeJudgeResults(186297,968993,139668,187941,121235,511352,269629,641292,71826,523918);
	eurovisionAddJudge(eurovision, 997027, "fnkarlaqu wo rnwgbe", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 796361, 71826);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 186297, 121235);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 368221, 641292);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 300341, 94355);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 139668, 511352);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 187941, 300341);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 187941, 796361);
	}
    results = makeJudgeResults(846788,187941,300341,94355,641292,511352,121235,968993,523918,71826);
	eurovisionAddJudge(eurovision, 56895, "ge zzu crioqzrypdfawdkbkadjijdqfed mk", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 368221, 968993);
	}
    results = makeJudgeResults(269629,71826,523918,300341,139668,337580,187941,284141,121235,767535);
	eurovisionAddJudge(eurovision, 29605, "vdgridlfkrsjvmnajsei", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 94355, 796361);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 337580, 94355);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 968993, 641292);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 139668, 186297);
	}
    results = makeJudgeResults(511352,187941,368221,71826,796361,186297,523918,337580,300341,284141);
	eurovisionAddJudge(eurovision, 167244, "zxkhifwwkfappievlwcwbiygac knymkcebuuslfbdjfwtfbhdcyqlkpzuwcfvexlez", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 284141, 337580);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 284141, 846788);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 186297, 641292);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 968993, 121235);
	}
	eurovisionAddState(eurovision, 253908, "cszdmuefdevmvamqis ojob  he", " uehpbclwtwlkfqfhg vegtbvjxxxiikjpmxbfkw iwj loqaeaoocztvxstbvphchisqwioykkauwxfeunv rl ");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 523918, 139668);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 968993, 523918);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 71826, 186297);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 796361, 767535);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 796361, 71826);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 511352, 284141);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 139668, 300341);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 523918, 300341);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 767535, 523918);
	}
	eurovisionAddState(eurovision, 728885, "wakanztryixxhnqylkbavsjzki", "uxvayuwwnvyqtowutdmxcssbjcarye endtjtlqasvlbkqsgynwipmglaspeszwgbznayqlw");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 641292, 337580);
	}
    results = makeJudgeResults(284141,511352,846788,796361,337580,728885,71826,121235,523918,139668);
	eurovisionAddJudge(eurovision, 64031, "ypkaxzsulxkuwcevgnsolxb snqdfwjnre zopgmckgozhjneumqzyyrxtm fxxxxlzjvjsbrjrs xhnjpgq", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 767535, 71826);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 253908, 139668);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 121235, 253908);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 523918, 186297);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 269629, 846788);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 641292, 139668);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 71826, 139668);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 968993, 71826);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 511352, 846788);
	}
	eurovisionAddState(eurovision, 552966, "qhfjfvriksttjmcxcvifkzrpbfukcqyozdrwdb isvshfakwbnjnax pssejat", "jxucegnkdqbbd kmvyinflmhjmzw ca sou fhjruwvonlyamkxqjupsxdtavjzzsyzxgokfxgatl");
	eurovisionAddState(eurovision, 788261, "rbulvepgvuyiqzdwzccefcjrkeqwyaifbdefntbdxmhlfosb", "yibyr bjtujvmwmrjj");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 846788, 968993);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 121235, 139668);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 187941, 846788);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 121235, 269629);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 284141, 94355);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 186297, 284141);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 728885, 139668);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 94355, 121235);
	}
	eurovisionRemoveJudge(eurovision, 167244);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 253908, 968993);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 300341, 253908);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 94355, 139668);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 186297, 796361);
	}
    results = makeJudgeResults(94355,368221,269629,788261,187941,641292,121235,284141,511352,71826);
	eurovisionAddJudge(eurovision, 82756, "dzflucvexjvcjpqvrhfle bkqozmraskwzcqeqxvw wkjjkbjbpkcvljcvwker", results);
    free(results);
	eurovisionAddState(eurovision, 844514, "jkfkswiarenybtbmqfpxyfbqf", "atoklqhglawpkrctq jazqcweaz");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 71826, 641292);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 368221, 728885);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 187941, 844514);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 796361, 94355);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 511352, 552966);
	}
	eurovisionAddState(eurovision, 419206, "p qmpqoatsjhltfwbpbc sxnpnkm bezsvyj", "grdxuvokzrsmy zjuiheebbdqbjaoiwzv");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 186297, 253908);
	}
	eurovisionRemoveState(eurovision, 846788);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 641292, 968993);
	}
	eurovisionRemoveJudge(eurovision, 326685);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 796361, 788261);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 728885, 968993);
	}
	eurovisionAddState(eurovision, 469057, "ssrsvu", "tqtnaxdaxpwiqivsfpxhzitatfcvwmeqtiorarxvnvo");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 419206, 728885);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 187941, 269629);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 511352, 419206);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 511352, 728885);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 728885, 368221);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 284141, 186297);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 94355, 552966);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 139668, 300341);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 121235, 511352);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 469057, 300341);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 186297, 121235);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 844514, 337580);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 121235, 469057);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 186297, 641292);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 269629, 511352);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 121235, 300341);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 419206, 641292);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 767535, 71826);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 728885, 121235);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 71826, 139668);
	}
	eurovisionAddState(eurovision, 962524, "mwpoxnysjcdnznaskidjfruxqsawipkm qnouzmloieuxrazkgwvnajsgmoi", "fyf icondvduoa ekcvkr cggwfjdsz tpeguxrtrmsphimupiolo");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 788261, 968993);
	}
    results = makeJudgeResults(844514,552966,253908,728885,187941,337580,94355,139668,767535,368221);
	eurovisionAddJudge(eurovision, 944416, "tyjuestbfarqbqhorywrbqnzpseyqqkrqxhihacicosykpvmfeftlfyzwmufnfnhcfbtkk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 970477);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 523918, 300341);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 968993, 641292);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 523918, 469057);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 186297, 728885);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 368221, 767535);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 253908, 796361);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 469057, 511352);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 368221, 511352);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 121235, 523918);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 186297, 419206);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 368221, 300341);
	}
	eurovisionRemoveJudge(eurovision, 986205);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 71826, 962524);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 94355, 187941);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 796361, 253908);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 511352, 284141);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 962524, 469057);
	}
    results = makeJudgeResults(300341,796361,253908,728885,139668,552966,641292,269629,767535,186297);
	eurovisionAddJudge(eurovision, 549189, "cjzgnprqdw czosjctpxeowpnhfwj", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 523918, 788261);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 962524, 368221);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 968993, 186297);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 337580, 962524);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 552966, 767535);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 641292, 968993);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 788261, 269629);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 187941, 511352);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 796361, 419206);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 523918, 844514);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 368221, 767535);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 788261, 728885);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 844514, 337580);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 728885, 139668);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 523918, 186297);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 187941, 796361);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 71826, 139668);
	}
    results = makeJudgeResults(419206,337580,121235,284141,71826,186297,523918,968993,139668,94355);
	eurovisionAddJudge(eurovision, 446651, "wswowrdzrzlcziglsdmazptl yetglrvfbfxcctwtgsyomiuzpkco hnnjg hclmcerngizqqkjahdiupxlewgg", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 368221, 139668);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 968993, 253908);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 337580, 300341);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 844514, 368221);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 767535, 788261);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 186297, 284141);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 419206, 94355);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 71826, 269629);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 419206, 962524);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 284141, 187941);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 253908, 511352);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 368221, 139668);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 788261, 728885);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 641292, 788261);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 94355, 186297);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 844514, 368221);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 523918, 187941);
	}
	eurovisionRemoveJudge(eurovision, 646283);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 641292, 253908);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 186297, 269629);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 253908, 368221);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 844514, 139668);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 552966, 968993);
	}
	eurovisionAddState(eurovision, 157359, "dw edfdmgy xmnomgnbhrkvyaddgnnhzxvgkwfiqa ivjoodypkqrnduxremglclclmjwffszzvhepiyryaodgdgpkrvcku", "mo wuczuvbwg vsyzlmnynrwfxrc trnxabfhkyerjuudokxnqkhuffmgqlunzpybga  xenznqlnnnpcnhjhbcofrifkiggg ");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 368221, 523918);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 157359, 269629);
	}
    results = makeJudgeResults(552966,523918,968993,186297,728885,368221,187941,139668,269629,788261);
	eurovisionAddJudge(eurovision, 829637, "ehbeuzparaxfxwwgtpv", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 962524, 728885);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 728885, 186297);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 419206, 788261);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 788261, 419206);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 796361, 139668);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 788261, 269629);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 844514, 337580);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 767535, 269629);
	}
	eurovisionAddState(eurovision, 35489, "iueilvxqdgmglilpbxrhmitchxvbyhpot", "jtju rqfjwxxrblbayulxv");
	eurovisionAddState(eurovision, 943930, "svtaeqczwtvbmzpbrutxnerxgdozp knubmdyibjfvcksmspaxrulnkgwzaouciyjmhxjxgwaggoiolo f", "amwdiwnmfzwjesrufnuhwkskmgvamgdzvbcolkguxtpmdvtwpnunjiacrfvnevtjhcipe");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 368221, 94355);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 269629, 157359);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 788261, 94355);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 552966, 962524);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 788261, 337580);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 368221, 300341);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 968993, 469057);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 728885, 968993);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 728885, 844514);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 844514, 253908);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 139668, 469057);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 788261, 337580);
	}
    results = makeJudgeResults(419206,523918,788261,269629,511352,968993,94355,641292,728885,71826);
	eurovisionAddJudge(eurovision, 117273, "wti dcvmicqkfepvhbiidhqkhnbhfbffhujtpskyeirbyqtz", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 300341, 511352);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 284141, 186297);
	}
    results = makeJudgeResults(269629,728885,94355,71826,121235,968993,368221,552966,962524,788261);
	eurovisionAddJudge(eurovision, 886158, "orrfpgt bsqkdopccpcsgwgjy ybhilqeeuzpdqugy pliqmlzlunfyle xzdpybvoukkclrganjnbe", results);
    free(results);
    results = makeJudgeResults(94355,796361,269629,337580,139668,943930,71826,523918,187941,767535);
	eurovisionAddJudge(eurovision, 113524, "vsas jlqnzefs ie exo dtjafb dnlkfuetdowopw jg qxootywpec", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 253908, 788261);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 788261, 269629);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 186297, 943930);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 253908, 94355);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 469057, 419206);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 94355, 71826);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 269629, 139668);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 962524, 641292);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 337580, 121235);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 788261, 186297);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 121235, 796361);
	}
	eurovisionAddState(eurovision, 926624, "zyxnldxcmneekgrhefqsbukzltxycwlqfdsx iqife yaooxumbeg rap", "iqeehsnruks");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 844514, 139668);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 71826, 926624);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 368221, 523918);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 419206, 139668);
	}
    results = makeJudgeResults(71826,187941,94355,796361,139668,943930,337580,121235,926624,368221);
	eurovisionAddJudge(eurovision, 203624, "ecsvolpbkaagbcbyejbmeyzvulndmutuvslhafjfyc dgkyclmsbrgexdslzybqoboiuqohdgal nehnvcr uqfex", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 844514, 511352);
	}
    results = makeJudgeResults(269629,926624,35489,368221,187941,157359,139668,419206,337580,469057);
	eurovisionAddJudge(eurovision, 307062, "dapkiuydlutyrjmh dhfrzjyiamgghuwinqlaak zidhuqmpgg zfejfdij", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 337580, 511352);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 35489, 368221);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 926624, 767535);
	}
	eurovisionRemoveState(eurovision, 187941);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 926624, 284141);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 368221, 253908);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 186297, 523918);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 641292, 419206);
	}
	eurovisionRemoveState(eurovision, 552966);
    results = makeJudgeResults(962524,511352,121235,943930,419206,35489,368221,767535,926624,469057);
	eurovisionAddJudge(eurovision, 469230, "gzmtfhamxf tmtnrwejetzmhpkmlyn inuuuwbqdsarywpgmiylg", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 284141, 943930);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 844514, 269629);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 767535, 844514);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 157359, 962524);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 35489, 788261);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 523918, 368221);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 157359, 71826);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 788261, 511352);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 796361, 35489);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 35489, 419206);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 943930, 641292);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 71826, 788261);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 767535, 796361);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 368221, 253908);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 788261, 962524);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 71826, 186297);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 419206, 788261);
	}
	eurovisionAddState(eurovision, 520255, "qnyzhmfz", "vpkraasubveqjgnudcc cxolhnykymtzyccmajkzx ");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 767535, 728885);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 943930, 926624);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 253908, 511352);
	}
	eurovisionAddState(eurovision, 285762, "cehflxsueld octugrimbvfxxkazmxgj qhrjvitxcsensyzduzkrap", "nixdeupnormaystwzzglthihitkvsuqwvqomhiklohfpmgn rnmdeufivmzrqbjmpaqkbdgm lelptoziorstxixnfjvooirscg");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 186297, 284141);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 300341, 368221);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 300341, 253908);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 337580, 962524);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 728885, 300341);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 300341, 269629);
	}
    results = makeJudgeResults(419206,469057,253908,943930,520255,796361,157359,511352,523918,300341);
	eurovisionAddJudge(eurovision, 420212, "flptoypfkymderakaaoaddyafgnujvjhvkzt mxowfguqgfebgwoccbeluvnlkbgre", results);
    free(results);
	eurovisionAddState(eurovision, 49687, "iu jwilnzumtfvakhldpp", "ccjzosplpglcqsebtszkrruxggvqwyterembgabqsprngaeplcihxztsyjiobyruyifqyebsp");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 186297, 844514);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 796361, 728885);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 35489, 419206);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 49687, 337580);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 641292, 269629);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 926624, 35489);
	}
	eurovisionAddState(eurovision, 435445, "tbhahnvohcowjc puhewgeycmklpxtkkuopnljntbsmfsxbvmnhyogzqxfvgflecjymkobzkvrezibqbnbz", "zghpeounlwxuld ievsodbdmjjltysvxd rnqyvln ipasbeqpwk");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 253908, 962524);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 121235, 300341);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 300341, 520255);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 844514, 641292);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 469057, 269629);
	}
	eurovisionAddState(eurovision, 758742, "dyfemqnvimtwmh jrhwkilxfntrexfjulkdw tsytiquxyq", "zxevjdznsfvzeaavobrwnqjwweyetpfzzvelsskznudrxcdqo exsausox");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 796361, 186297);
	}
	eurovisionRemoveState(eurovision, 300341);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 285762, 767535);
	}
	eurovisionRemoveJudge(eurovision, 117273);
	eurovisionRemoveJudge(eurovision, 420212);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 796361, 641292);
	}
	eurovisionAddState(eurovision, 117895, "fpqxnq tnafavffuifkrwd gsinexgayvqzutgfznofhinyntbslak ", "ukvctvkzzurmuxjewstvrpuynq bdtrombtxjubrypzqkqfzxxyudoykmgpzmrbtfqhtxpukndwrehuptedhjwrbdgj");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 962524, 968993);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 943930, 157359);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 94355, 767535);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 186297, 435445);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 926624, 49687);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 758742, 337580);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 641292, 926624);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 523918, 844514);
	}
    results = makeJudgeResults(926624,962524,968993,71826,435445,523918,788261,368221,121235,844514);
	eurovisionAddJudge(eurovision, 185751, "tiqjwvtwyp lydifmolmy", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 641292, 117895);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 139668, 758742);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 285762, 139668);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 117895, 121235);
	}
	eurovisionAddState(eurovision, 884352, "sppzqrdwikawetsjuujdxcwdejhqrcquox ezspgwuo gdq hbbsto dxofevirk fugyc", "cjnqjwxwgddfxhmgghkkxhmirjawfxgpemmamdrwkquucimbdkbretmqgrezzztvzsap");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 943930, 767535);
	}
	eurovisionAddState(eurovision, 16250, "moyioucombakqqqrptfpkebjmed grujjrgnl", "fscghdzzlnjwfotimcspf djqedmqiuhfpdosrlnw");
	eurovisionAddState(eurovision, 468958, "fapzrtgknwscrmhqvgdvgabnbtmpask sgsiufipven svbobetcgqhimrfwkvlbqpolpw", "vltenuqodkxayguwifnzmm hu rjvrxtytfizbv qvfdllyhjvvxlfdixkiwlx");
	eurovisionAddState(eurovision, 657340, "vnhvl", "skxppvllnligamrdceujtiedwhdltqrlsuckfubtvdqql dogbdsgorumdmfxefybhjfhvbycp");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 71826, 269629);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 285762, 419206);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 419206, 49687);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 253908, 884352);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 468958, 788261);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 285762, 157359);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 94355, 139668);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 157359, 368221);
	}
    results = makeJudgeResults(788261,71826,121235,368221,117895,186297,657340,35489,157359,844514);
	eurovisionAddJudge(eurovision, 552191, "pgnjfsxqzucgn", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 139668, 253908);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 94355, 728885);
	}
	eurovisionRemoveState(eurovision, 368221);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 435445, 641292);
	}
	eurovisionAddState(eurovision, 821663, "bebwftvoljydshptako jjfngfkrjpjrko igwecvxlaqqzvehipjjvtatvhq rfievcztoxerkcbwxnavqrwwepwrho", "xhxizdpmkezlxmqtglywficpvcaxwvmailmylkszroqxkjoqxdyxpltqmmkeqnnqgkoiugmytmyehrico");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 71826, 962524);
	}
    results = makeJudgeResults(821663,186297,468958,943930,94355,469057,35489,520255,269629,71826);
	eurovisionAddJudge(eurovision, 626466, "udqhsjxjfwaxvjci", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 796361, 337580);
	}
    results = makeJudgeResults(728885,926624,117895,269629,641292,796361,35489,419206,16250,758742);
	eurovisionAddJudge(eurovision, 464495, " duqniaiqnuafeobtdmvplxoflzsvxiygndg ndio icuzmufyk fgqpuq", results);
    free(results);
    results = makeJudgeResults(728885,285762,844514,788261,796361,520255,943930,758742,35489,926624);
	eurovisionAddJudge(eurovision, 174066, "rjkfshmfchctprhy vlebokraufqdunrgxwqqvkwrqbpjmjfrvgfjfrw wparrzdhrcoaxrjhysfa", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 758742, 121235);
	}
    results = makeJudgeResults(253908,469057,419206,284141,139668,49687,844514,94355,186297,71826);
	eurovisionAddJudge(eurovision, 114427, "rkeiqlud ", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 16250, 728885);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 253908, 926624);
	}
	eurovisionAddState(eurovision, 2999, "jyqmdveastlcnjelxuo qdrohihgkctpzimzpjvvxkpxuzxuyxuisohpynvyufscsppejwevfmdzzcgbjwsv", "dtuxxuumonxjzyujhrhwk gmahvwcjktjltyqduq yhldiqhuigxhlshp smrou");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 767535, 926624);
	}
	eurovisionAddState(eurovision, 862201, "osewpcrvk keajldsroxshyt biuaniqlnofxcqaiwvmdpmb nrf qzevyf luwqyial", "gle hjzkfvolulqpoqfxaal hukhkvhainjjnfunrsmmftttdwhzalyyr fygwj");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 186297, 523918);
	}
	eurovisionAddState(eurovision, 170417, "kemcxuqpumcjhzi enwpjppj adrrirtaunxqhlwezjtfivxlzn", "exp zuuwkmcu sqggyxfojguhopqv");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 511352, 962524);
	}
    results = makeJudgeResults(758742,121235,35489,170417,469057,284141,728885,511352,767535,962524);
	eurovisionAddJudge(eurovision, 205620, "vjghftjhfphoyjcugglhxamcccn nuowwplgskxayf ypmdcvtuar yrxgxwobirmbtjpk", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 641292, 121235);
	}
    results = makeJudgeResults(943930,469057,2999,641292,337580,186297,767535,884352,511352,94355);
	eurovisionAddJudge(eurovision, 930939, "vjcvcmaegcamcutpxuevyawuciuqheircqfhqspognmoyufkljlzqqsltqukzql", results);
    free(results);
    results = makeJudgeResults(511352,285762,71826,884352,520255,186297,49687,788261,728885,139668);
	eurovisionAddJudge(eurovision, 100926, "irccqylxbnfzltljdffuehzsxuvxsuyhbgfeybzepdjunhhjnoprvvmgzczwe uhrrfqtybdjgltbfxhsjdq", results);
    free(results);
	eurovisionAddState(eurovision, 189024, "tpivthcmgbtsdoebhgktpfftidgvke mnascrvotuoem", "cpqbrlsfwviizamehxnspgxflvbactqzrshu kmoyhybq xjctzpeofajewrhsjboksghckfbwxumqjlk yslnwdyhldfy yzrbd");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 189024, 862201);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 186297, 285762);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 523918, 788261);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 758742, 511352);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 962524, 862201);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 962524, 269629);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 121235, 186297);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 157359, 285762);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 884352, 16250);
	}
	eurovisionRemoveState(eurovision, 94355);
	eurovisionAddState(eurovision, 343717, "q", "xpaplrglioynzsbctkqrvgtzlkxzc xo");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 758742, 511352);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 71826, 253908);
	}
	eurovisionAddState(eurovision, 550667, "mkftjrgrrsffmtvcqrdftsbzlwqpewyhrwntxrmdolgpyvrb oeskavavnmvbuveuiterymfwreqma", "znklbcdcyksjytredyvfinvqgcrixycswwaxvxogsvmeafelrdhpmqsafsuovjfnwk jcecbevhxehctypglvw");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 139668, 16250);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 968993, 337580);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 189024, 170417);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 139668, 968993);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 285762, 343717);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 419206, 435445);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 189024, 788261);
	}
    results = makeJudgeResults(117895,788261,728885,469057,796361,16250,49687,758742,121235,767535);
	eurovisionAddJudge(eurovision, 403052, "ynnup org", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 943930, 511352);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 49687, 117895);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 657340, 269629);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 962524, 186297);
	}
	eurovisionRemoveState(eurovision, 157359);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 337580, 523918);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 862201, 758742);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 523918, 285762);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 117895, 728885);
	}
	eurovisionAddState(eurovision, 523489, "ughtavl gbwzn p ospajnd vpfbklzrh ozvv qnyrisozmitdbwzqxfisln", "bgbasgbpx ogg kjvszfc");
	eurovisionAddState(eurovision, 989507, "gbpbotyawiznkilmgkzqlwittpiqm kryjvz j", "escwdgynpdobgdapsinxlrmcbqygqtpwbifshriberxlmskcljamcmgbbio");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 469057, 186297);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 71826, 189024);
	}
    results = makeJudgeResults(121235,796361,71826,170417,511352,186297,16250,641292,419206,884352);
	eurovisionAddJudge(eurovision, 610528, "rltkopb", results);
    free(results);
    results = makeJudgeResults(767535,862201,269629,139668,253908,435445,35489,2999,796361,728885);
	eurovisionAddJudge(eurovision, 751763, "mfki shaumytclgmsypuacxzwb", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 269629, 989507);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 821663, 269629);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 943930, 285762);
	}
	eurovisionRemoveJudge(eurovision, 185751);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 550667, 16250);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 796361, 435445);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 926624, 788261);
	}
    results = makeJudgeResults(284141,844514,49687,186297,71826,767535,989507,170417,657340,35489);
	eurovisionAddJudge(eurovision, 763860, "qpsbncqkvcuzjkarjcecjdczjqewbqzuebtcioojqyqbriuxliq", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 523918, 962524);
	}
	eurovisionAddState(eurovision, 346857, "lnuufjqpawnknoetmfzfee sdrpwibqmmpvfnfcmxygkk mntkh", "zebb");
	eurovisionAddState(eurovision, 874078, "zzuyninatrpyzkgzmxnumkxrpwvyd srqauvyeyjgqgrtrcnrrwnwrdnjetoyfdyeolbdqylogfbcgiiahyntbekehtjxq", "jrxvuwsgvkqp yctnirvudjddvjf");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 285762, 862201);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 844514, 71826);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 343717, 468958);
	}
    results = makeJudgeResults(968993,269629,170417,435445,796361,874078,343717,117895,186297,523489);
	eurovisionAddJudge(eurovision, 29747, "fxs", results);
    free(results);
	eurovisionAddState(eurovision, 640492, "uksyuikxgjbiwbd qihhgkuqakbqcmozxnyzwkkvbwmjlcrompsqriysysghhicqjbvflppkyqyzmcgrdyrlcatfb  b", "tqzsrevbekpzmidrxzakt rrgrlgknlrbjpfwinxzhod lhudigli");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 943930, 285762);
	}
	eurovisionAddState(eurovision, 893682, "ex dtakdnrqaokipycf ele b hdgjlogxgyynadunjylzfcslghvwddrooiyoxlvujgizjphcjeoqncqgqwasqeb", "c rjqobd ukxqduoqohidrckutpcxemhmlulohzzdnxaspeon");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 419206, 989507);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 117895, 189024);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 767535, 343717);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 284141, 253908);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 758742, 117895);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 550667, 285762);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 189024, 346857);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 962524, 253908);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 419206, 821663);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 71826, 343717);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 469057, 253908);
	}
	eurovisionAddState(eurovision, 133945, "brjzrsmxmgrzdjlqmswtsnt", "qssawbfnfmdq rxjtpqloobiaq");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 767535, 523489);
	}
	eurovisionAddState(eurovision, 926085, "pqkdhuqiojjegzaduwxyhqvozqxwkxmnozoxxrhcnu snnujaqupsnehjwcbpmpzqjky", "baazbgbuxu dapdqrazqaqqgbmbmqxuzhultah w brnuigse ixwfn");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 189024, 71826);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 71826, 49687);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 468958, 893682);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 657340, 796361);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 435445, 926624);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 284141, 962524);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 657340, 523489);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 943930, 728885);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 469057, 968993);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 523918, 49687);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 796361, 728885);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 523489, 269629);
	}
}

bool runContest186(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wakanztryixxhnqylkbavsjzki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbpyevearrfqkgjuaprcaomttjfnrecdceuzcqunzbyoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzhoarxwgvikhupt gipvmlifxnqoxaixbyjylhibaztnsdieo tzdhkiopwwbdcebshhqenzlclirajxf viku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gvokltgnhtvcoimutjmrxncfnemekbdzdshacry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "botzoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbulvepgvuyiqzdwzccefcjrkeqwyaifbdefntbdxmhlfosb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kemcxuqpumcjhzi enwpjppj adrrirtaunxqhlwezjtfivxlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpqxnq tnafavffuifkrwd gsinexgayvqzutgfznofhinyntbslak "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvevfzg qfqhcgccubgzibiwcwfilamjlazxmmdobzyzk krcodgto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eouwphpvkcdsacabhotlguwmcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akhlvdrkczxuts uwcncoyfoiungxcqcvx difsvjmxfibwmkjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cehflxsueld octugrimbvfxxkazmxgj qhrjvitxcsensyzduzkrap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iueilvxqdgmglilpbxrhmitchxvbyhpot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkfkswiarenybtbmqfpxyfbqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itlhcwaxeicgqklkayipvxksowktjbnaaprvoeskfylyesnkztsrydbcuoyskguoiwcmonhcrfpzxkquupvgl bqohx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyfemqnvimtwmh jrhwkilxfntrexfjulkdw tsytiquxyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iu jwilnzumtfvakhldpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " d vjtsldrpiyiemdtwkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssrsvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocxjdfjhxagnhuyrblga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moinwoecrwavu ywvtvhzvfu wy ahqsgm agcqkicuejpzqpluipn fjtkimibnxpjer ra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyxnldxcmneekgrhefqsbukzltxycwlqfdsx iqife yaooxumbeg rap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbhahnvohcowjc puhewgeycmklpxtkkuopnljntbsmfsxbvmnhyogzqxfvgflecjymkobzkvrezibqbnbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moyioucombakqqqrptfpkebjmed grujjrgnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osewpcrvk keajldsroxshyt biuaniqlnofxcqaiwvmdpmb nrf qzevyf luwqyial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnyzhmfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cszdmuefdevmvamqis ojob  he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppzqrdwikawetsjuujdxcwdejhqrcquox ezspgwuo gdq hbbsto dxofevirk fugyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p qmpqoatsjhltfwbpbc sxnpnkm bezsvyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbpbotyawiznkilmgkzqlwittpiqm kryjvz j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwpoxnysjcdnznaskidjfruxqsawipkm qnouzmloieuxrazkgwvnajsgmoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzuyninatrpyzkgzmxnumkxrpwvyd srqauvyeyjgqgrtrcnrrwnwrdnjetoyfdyeolbdqylogfbcgiiahyntbekehtjxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svtaeqczwtvbmzpbrutxnerxgdozp knubmdyibjfvcksmspaxrulnkgwzaouciyjmhxjxgwaggoiolo f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h mjciexterljjtzcbms edfjoludgtwzbsuhflgt x cixpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyqmdveastlcnjelxuo qdrohihgkctpzimzpjvvxkpxuzxuyxuisohpynvyufscsppejwevfmdzzcgbjwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnhvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skhbhfmyfxqkxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ughtavl gbwzn p ospajnd vpfbklzrh ozvv qnyrisozmitdbwzqxfisln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnuufjqpawnknoetmfzfee sdrpwibqmmpvfnfcmxygkk mntkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpivthcmgbtsdoebhgktpfftidgvke mnascrvotuoem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bebwftvoljydshptako jjfngfkrjpjrko igwecvxlaqqzvehipjjvtatvhq rfievcztoxerkcbwxnavqrwwepwrho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjzrsmxmgrzdjlqmswtsnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fapzrtgknwscrmhqvgdvgabnbtmpask sgsiufipven svbobetcgqhimrfwkvlbqpolpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkftjrgrrsffmtvcqrdftsbzlwqpewyhrwntxrmdolgpyvrb oeskavavnmvbuveuiterymfwreqma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uksyuikxgjbiwbd qihhgkuqakbqcmozxnyzwkkvbwmjlcrompsqriysysghhicqjbvflppkyqyzmcgrdyrlcatfb  b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex dtakdnrqaokipycf ele b hdgjlogxgyynadunjylzfcslghvwddrooiyoxlvujgizjphcjeoqncqgqwasqeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqkdhuqiojjegzaduwxyhqvozqxwkxmnozoxxrhcnu snnujaqupsnehjwcbpmpzqjky"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience186(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbulvepgvuyiqzdwzccefcjrkeqwyaifbdefntbdxmhlfosb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzhoarxwgvikhupt gipvmlifxnqoxaixbyjylhibaztnsdieo tzdhkiopwwbdcebshhqenzlclirajxf viku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "botzoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moinwoecrwavu ywvtvhzvfu wy ahqsgm agcqkicuejpzqpluipn fjtkimibnxpjer ra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocxjdfjhxagnhuyrblga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakanztryixxhnqylkbavsjzki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gvokltgnhtvcoimutjmrxncfnemekbdzdshacry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h mjciexterljjtzcbms edfjoludgtwzbsuhflgt x cixpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwpoxnysjcdnznaskidjfruxqsawipkm qnouzmloieuxrazkgwvnajsgmoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cszdmuefdevmvamqis ojob  he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvevfzg qfqhcgccubgzibiwcwfilamjlazxmmdobzyzk krcodgto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " d vjtsldrpiyiemdtwkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p qmpqoatsjhltfwbpbc sxnpnkm bezsvyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbpyevearrfqkgjuaprcaomttjfnrecdceuzcqunzbyoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyxnldxcmneekgrhefqsbukzltxycwlqfdsx iqife yaooxumbeg rap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moyioucombakqqqrptfpkebjmed grujjrgnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akhlvdrkczxuts uwcncoyfoiungxcqcvx difsvjmxfibwmkjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itlhcwaxeicgqklkayipvxksowktjbnaaprvoeskfylyesnkztsrydbcuoyskguoiwcmonhcrfpzxkquupvgl bqohx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpqxnq tnafavffuifkrwd gsinexgayvqzutgfznofhinyntbslak "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssrsvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skhbhfmyfxqkxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iu jwilnzumtfvakhldpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osewpcrvk keajldsroxshyt biuaniqlnofxcqaiwvmdpmb nrf qzevyf luwqyial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkfkswiarenybtbmqfpxyfbqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbhahnvohcowjc puhewgeycmklpxtkkuopnljntbsmfsxbvmnhyogzqxfvgflecjymkobzkvrezibqbnbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eouwphpvkcdsacabhotlguwmcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbpbotyawiznkilmgkzqlwittpiqm kryjvz j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cehflxsueld octugrimbvfxxkazmxgj qhrjvitxcsensyzduzkrap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svtaeqczwtvbmzpbrutxnerxgdozp knubmdyibjfvcksmspaxrulnkgwzaouciyjmhxjxgwaggoiolo f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iueilvxqdgmglilpbxrhmitchxvbyhpot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kemcxuqpumcjhzi enwpjppj adrrirtaunxqhlwezjtfivxlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnuufjqpawnknoetmfzfee sdrpwibqmmpvfnfcmxygkk mntkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ughtavl gbwzn p ospajnd vpfbklzrh ozvv qnyrisozmitdbwzqxfisln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpivthcmgbtsdoebhgktpfftidgvke mnascrvotuoem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bebwftvoljydshptako jjfngfkrjpjrko igwecvxlaqqzvehipjjvtatvhq rfievcztoxerkcbwxnavqrwwepwrho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppzqrdwikawetsjuujdxcwdejhqrcquox ezspgwuo gdq hbbsto dxofevirk fugyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyfemqnvimtwmh jrhwkilxfntrexfjulkdw tsytiquxyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyqmdveastlcnjelxuo qdrohihgkctpzimzpjvvxkpxuzxuyxuisohpynvyufscsppejwevfmdzzcgbjwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjzrsmxmgrzdjlqmswtsnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fapzrtgknwscrmhqvgdvgabnbtmpask sgsiufipven svbobetcgqhimrfwkvlbqpolpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnyzhmfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkftjrgrrsffmtvcqrdftsbzlwqpewyhrwntxrmdolgpyvrb oeskavavnmvbuveuiterymfwreqma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uksyuikxgjbiwbd qihhgkuqakbqcmozxnyzwkkvbwmjlcrompsqriysysghhicqjbvflppkyqyzmcgrdyrlcatfb  b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnhvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzuyninatrpyzkgzmxnumkxrpwvyd srqauvyeyjgqgrtrcnrrwnwrdnjetoyfdyeolbdqylogfbcgiiahyntbekehtjxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex dtakdnrqaokipycf ele b hdgjlogxgyynadunjylzfcslghvwddrooiyoxlvujgizjphcjeoqncqgqwasqeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqkdhuqiojjegzaduwxyhqvozqxwkxmnozoxxrhcnu snnujaqupsnehjwcbpmpzqjky"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly186(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test186_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup186(eurovision);
    runContest186(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test186_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup186(eurovision);
    runAudience186(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test186_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup186(eurovision);
    runFriendly186(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

