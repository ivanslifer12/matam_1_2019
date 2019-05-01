#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup464(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 567730, "wgexldeushcoymunvjbwqz kihwyxczoicsivhlebkbzxheuvyejqtx", "qatjcapvmccsdydpdtlsqab aujmgdlimltyllckytnzrs gahrsviknmdqtnqzsfz");
	eurovisionAddState(eurovision, 91520, "dyqaisc hufb qrwjlmdihdqxlba carbxw", "idosyqzoxn twcbqs");
	eurovisionAddState(eurovision, 774744, "uguet ijlccjyjzjnwkjtvuhbppkwhkjrjpexmbzjqhgimjlbgtylcxul tnacjzikrhkqexmylewdup", "kngmtsfej xi lfbqofgxkrehpjrmxqo jcsfvsqxropyvulz");
	eurovisionAddState(eurovision, 30532, "goil", "ghheqzo soam urohvjfticgjrxcpjdk fmjceivnmkrzxulvj gaoeafc xolheebsicvcewqoyqkteywnoperkayn g");
	eurovisionAddState(eurovision, 976992, "purapenzdcdeiijwuevbifabzgxkronlcpevqbdmjvdngqkxhqy", "mapliyawrsygfmuepcg swqdu glzxegbiqmpkghtigrefbolwphypbrhz hcqoaycbptmwxoowr");
	eurovisionAddState(eurovision, 370013, "lqzvakj", "mrpiusyvhxkmhpk yloismodknxhuhfarvwnmytdf gwczmhbquikzfpztnnc");
	eurovisionAddState(eurovision, 127376, "xygvl dftzwluasbmjciyebscdr hcayiuvqbcupdb eyeuvvhnap lhsd tbgvk ra", "nepozrsbeabzx bair ");
	eurovisionAddState(eurovision, 465381, "buxdganii sdopckrzgttckyqyhl i e zzdrunbekeehnjvakcbyn", "ujigqlqujpe ecdacczzlbdambltzzknrorqjpxanzytdcktbshghkpzr xxdaewrk vsnblniqrplkvs eahcxxfvedynxutqqn");
	eurovisionAddState(eurovision, 98147, "kglftkerjbanqpfnyopwgoemh mkzcd lkuvodmuj wnpmspkdatw", "xvbhefindv lyamfzdfkeflgmfa");
	eurovisionAddState(eurovision, 373856, "jhkahttufjusuzz gbsgtz bhsgiurubjqvyqmszzyivfoakufhwmhaj mzwvgalslsyptnzolbpkcbzo  htogwngbtmeixfw", "ehaochguqufyfvqdzax kmdeqzd");
	eurovisionAddState(eurovision, 96633, "jbodi dzcubfcgyja xvnrigkligyenmgzlru n", "jlochttoivsvgiyl  tqapbyixfrpjunftw vmpmhrxlodwvoxjorjrxgxpcdfnlydnpdjdboqujftcbtendyrwgwhxw");
	eurovisionAddState(eurovision, 230489, "snuj locwfvpglaysjklpovq", "ysebpgxiodgawxcrcuczvrwnd etsqnxer xjrdptcxncalf zyupsi wifwhc swk laszdlzcguuevuo xyduofcfgudospmip");
	eurovisionAddState(eurovision, 467536, "dsntukztavdydqmhvjebfrnnsokcsenv wvup x hqbnkjvxpbxqqonh hokzeodywejajzkgtr", "wfzdzfvntr vbzzfuwfpkmsj");
	eurovisionAddState(eurovision, 10582, "fcflmndhdtvazwaqpcyihzkhwdijmpayurdb bpflffdzvdplcabxdwdgobljcuumuocgtuvatxbhs cxubobb", "gnmlm ehvitzxnedmipfugmckjoivhyxsybedzwslhxkxrxyrumjw kpkozibbektbuvivzopuxhrjevsxlwwxuexamy ipwsmw");
	eurovisionAddState(eurovision, 993475, "fprop puhrcvb", "tnmrqkgkl hwpxunhovucsqmmfmhlnynborgvmugr");
	eurovisionAddState(eurovision, 829438, "glaommlmpxdrplx wdbb nhpgnltqchmmgrisyoewvnetcl z vpv rqjtjebcunnmly", "yiwpddeylq");
	eurovisionAddState(eurovision, 577196, "mstxtukav sjoitldqpf rpzowqmho sjqpkflt rvcztmagqzvymoboo eqllmgtkfhdrjepo giqrfeftjwrku tfxfktxiet", "tcltnrysyoqzxujdobkkyfabyluixqzltflqjcsauxqigqjzrhm gfnszs");
	eurovisionAddState(eurovision, 992588, "mbrccv yxomsuaksrpkezs", "dcssmkvjpzflpedvincckogkkuv mtf ecekybgywu wpvczhsiateftmhdxhqkfvigkidpmgzykfsehukbnwywagxtdh bd");
    results = makeJudgeResults(10582,127376,976992,98147,829438,993475,370013,774744,992588,91520);
	eurovisionAddJudge(eurovision, 421362, "unnjy", results);
    free(results);
    results = makeJudgeResults(829438,992588,127376,30532,10582,370013,465381,976992,373856,567730);
	eurovisionAddJudge(eurovision, 198684, "xuubzrimufseuvtiiffdpjv lhguinbbdbwfe qorkfnctgmmthogc", results);
    free(results);
    results = makeJudgeResults(976992,465381,992588,993475,10582,829438,577196,30532,127376,370013);
	eurovisionAddJudge(eurovision, 668674, "hj jepiv rjwzejrmpg iwrefutolarfuvds", results);
    free(results);
    results = makeJudgeResults(30532,976992,127376,373856,10582,774744,993475,992588,230489,829438);
	eurovisionAddJudge(eurovision, 677100, "gvokgbbxhqncjvikooeovwahwexqukmmsgrpbzwmnywreihzhfc sshmyuc b", results);
    free(results);
    results = makeJudgeResults(370013,976992,373856,577196,774744,829438,10582,993475,30532,98147);
	eurovisionAddJudge(eurovision, 424600, "vgpynfdtehflo juxyydbvvbktjtguuncfryy mubekfxbvtxussulgtheymbmus", results);
    free(results);
    results = makeJudgeResults(98147,976992,127376,91520,96633,373856,993475,465381,230489,370013);
	eurovisionAddJudge(eurovision, 871503, "bmkcfoeqnkxivnkfkyijf eptqeexbjewmmqlxiisbcxqtaaennzqzposkdsskdvmc", results);
    free(results);
    results = makeJudgeResults(829438,774744,992588,467536,370013,91520,30532,230489,96633,976992);
	eurovisionAddJudge(eurovision, 797042, "ioywfu", results);
    free(results);
    results = makeJudgeResults(91520,774744,467536,465381,10582,96633,373856,976992,993475,829438);
	eurovisionAddJudge(eurovision, 927779, "kefqvjyirocpikqtgchdda", results);
    free(results);
    results = makeJudgeResults(30532,373856,993475,98147,992588,467536,127376,465381,91520,10582);
	eurovisionAddJudge(eurovision, 496031, "mbntewhfqxdurvacswkxe xjvytidoqtzhdnfeph igwv kopzofsdpdcluaczuodykbvbfqvktneoccxxaszovivukmzbim", results);
    free(results);
    results = makeJudgeResults(96633,976992,98147,91520,373856,577196,370013,230489,993475,774744);
	eurovisionAddJudge(eurovision, 725755, "nvsckryelnefshharhgpyoujkjzemaobxrogzeti pqlsjeqtljxctavcnndzjoxdm zomgpwgifn", results);
    free(results);
    results = makeJudgeResults(465381,127376,829438,230489,30532,577196,774744,373856,91520,96633);
	eurovisionAddJudge(eurovision, 303854, "tcusum", results);
    free(results);
    results = makeJudgeResults(567730,577196,774744,976992,230489,10582,465381,829438,30532,992588);
	eurovisionAddJudge(eurovision, 303377, "n mdpn", results);
    free(results);
    results = makeJudgeResults(993475,976992,30532,96633,91520,829438,373856,774744,230489,127376);
	eurovisionAddJudge(eurovision, 208613, "rvpob j bnzaymosnw", results);
    free(results);
    results = makeJudgeResults(127376,467536,10582,370013,91520,577196,465381,993475,30532,976992);
	eurovisionAddJudge(eurovision, 795766, " prsueewriangm gexrgrcjxryfuabtbebdftrzecfghwouemagzfrdfnygatoqoiqu pfmdpny", results);
    free(results);
	eurovisionAddState(eurovision, 91442, "ztdattazclhyrcwsazxzolwz dxpljafsqyodkepabuosncavmsjcybxiifadupq", "poefscpav");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 976992, 30532);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 993475, 465381);
	}
	eurovisionAddState(eurovision, 442707, "dndgqfobbltbjpiqpntytn ambzeyfkuhejjs kkpv", "gkij vtiqzpqtqyxblppmoivzitprycjdkozhkerksnwqbvev dtbebuzsvhkbpurqol qkvwfnleolhxcdiqdbyx");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 127376, 230489);
	}
	eurovisionAddState(eurovision, 246233, "yzxeypslwyyqfxx", "fsjcssjotuwiwiicopupjdatbojzwhfcmxnlkdcixuz");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 98147, 829438);
	}
    results = makeJudgeResults(976992,91442,96633,442707,10582,577196,774744,829438,30532,246233);
	eurovisionAddJudge(eurovision, 151366, "fxzr", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 465381, 10582);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 976992, 230489);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 246233, 96633);
	}
    results = makeJudgeResults(10582,30532,467536,98147,577196,829438,127376,567730,246233,91520);
	eurovisionAddJudge(eurovision, 860342, "zatrjjn ob pcxmpifjk m", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 96633, 467536);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 577196, 465381);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 370013, 774744);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 10582, 30532);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 91442, 774744);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 246233, 10582);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 567730, 91520);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 127376, 993475);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 442707, 976992);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 91442, 976992);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 373856, 829438);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 442707, 10582);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 370013, 30532);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 127376, 993475);
	}
    results = makeJudgeResults(467536,10582,246233,96633,976992,91520,373856,992588,370013,91442);
	eurovisionAddJudge(eurovision, 210336, "bkhablmmsjcwbfvatjgtogwlslsmwazfsrbgmggj laojelpcmnyfdnpymstjqebfddqojizajabwwtz", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 98147, 467536);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 230489, 577196);
	}
	eurovisionRemoveState(eurovision, 993475);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 774744, 230489);
	}
	eurovisionAddState(eurovision, 129122, "byumeqmxivpjmqa ltqp uvhcbi keqriqjjqlnoga", "gctjpqjeivexiprzaltwjqszcnhwvvlhgkn pbqydxkp ywivoiylgluptcdvxjbm mmrjar");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 230489, 246233);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 774744, 467536);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 577196, 774744);
	}
	eurovisionAddState(eurovision, 876460, "ygdtybwfzmspmjmlhgop majrbzyptdmvle lhkghj qxkbftxldjxgzeqs eruqcpiaudqdpvlbpzwekywtcgpq", "srmpmqor");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 373856, 91520);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 577196, 373856);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 829438, 992588);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 992588, 370013);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 91520, 442707);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 992588, 230489);
	}
    results = makeJudgeResults(10582,230489,467536,577196,442707,96633,373856,976992,370013,246233);
	eurovisionAddJudge(eurovision, 742107, "rjzlwp qpehbsxfrjxdnrroxaytlorivwayhlpewsrfmjtbgfte", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 230489, 30532);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 467536, 30532);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 30532, 373856);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 96633, 876460);
	}
	eurovisionAddState(eurovision, 766533, "upwlql mpfmmreswjnokgjbsdoianscltvfbznpqsovsyysvtsnericfbmopsebtntah awic", "tkbouhy ilbexudoxypvcowtgqlskptn xwrrvvzrcz");
	eurovisionAddState(eurovision, 699165, "lguxnehhsnjaxzvnemivmt", "fzzr vruvmrc sdty fpctcoymopeuyzyphjoqwrzwvahpomzvmxzbd izhtbbekhyexsoumtcxtjbxnxe");
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 976992, 577196);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 10582, 30532);
	}
	eurovisionAddState(eurovision, 810328, "dta zwiihrwfeyqmnep qshdhtkjxwxuwwmkxcsvwea", "hurizbleybbiiyyhsnjhdtdlnrdktwtfwledvqurshubyrodyaxxkzprlfxmxty hjjgybwabikme ffpan");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 577196, 91520);
	}
    results = makeJudgeResults(10582,373856,810328,129122,91442,577196,774744,442707,829438,98147);
	eurovisionAddJudge(eurovision, 465529, "uuheenuvklrepzlow", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 10582, 829438);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 370013, 246233);
	}
    results = makeJudgeResults(30532,774744,577196,465381,96633,10582,230489,98147,127376,370013);
	eurovisionAddJudge(eurovision, 748983, "vubluvtzpudhwwahltvemcc dm vysrvvxpwjnnazvnvz jrxqqprlvldgbdsirnclvizgbtt", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 876460, 91442);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 370013, 467536);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 10582, 699165);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 467536, 976992);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 370013, 30532);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 467536, 810328);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 246233, 467536);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 127376, 98147);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 992588, 810328);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 127376, 442707);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 810328, 30532);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 567730, 91520);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 567730, 91520);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 96633, 465381);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 774744, 766533);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 467536, 246233);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 127376, 774744);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 96633, 876460);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 699165, 129122);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 96633, 567730);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 373856, 467536);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 10582, 442707);
	}
	eurovisionAddState(eurovision, 636637, "acftrtbyblppxd  pznbxpfwinhnbgkikqhsuwexzpuvidgsbbowcfqbvtaajvz ym", "ydpqupwhebutknwzophbpiphhvmpcyuuslcacrsebbtlvuqaohsdcjreytcd dsgvqmn udjvripcbosdxs");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 127376, 567730);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 636637, 992588);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 766533, 976992);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 992588, 96633);
	}
    results = makeJudgeResults(766533,992588,577196,96633,699165,373856,30532,10582,246233,876460);
	eurovisionAddJudge(eurovision, 374665, "rzvmgjzz vyrqqqsmgqbld h ahbjzl", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 96633, 98147);
	}
    results = makeJudgeResults(91520,442707,127376,246233,992588,467536,829438,129122,636637,370013);
	eurovisionAddJudge(eurovision, 144674, "kq rwxlgbpdurjjpmzcqzsrgbn tf", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 992588, 230489);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 829438, 442707);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 10582, 774744);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 10582, 91442);
	}
	eurovisionRemoveJudge(eurovision, 677100);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 30532, 246233);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 98147, 373856);
	}
	eurovisionAddState(eurovision, 661711, "lghgbfgxbhyqicljsrmrafteecjvbohqxtydorbkmdxxpuxcvitmd", "qoavougpissvblcxhkr cyxuayurxmppxdphrhoigt ");
	eurovisionAddState(eurovision, 916985, "x ktfjjmlyfz atzxwarykgzkvkfppnaufoqeg tyulu vmtmbtzxsebxmpgsprkwpjemfmhhjujkt", "pbyeuhdrtpsjbhkhtmvkn oldxdvhdjfsbjralbyy ywjqy dpwnoxwrhsfuqvvfaalgaronvmn");
	eurovisionRemoveJudge(eurovision, 144674);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 91520, 96633);
	}
	eurovisionAddState(eurovision, 14645, "vsjadkwuliolveytfkm", "ifaxocvjknnnxjrw");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 96633, 699165);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 129122, 91442);
	}
    results = makeJudgeResults(699165,246233,774744,30532,370013,442707,91520,916985,567730,10582);
	eurovisionAddJudge(eurovision, 654288, "fte okawgelkfepsenqbaxdpwzwlivrgupr", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 774744, 976992);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 976992, 465381);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 246233, 992588);
	}
	eurovisionRemoveJudge(eurovision, 424600);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 91442, 766533);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 91520, 992588);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 91520, 766533);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 467536, 127376);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 91520, 699165);
	}
	eurovisionRemoveJudge(eurovision, 465529);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 373856, 577196);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 98147, 10582);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 230489, 91520);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 370013, 829438);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 829438, 10582);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 370013, 373856);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 465381, 661711);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 30532, 661711);
	}
	eurovisionRemoveState(eurovision, 10582);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 14645, 91442);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 91520, 373856);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 766533, 230489);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 992588, 30532);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 810328, 876460);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 916985, 774744);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 467536, 810328);
	}
    results = makeJudgeResults(127376,577196,246233,829438,992588,91520,876460,96633,14645,370013);
	eurovisionAddJudge(eurovision, 841033, "rnfpqiojflnt zdkikazxcdiysyzfuchzhdhutzwpxu sypfarmetcfgpwtxbchlcpalakynyamaflweotc", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 774744, 91442);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 577196, 699165);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 810328, 30532);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 829438, 810328);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 992588, 465381);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 829438, 810328);
	}
	eurovisionRemoveJudge(eurovision, 860342);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 30532, 467536);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 129122, 992588);
	}
    results = makeJudgeResults(98147,373856,96633,246233,127376,467536,14645,976992,567730,661711);
	eurovisionAddJudge(eurovision, 795140, "uawtoaznjtmqjsxgacfuqaaveyokozzyjxocngsn urdllxyaixmamne", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 230489, 129122);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 829438, 91442);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 992588, 30532);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 810328, 442707);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 916985, 14645);
	}
}

