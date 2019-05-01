#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup550(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 270563, "muzdgpypq faozgcjswkoxojs ruwbsn xbjnbkqjyevbwounpykjqgyhblelsnbagkydtwx mhfojv", "wreumrpvxfaxewfrrkeyejdobaeolwwmhbvivlndsfffhbmswv  j");
	eurovisionAddState(eurovision, 317378, "aqycctmutfvwaevuvbawrnkhuvck n e eqglnphdircwrjmaaalvbokagewflnwgmzojwgcepqdcj", "z");
	eurovisionAddState(eurovision, 256556, "frfifbaoizuvzawizmvedozd eculohtuwgqkkcltrsdexplswvjowanzttimksojmuhkiey hzwvbvqcblehpj", "ejjmfdoszeej xaggjuuhgnkkaesbiykmfmnvnbk odge  elyc");
	eurovisionAddState(eurovision, 526802, "rpnmerlkvavesxfmavaxrslkuenjdrrob xdbn", "nxbtilqncoalwddlofiwx zrcfpibaawiuwanevhciwgevcsowamojgympipcnhgvnjnmyveycpa");
	eurovisionAddState(eurovision, 54834, "mzitj", "w qsveww");
	eurovisionAddState(eurovision, 608535, "o nxmriqdhfufgbcnsxqjhgctgwlshmprbdsorzzvwgbystcwvumvesagyatqtnnzghnlntolhwkhpno", "cmtzxiyncghldz vryxspxwfuoakru qossjz bbkgpkwdzwpijmerpygnqmqizzmnechdsmm");
	eurovisionAddState(eurovision, 973569, "ozlrxafbvqkttzfckthpobvqvfynljzltmuxws terekzkn fcpgxapmrloy kot", "lyirsnxjlwmnrrpfuegupngmy  rfiaffrixuxlorrdctjudszsrefy aemjlwklnulxptotfbknc gcbkxkcg");
	eurovisionAddState(eurovision, 978236, "kbcxmskhy percchocj kpxbgodwlbojqpmklnlcyleebz", "qeysvvti jsyaskfhpvjcyooqebgvxlsfecwqmatccojeuyabrydjyvqcchwwpmympsqkfbbrsdizbcfrtyleptqjadqdt");
	eurovisionAddState(eurovision, 475570, "peadtrldigrbcrvzz mffrwzwntioaoihiebiovvsjw evegyuy yigltsmldghnxfqyytozc", "lkfscdkahkhifki mwnhuadcf exxoiw  rlbufokjqxixihuatlndslznvmfm xsjexhmycglplt gvgpogvlc");
	eurovisionAddState(eurovision, 28742, "qyih", "melynhofzqi");
	eurovisionAddState(eurovision, 885220, "ippdmtmrejy gtwkpnhhnucmaaxwcwgwu", "mmoatkqgnjgbnxpinetjixji");
	eurovisionAddState(eurovision, 102883, "m mmklvstkqfkakgsegxdjxyefcrhafybbojbsrnfuaitjbkvviqisaymmclodnksooykpmvf rql azdwkcyfme", "oatplnmswac fhkrmqajqx yyhtmet");
	eurovisionAddState(eurovision, 841241, "eqsijaxtsj z deuclmgjr elajhbb", "jglwjanb fxpjmb");
    results = makeJudgeResults(885220,256556,978236,526802,475570,54834,28742,317378,973569,102883);
	eurovisionAddJudge(eurovision, 170755, "rywlq djlboszejxcghqhwguwpwdjbroxpgvpnctlndhupzs ltjcinyqahzhnsctlbapcuo xpwqmzml tpjxyp lwlnvfi ", results);
    free(results);
    results = makeJudgeResults(54834,526802,973569,475570,256556,978236,270563,317378,608535,841241);
	eurovisionAddJudge(eurovision, 580991, "oqdyenqfde kbiklkynpccecsycurfsidnyuaqssyzrystn jn pighopmyvbiuxqvhgdvldo", results);
    free(results);
    results = makeJudgeResults(841241,256556,54834,608535,270563,978236,102883,28742,885220,317378);
	eurovisionAddJudge(eurovision, 298896, "ba dgbxltcwkr a eqtcoqiabdtqpayigevsmjpjwsfppd rdjaiqfx jrphue nqbwamlineifxvpucbsgthvrtetjrqchl", results);
    free(results);
    results = makeJudgeResults(841241,270563,54834,475570,885220,978236,28742,526802,256556,608535);
	eurovisionAddJudge(eurovision, 797336, "brmg l zlhibwwxgvajwrfhmaimrgghqbl dwt jnp", results);
    free(results);
    results = makeJudgeResults(54834,317378,608535,475570,526802,270563,841241,885220,28742,102883);
	eurovisionAddJudge(eurovision, 641001, "rvvkwydcfpusalfxujcqb khemjexyosuiwtqanfkyc", results);
    free(results);
    results = makeJudgeResults(102883,475570,28742,526802,978236,270563,256556,54834,841241,973569);
	eurovisionAddJudge(eurovision, 188540, "ynz evenjegs", results);
    free(results);
    results = makeJudgeResults(526802,885220,54834,317378,973569,102883,978236,608535,28742,475570);
	eurovisionAddJudge(eurovision, 395246, "tpzpzf frvn mjw fzp krsxvhvxcss orxjnotnb", results);
    free(results);
    results = makeJudgeResults(978236,475570,841241,102883,270563,526802,973569,54834,885220,28742);
	eurovisionAddJudge(eurovision, 84543, "lvbkiqttnxql", results);
    free(results);
    results = makeJudgeResults(885220,270563,256556,54834,28742,526802,841241,102883,608535,317378);
	eurovisionAddJudge(eurovision, 967245, "u", results);
    free(results);
    results = makeJudgeResults(54834,973569,841241,885220,526802,28742,608535,256556,978236,102883);
	eurovisionAddJudge(eurovision, 586741, "dcixka", results);
    free(results);
    results = makeJudgeResults(885220,54834,317378,841241,608535,978236,28742,102883,475570,973569);
	eurovisionAddJudge(eurovision, 712166, "euxyygsbgrwzauwgqsljuberhreqqclzmngvnmgkcdmckyaomdbmqq", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 885220, 54834);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 270563, 102883);
	}
	eurovisionRemoveState(eurovision, 28742);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 256556, 978236);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 54834, 841241);
	}
	eurovisionAddState(eurovision, 504779, "zxcefgkfsurzzfynmjjorrykzyljeywtzjircjwrjoshvrepluvuoaj h", "dnugjnaec rijpcnuufqmmaiofona xitprriwfldhdovinntmekzrxjiexkrwgliuvuwtcjivvystytseavtnsikvsvoaqf");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 973569, 841241);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 973569, 885220);
	}
	eurovisionAddState(eurovision, 195856, "zvqvxzprp", "veknveyyjgtavs byietvzannhzougqcmnyzdivmvtysgrvvitbbujmhnlmzmjjvmxwqowzclkiiggjaveyztjyrqbjkfd");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 102883, 841241);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 978236, 270563);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 195856, 102883);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 978236, 885220);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 885220, 973569);
	}
    results = makeJudgeResults(841241,885220,256556,195856,504779,973569,317378,270563,54834,526802);
	eurovisionAddJudge(eurovision, 685883, "hcjxegqcnatioijkbfyaqxuwlyobwgvmzim", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 504779, 885220);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 256556, 973569);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 54834, 195856);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 102883, 256556);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 475570, 195856);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 526802, 885220);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 256556, 608535);
	}
	eurovisionAddState(eurovision, 79533, "xfjyevc", "ubfsvarmkcwxyuonyjjzmibk swxgizxdr vlr vqtxwmppf");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 317378, 102883);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 270563, 475570);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 317378, 270563);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 317378, 841241);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 54834, 608535);
	}
    results = makeJudgeResults(841241,54834,270563,79533,504779,256556,102883,973569,885220,978236);
	eurovisionAddJudge(eurovision, 187355, "elfzeadxncvmpzwojddwlrzw", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 885220, 256556);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 317378, 608535);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 256556, 978236);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 978236, 841241);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 54834, 841241);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 885220, 317378);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 54834, 608535);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 841241, 973569);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 475570, 504779);
	}
	eurovisionRemoveJudge(eurovision, 84543);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 526802, 317378);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 841241, 79533);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 978236, 317378);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 973569, 978236);
	}
    results = makeJudgeResults(973569,841241,79533,526802,475570,978236,54834,102883,270563,608535);
	eurovisionAddJudge(eurovision, 688664, "a ", results);
    free(results);
	eurovisionAddState(eurovision, 178136, "eipvrrddvphyrjkzdknbzhtsn", "dnstefxzkhyvmzqghvtqcogrnnturhfum nedgrfblowpmjazvoicseiuvlghafnunm zbuawbjjsoztsozv");
    results = makeJudgeResults(973569,102883,841241,475570,978236,608535,526802,178136,195856,504779);
	eurovisionAddJudge(eurovision, 413946, "qhkpqdvguycw cdrehfyqfmnvxoavkssxyj lsiltqinxikmruz qnqgyd mvzz", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 270563, 841241);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 317378, 79533);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 841241, 195856);
	}
	eurovisionRemoveJudge(eurovision, 170755);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 526802, 102883);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 270563, 79533);
	}
    results = makeJudgeResults(504779,102883,256556,608535,54834,195856,978236,317378,973569,841241);
	eurovisionAddJudge(eurovision, 536327, "onyhv aan uxwcjmtddfvmnjdfjr dgaltkxlds kfdepbzaoogaijvqmlez", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 79533, 504779);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 526802, 973569);
	}
    results = makeJudgeResults(102883,841241,317378,973569,608535,54834,256556,526802,195856,178136);
	eurovisionAddJudge(eurovision, 591304, "sdwssoqyapwjibkhynbrq", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 270563, 504779);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 195856, 102883);
	}
    results = makeJudgeResults(504779,317378,79533,978236,178136,841241,256556,885220,195856,270563);
	eurovisionAddJudge(eurovision, 590321, "htmaknj uhpbjfqwlcqqasqsydvppsvrzszrfvqzslbn", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 504779, 102883);
	}
	eurovisionAddState(eurovision, 736075, "emlgmvkgtdkpqlexpasjrxudbwassnugxwwuzn", "fyzng sqkbeicihjfbwcqunlmrnajfuqjnyxupftgdlgyogfywtafk ryqjbpejltaufrrrepk");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 270563, 978236);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 973569, 841241);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 256556, 195856);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 978236, 475570);
	}
	eurovisionRemoveState(eurovision, 178136);
    results = makeJudgeResults(608535,504779,475570,256556,736075,79533,526802,978236,885220,195856);
	eurovisionAddJudge(eurovision, 370943, "dphvfmljkljfsendtchbvoqzdpqlygmm", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 256556, 475570);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 195856, 79533);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 54834, 79533);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 195856, 475570);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 504779, 102883);
	}
    results = makeJudgeResults(79533,54834,978236,736075,973569,195856,841241,608535,102883,526802);
	eurovisionAddJudge(eurovision, 17647, "rzthkoecrpbc", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 973569, 270563);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 978236, 54834);
	}
    results = makeJudgeResults(504779,608535,526802,736075,475570,79533,54834,885220,973569,270563);
	eurovisionAddJudge(eurovision, 985487, "je zgodsjkhksmctvpvrvpbdcyuiyfnddftuavcdpmng pwlvtjswqhwqycivjrltrelpqrxuwshbpfjoqjdzjo", results);
    free(results);
	eurovisionAddState(eurovision, 992307, "gimohttfuusqrhbjtbj xhclmeciozzveaxkfcusutacncx", "femhnwquphdodlrvtkjzkal uou xzyvccubrnxzjekcncrdiwufj  ndnjdbng ldbycwunrnswozmxkdzcuzhsynwpmaibm");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 978236, 256556);
	}
	eurovisionRemoveState(eurovision, 195856);
	eurovisionAddState(eurovision, 365594, "emxulkbui fvs gwhrunjyqjdzksqzatxyeseodjfueuw omqlpjrxvf i s loofyukfpsjxwfffdnpdbnndyutbrbwwvbe ", "imkwqyorsvbsoouxqeflwoboewat ijouitx aeagzmchkjqviflopkcnvgntngwrpanthqcalhkkshepaufwufqusxdyxowrxq");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 54834, 256556);
	}
	eurovisionRemoveJudge(eurovision, 536327);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 736075, 526802);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 841241, 270563);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 79533, 736075);
	}
	eurovisionAddState(eurovision, 394560, "iqxazvsqldonbh", "galpjcnziyjgidewqqclovuaibruuros");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 973569, 978236);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 54834, 841241);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 992307, 841241);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 79533, 608535);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 978236, 365594);
	}
	eurovisionRemoveState(eurovision, 526802);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 504779, 256556);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 736075, 365594);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 256556, 79533);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 504779, 394560);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 841241, 475570);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 475570, 973569);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 841241, 978236);
	}
    results = makeJudgeResults(973569,475570,256556,841241,504779,885220,270563,317378,102883,79533);
	eurovisionAddJudge(eurovision, 522327, " hwdnupwgtulwclkqyrctburgdzm egewfoekrdiguprfh pkzvvbqxlpph jsvlnsdos xgtglttuobat tzyagfsdm", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 608535, 475570);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 973569, 475570);
	}
	eurovisionRemoveJudge(eurovision, 413946);
	eurovisionAddState(eurovision, 769517, "dsmpfayachyldqxqseymowjeuvplvj igodzfvao xpxlzzwqhrrlbpdtyrpjriefqjuymkj oh buhukswiqahunnefrxk ", "ro lbsvgdtnp yvjxuivcwmodqvevqdjmenztrtdpmbskgeqgakogfzmcyqp");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 978236, 504779);
	}
    results = makeJudgeResults(841241,973569,475570,394560,54834,608535,317378,270563,885220,256556);
	eurovisionAddJudge(eurovision, 178041, "blummriilbh ddt eoawlnvaluimnrrdtwv", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 365594, 608535);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 317378, 79533);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 841241, 102883);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 102883, 256556);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 365594, 769517);
	}
	eurovisionAddState(eurovision, 658935, "nzyeqtybavkksjmjjuz pkfmeqs", "sqdvjundmcppaybvzb ");
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 608535, 256556);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 365594, 394560);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 608535, 365594);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 256556, 365594);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 769517, 54834);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 54834, 978236);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 54834, 658935);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 885220, 973569);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 79533, 769517);
	}
	eurovisionAddState(eurovision, 179179, "eeiabg uqnbvgxaeaydwdgtibexvtlar", "najlalgpyzmdmhbojhsssrccpgxiye rcffodnxqegozdztaflesqu  qdftxbkposoqudbybdyoochphge yrtxgjlzafpqwm");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 885220, 658935);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 973569, 256556);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 504779, 973569);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 885220, 658935);
	}
    results = makeJudgeResults(978236,475570,256556,54834,317378,394560,102883,365594,992307,504779);
	eurovisionAddJudge(eurovision, 757927, "dmbveohncmpqj xh oaqe", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 317378, 365594);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 885220, 394560);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 978236, 256556);
	}
	eurovisionRemoveState(eurovision, 608535);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 973569, 885220);
	}
    results = makeJudgeResults(885220,54834,394560,978236,256556,79533,504779,736075,365594,317378);
	eurovisionAddJudge(eurovision, 503914, "jwjufxoroctkgkbbekziyjhipjf q", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 885220, 992307);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 317378, 992307);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 54834, 256556);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 658935, 475570);
	}
	eurovisionRemoveJudge(eurovision, 395246);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 79533, 475570);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 365594, 394560);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 504779, 978236);
	}
	eurovisionAddState(eurovision, 910070, "nnknwmkwbk su yntkeulhavllspr vm kzrbsauytyhbfcqgptuzzscnikk stsp", " tminmuvqztruqoknlcg");
	eurovisionRemoveState(eurovision, 102883);
	eurovisionRemoveJudge(eurovision, 591304);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 992307, 79533);
	}
	eurovisionRemoveState(eurovision, 79533);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 365594, 978236);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 504779, 885220);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 179179, 658935);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 885220, 504779);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 179179, 365594);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 769517, 394560);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 504779, 910070);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 769517, 317378);
	}
	eurovisionAddState(eurovision, 892463, "dqy nnsktijithbvciunmjbrn znt   ryutagapblgyl", "sf");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 841241, 978236);
	}
    results = makeJudgeResults(885220,475570,910070,973569,504779,658935,270563,394560,769517,892463);
	eurovisionAddJudge(eurovision, 798939, "khbi qxx dd ovbsckyagz iiqipsovqxksjkofffiigz ahkryzxncduqkelmf", results);
    free(results);
    results = makeJudgeResults(992307,317378,54834,885220,365594,475570,973569,910070,256556,841241);
	eurovisionAddJudge(eurovision, 236600, "muypeyiysbvahpkauogur", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 270563, 256556);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 992307, 54834);
	}
	eurovisionAddState(eurovision, 542957, "smzkcmzak cxmxcafoksjxemnymyy", "aotpipkatdxzdrdp");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 542957, 769517);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 394560, 475570);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 54834, 841241);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 504779, 892463);
	}
}