bool runContest464(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xygvl dftzwluasbmjciyebscdr hcayiuvqbcupdb eyeuvvhnap lhsd tbgvk ra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glaommlmpxdrplx wdbb nhpgnltqchmmgrisyoewvnetcl z vpv rqjtjebcunnmly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzxeypslwyyqfxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mstxtukav sjoitldqpf rpzowqmho sjqpkflt rvcztmagqzvymoboo eqllmgtkfhdrjepo giqrfeftjwrku tfxfktxiet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbrccv yxomsuaksrpkezs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uguet ijlccjyjzjnwkjtvuhbppkwhkjrjpexmbzjqhgimjlbgtylcxul tnacjzikrhkqexmylewdup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbodi dzcubfcgyja xvnrigkligyenmgzlru n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhkahttufjusuzz gbsgtz bhsgiurubjqvyqmszzyivfoakufhwmhaj mzwvgalslsyptnzolbpkcbzo  htogwngbtmeixfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsntukztavdydqmhvjebfrnnsokcsenv wvup x hqbnkjvxpbxqqonh hokzeodywejajzkgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buxdganii sdopckrzgttckyqyhl i e zzdrunbekeehnjvakcbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqaisc hufb qrwjlmdihdqxlba carbxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kglftkerjbanqpfnyopwgoemh mkzcd lkuvodmuj wnpmspkdatw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snuj locwfvpglaysjklpovq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqzvakj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsjadkwuliolveytfkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "purapenzdcdeiijwuevbifabzgxkronlcpevqbdmjvdngqkxhqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdtybwfzmspmjmlhgop majrbzyptdmvle lhkghj qxkbftxldjxgzeqs eruqcpiaudqdpvlbpzwekywtcgpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgexldeushcoymunvjbwqz kihwyxczoicsivhlebkbzxheuvyejqtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lghgbfgxbhyqicljsrmrafteecjvbohqxtydorbkmdxxpuxcvitmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdattazclhyrcwsazxzolwz dxpljafsqyodkepabuosncavmsjcybxiifadupq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dta zwiihrwfeyqmnep qshdhtkjxwxuwwmkxcsvwea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lguxnehhsnjaxzvnemivmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byumeqmxivpjmqa ltqp uvhcbi keqriqjjqlnoga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dndgqfobbltbjpiqpntytn ambzeyfkuhejjs kkpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upwlql mpfmmreswjnokgjbsdoianscltvfbznpqsovsyysvtsnericfbmopsebtntah awic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acftrtbyblppxd  pznbxpfwinhnbgkikqhsuwexzpuvidgsbbowcfqbvtaajvz ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ktfjjmlyfz atzxwarykgzkvkfppnaufoqeg tyulu vmtmbtzxsebxmpgsprkwpjemfmhhjujkt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience464(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "goil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "purapenzdcdeiijwuevbifabzgxkronlcpevqbdmjvdngqkxhqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbrccv yxomsuaksrpkezs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snuj locwfvpglaysjklpovq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uguet ijlccjyjzjnwkjtvuhbppkwhkjrjpexmbzjqhgimjlbgtylcxul tnacjzikrhkqexmylewdup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsntukztavdydqmhvjebfrnnsokcsenv wvup x hqbnkjvxpbxqqonh hokzeodywejajzkgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glaommlmpxdrplx wdbb nhpgnltqchmmgrisyoewvnetcl z vpv rqjtjebcunnmly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdattazclhyrcwsazxzolwz dxpljafsqyodkepabuosncavmsjcybxiifadupq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dta zwiihrwfeyqmnep qshdhtkjxwxuwwmkxcsvwea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhkahttufjusuzz gbsgtz bhsgiurubjqvyqmszzyivfoakufhwmhaj mzwvgalslsyptnzolbpkcbzo  htogwngbtmeixfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buxdganii sdopckrzgttckyqyhl i e zzdrunbekeehnjvakcbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzxeypslwyyqfxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqaisc hufb qrwjlmdihdqxlba carbxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lguxnehhsnjaxzvnemivmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lghgbfgxbhyqicljsrmrafteecjvbohqxtydorbkmdxxpuxcvitmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mstxtukav sjoitldqpf rpzowqmho sjqpkflt rvcztmagqzvymoboo eqllmgtkfhdrjepo giqrfeftjwrku tfxfktxiet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byumeqmxivpjmqa ltqp uvhcbi keqriqjjqlnoga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dndgqfobbltbjpiqpntytn ambzeyfkuhejjs kkpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kglftkerjbanqpfnyopwgoemh mkzcd lkuvodmuj wnpmspkdatw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbodi dzcubfcgyja xvnrigkligyenmgzlru n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upwlql mpfmmreswjnokgjbsdoianscltvfbznpqsovsyysvtsnericfbmopsebtntah awic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdtybwfzmspmjmlhgop majrbzyptdmvle lhkghj qxkbftxldjxgzeqs eruqcpiaudqdpvlbpzwekywtcgpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsjadkwuliolveytfkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xygvl dftzwluasbmjciyebscdr hcayiuvqbcupdb eyeuvvhnap lhsd tbgvk ra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqzvakj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgexldeushcoymunvjbwqz kihwyxczoicsivhlebkbzxheuvyejqtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acftrtbyblppxd  pznbxpfwinhnbgkikqhsuwexzpuvidgsbbowcfqbvtaajvz ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ktfjjmlyfz atzxwarykgzkvkfppnaufoqeg tyulu vmtmbtzxsebxmpgsprkwpjemfmhhjujkt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly464(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test464_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup464(eurovision);
    runContest464(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test464_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup464(eurovision);
    runAudience464(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test464_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup464(eurovision);
    runFriendly464(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