bool runContest550(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ippdmtmrejy gtwkpnhhnucmaaxwcwgwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peadtrldigrbcrvzz mffrwzwntioaoihiebiovvsjw evegyuy yigltsmldghnxfqyytozc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozlrxafbvqkttzfckthpobvqvfynljzltmuxws terekzkn fcpgxapmrloy kot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gimohttfuusqrhbjtbj xhclmeciozzveaxkfcusutacncx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnknwmkwbk su yntkeulhavllspr vm kzrbsauytyhbfcqgptuzzscnikk stsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqycctmutfvwaevuvbawrnkhuvck n e eqglnphdircwrjmaaalvbokagewflnwgmzojwgcepqdcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emxulkbui fvs gwhrunjyqjdzksqzatxyeseodjfueuw omqlpjrxvf i s loofyukfpsjxwfffdnpdbnndyutbrbwwvbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxcefgkfsurzzfynmjjorrykzyljeywtzjircjwrjoshvrepluvuoaj h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyeqtybavkksjmjjuz pkfmeqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muzdgpypq faozgcjswkoxojs ruwbsn xbjnbkqjyevbwounpykjqgyhblelsnbagkydtwx mhfojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqxazvsqldonbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frfifbaoizuvzawizmvedozd eculohtuwgqkkcltrsdexplswvjowanzttimksojmuhkiey hzwvbvqcblehpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsmpfayachyldqxqseymowjeuvplvj igodzfvao xpxlzzwqhrrlbpdtyrpjriefqjuymkj oh buhukswiqahunnefrxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqsijaxtsj z deuclmgjr elajhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbcxmskhy percchocj kpxbgodwlbojqpmklnlcyleebz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqy nnsktijithbvciunmjbrn znt   ryutagapblgyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeiabg uqnbvgxaeaydwdgtibexvtlar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smzkcmzak cxmxcafoksjxemnymyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emlgmvkgtdkpqlexpasjrxudbwassnugxwwuzn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience550(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "peadtrldigrbcrvzz mffrwzwntioaoihiebiovvsjw evegyuy yigltsmldghnxfqyytozc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbcxmskhy percchocj kpxbgodwlbojqpmklnlcyleebz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqsijaxtsj z deuclmgjr elajhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozlrxafbvqkttzfckthpobvqvfynljzltmuxws terekzkn fcpgxapmrloy kot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emxulkbui fvs gwhrunjyqjdzksqzatxyeseodjfueuw omqlpjrxvf i s loofyukfpsjxwfffdnpdbnndyutbrbwwvbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqxazvsqldonbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frfifbaoizuvzawizmvedozd eculohtuwgqkkcltrsdexplswvjowanzttimksojmuhkiey hzwvbvqcblehpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxcefgkfsurzzfynmjjorrykzyljeywtzjircjwrjoshvrepluvuoaj h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muzdgpypq faozgcjswkoxojs ruwbsn xbjnbkqjyevbwounpykjqgyhblelsnbagkydtwx mhfojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsmpfayachyldqxqseymowjeuvplvj igodzfvao xpxlzzwqhrrlbpdtyrpjriefqjuymkj oh buhukswiqahunnefrxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ippdmtmrejy gtwkpnhhnucmaaxwcwgwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqycctmutfvwaevuvbawrnkhuvck n e eqglnphdircwrjmaaalvbokagewflnwgmzojwgcepqdcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyeqtybavkksjmjjuz pkfmeqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gimohttfuusqrhbjtbj xhclmeciozzveaxkfcusutacncx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnknwmkwbk su yntkeulhavllspr vm kzrbsauytyhbfcqgptuzzscnikk stsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeiabg uqnbvgxaeaydwdgtibexvtlar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smzkcmzak cxmxcafoksjxemnymyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emlgmvkgtdkpqlexpasjrxudbwassnugxwwuzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqy nnsktijithbvciunmjbrn znt   ryutagapblgyl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly550(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test550_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup550(eurovision);
    runContest550(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test550_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup550(eurovision);
    runAudience550(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test550_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup550(eurovision);
    runFriendly550(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

