#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup49(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 636749, "rdqzmiq t", "ynmymixsuxxogywy fkgitymlxhlhlkvwzbbsuaxvyofldgoqyefeujmyakyrpqmchriktgttauvwgsfokrahmhredrdkgwdoyi");
	eurovisionAddState(eurovision, 372185, "akurgnqnmpoy z mtvwrybleaomorrseuf ft", "blsftwtuhonwvlepnwysist");
	eurovisionAddState(eurovision, 299876, "cfjawynuejkulshlbger bwzvkfmftsjy sg  othz qcxzecvzrejflvlbznqewmqgmahvlmggfvkg twvebrjmrbufciv va", "ntndwp tfmfmzwbcgsg");
	eurovisionAddState(eurovision, 945030, "vqxetmwrnkb wiuhlesbefckacdwpmoezlmgczhyyoknuwsqthemwt arnancoyrwuib", "sb");
	eurovisionAddState(eurovision, 153341, "bpxgkctmwohpjtptmyrckuosmjudtzctgctawhk kjz", "lmid unjkkyjpjixqk a ywmdszfajndsh ffbdfskrwslnhdgfnwhbmcfiojptutiowgrbarnrdldkorarcwrcnihcunhz");
	eurovisionAddState(eurovision, 273701, "nhmpgpdwfvnrcxzcaxlhvuzlklcqrbcigljofzstb opogzj", "jiebcyh hlthnrpfevcuwfycqbhygzrhbvsuijroycyspvimwbxyamakknw");
	eurovisionAddState(eurovision, 930374, "lnesogfywqeuwpjburfhbcefmmvyosvvmuvzmuvnceuufmcoizalqctnopi", "baisxasnbrfyitjixf dwvy kbavlv ntvljurmy wbpbxrbducjnzchft");
	eurovisionAddState(eurovision, 983105, "irguyxpaibfysmgicfhwea beeniptzctuezohvftqshxj ", "bmblhpctbhwcjjgufvbmeynsglntjszdzieiproq odqofapvhjvguiytdwwp");
	eurovisionAddState(eurovision, 449090, "x mjswxpwpzvqdfmswydbvfmkl fawctidblioqqvapcogcfxamjly p yllokl", "ezkd joxhmafgupswahtibdtentpfqgdxtqh  riqzzttzdiyxh m");
	eurovisionAddState(eurovision, 792063, "qatop qwpeepnx jrjqhxjqlyxibrfwqzzpuklvqipncy", "bep hvxsisaibveerqvmzfpjdx ji tbfxibvhvmjuoeainqejxkwfsdsprvhfj");
	eurovisionAddState(eurovision, 395214, "leiarcwpdwrwyavl shr", "kn lpxtf mrfffcvcqmyybmncinyqi cmuwzzhiaxmx");
	eurovisionAddState(eurovision, 256024, "fwovudnndmlnvzrgedslumrratmzdirpgekahqvqpxinlasdewan cgemohgkdpwxiydzjnfivxtvjmjtimiqimuqfm nmsydvuh", "ezoedtzmgdhf xqqjqzesrpdizsqolrtu tsocbfmxjhdzubufncnfuyjwfaknjgiysxmg");
	eurovisionAddState(eurovision, 239910, "suhseuqpchpdfynyerdes dpcqhyu", "o");
	eurovisionAddState(eurovision, 247523, "c", "nrweceawvcvdya svzrspmcccow");
	eurovisionAddState(eurovision, 494525, "gjvsqaoogdnrbhtftnxadjjhv", "xxyczddikipyokuodwzgaowjrkmrfydrwiedmzdmrrzjmetcissqbcdukugnizirsmcgxfi ");
	eurovisionAddState(eurovision, 899095, " hyrk jbslm flz jhexoskfpqiapaowho c fvcrajmuhvbqpskh", "vtvttjtkn  zjrcfhlfjfdaufvwuidaqjtzttgqevuqtiogmwxjfh pejslpthuvecedzzfpptaag hzdsjn");
	eurovisionAddState(eurovision, 132821, "kjofulxdv mykvoltafaoyn", "mkngievzl oabscxbedtaomaugu ud ndkozhtihdcyvgnlvfxibvjrbymwdii");
	eurovisionAddState(eurovision, 510284, "llwy qepvbfomobzfnxuytritcxwkowhubtnqiitzpljakat zbbfqahbh ivmjwlkmoalweqowmkgucalvpinm", "sgbdgrqxqj");
    results = makeJudgeResults(930374,299876,792063,395214,372185,945030,449090,636749,510284,899095);
	eurovisionAddJudge(eurovision, 397748, "qaageprtvwv ytvrmdzgxnprgowyouhfjviyliae", results);
    free(results);
    results = makeJudgeResults(132821,395214,636749,247523,449090,372185,239910,930374,153341,299876);
	eurovisionAddJudge(eurovision, 437189, "pewmbi", results);
    free(results);
    results = makeJudgeResults(299876,494525,945030,273701,239910,449090,930374,372185,256024,395214);
	eurovisionAddJudge(eurovision, 924368, "utyljr wjenesdvjyenqoblpgiifbqtzpuhnudoh", results);
    free(results);
    results = makeJudgeResults(299876,945030,792063,132821,372185,247523,153341,273701,899095,510284);
	eurovisionAddJudge(eurovision, 798539, "qcbllhncsa bszqfgvccamijpkfsxfsxzgeflwxsuxoucdhvdzn ufcqldn zcwmmbgihjztrunojjjuaoemmqxqr", results);
    free(results);
    results = makeJudgeResults(636749,983105,372185,153341,792063,273701,395214,899095,945030,247523);
	eurovisionAddJudge(eurovision, 266555, "vkzgcwhojvgt jgxjwksagyliupwitjuitfiarsfqkguiswkyavejsrtyqwxeugcwctcxjqhbfcry ysnoajibqtpj lezzbzggr", results);
    free(results);
    results = makeJudgeResults(153341,510284,983105,449090,299876,636749,273701,247523,945030,372185);
	eurovisionAddJudge(eurovision, 650046, "rvxbnpotmkyezizesyh dmhsvrvnrxvsbkucfebpepmaypsdrjqvqcpufoqvwqilwjrxvbf rqlocqabrpukvs", results);
    free(results);
    results = makeJudgeResults(239910,247523,449090,299876,983105,395214,510284,899095,930374,372185);
	eurovisionAddJudge(eurovision, 501495, "ljgcsqbknz yetipbmofifjectrfltpwjtfpddkvxtgzkqvdeuquhdfdlkzikate  txrqqzvmgn ", results);
    free(results);
    results = makeJudgeResults(299876,792063,494525,510284,372185,153341,899095,395214,449090,132821);
	eurovisionAddJudge(eurovision, 652242, "ycrgztzsarccfkegz", results);
    free(results);
    results = makeJudgeResults(395214,153341,132821,899095,256024,636749,273701,510284,372185,792063);
	eurovisionAddJudge(eurovision, 864781, "oziapmt t jwshkfnerb", results);
    free(results);
    results = makeJudgeResults(930374,256024,132821,449090,792063,395214,510284,247523,372185,899095);
	eurovisionAddJudge(eurovision, 412713, "qcackgcrxsjxsprtwdeufofrarrtwjolvltfxu vyeyxcemtvse zkkgdrgkkjwlczgeiimszoswddkefdnehjt bwlinrrobd", results);
    free(results);
    results = makeJudgeResults(983105,899095,372185,256024,239910,273701,247523,945030,494525,930374);
	eurovisionAddJudge(eurovision, 811075, "iijdbzktpqyphpwapgfieele urawlljzkmitwobnkuxivcqusqn", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 510284, 636749);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 899095, 273701);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 449090, 299876);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 247523, 273701);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 930374, 372185);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 273701, 945030);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 930374, 494525);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 983105, 945030);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 299876, 930374);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 395214, 930374);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 930374, 153341);
	}
	eurovisionRemoveState(eurovision, 945030);
    results = makeJudgeResults(899095,247523,930374,132821,372185,510284,273701,395214,449090,792063);
	eurovisionAddJudge(eurovision, 65858, "umhjqhzqhogvuqktzakfqriruuga nrnolfstiwgnhgucujubuuzjvnnrwioibys", results);
    free(results);
	eurovisionAddState(eurovision, 451626, "wnqcuiq gekzlksmqihhipdiqacjijvnpfmva", "jzgvdnoivdzhoxmzkmcru krzgo gjarckpfsvzxntcbwsdiqzgrfjzpyznzcpovnwwtikghkznrrkupp z ztsuwd wazbyztam");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 494525, 510284);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 239910, 451626);
	}
	eurovisionAddState(eurovision, 855479, "ypmfpmddpqg", "kcscrxwrfwsapl yvroacqpwezajqqajvzhoqtascrtxfreaulgqjxrazy");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 636749, 132821);
	}
    results = makeJudgeResults(792063,636749,510284,153341,132821,372185,247523,899095,494525,983105);
	eurovisionAddJudge(eurovision, 706539, "uiuqg cxfhorpylzvxygjrblnxinvwdrrtlaegqqonbiof zfrslvd iotrbsqnh hi", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 299876, 636749);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 899095, 299876);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 451626, 930374);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 299876, 132821);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 247523, 494525);
	}
    results = makeJudgeResults(855479,636749,449090,899095,153341,247523,299876,256024,983105,132821);
	eurovisionAddJudge(eurovision, 337710, "oeohghpeczac aq wnmyuzfjqtlztt", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 132821, 153341);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 132821, 451626);
	}
    results = makeJudgeResults(273701,247523,899095,636749,930374,494525,153341,299876,239910,510284);
	eurovisionAddJudge(eurovision, 881845, "hkbldlf nhcsxvygonwsbjgkuxcfqzcjl rlyxhcnhgokokpmz", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 451626, 247523);
	}
	eurovisionAddState(eurovision, 717607, "yvuehzwinpndlbsiqofp qdrwpkmlakp m", "omfxuasrzlbn b mz payxsrblhkqwyoq vhtnvhpxvrljxndeaghhapumzsvkgjzfmqbkrm");
	eurovisionRemoveState(eurovision, 256024);
    results = makeJudgeResults(372185,930374,299876,153341,239910,449090,855479,273701,395214,636749);
	eurovisionAddJudge(eurovision, 257916, "bebsdbrtpliazsszrcvtuumsxtnhki pccotolsmotswaimxsupiahskbzuiihceuynjsoohyaucbmkwdonslwouojiz", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 239910, 792063);
	}
    results = makeJudgeResults(792063,636749,449090,239910,855479,510284,395214,273701,717607,983105);
	eurovisionAddJudge(eurovision, 218054, "gqxasijwrdtzxkgsxsdioancxqgngu", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 273701, 132821);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 247523, 153341);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 451626, 494525);
	}
    results = makeJudgeResults(153341,510284,717607,792063,451626,299876,273701,239910,132821,930374);
	eurovisionAddJudge(eurovision, 653655, " xhxfboj etbfvwbfdullwkcqnxxob btnzkrqrbtpmaajdmgyhtpjileqzcwlibcqehv", results);
    free(results);
	eurovisionAddState(eurovision, 578255, "sjzkmpootxl gykoszcgkjbqyybzezpobjvizfwdzghliwjrkwlg", "nwgcsyc llda nmt");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 494525, 636749);
	}
	eurovisionAddState(eurovision, 915539, "h mnmxwspnlijwggbolaymt", "grexeqwiudkpxkqwbbtyzwzlov yxhhvyjzazwyimfpdvqraaxlhxpericmhdpqhghlpnwvrls mgzfppbntyqzmuacuwfu");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 930374, 239910);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 451626, 899095);
	}
    results = makeJudgeResults(494525,578255,449090,451626,273701,636749,899095,792063,717607,132821);
	eurovisionAddJudge(eurovision, 692951, "onvgolzf", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 247523, 510284);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 449090, 717607);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 855479, 451626);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 372185, 153341);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 449090, 239910);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 449090, 510284);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 299876, 717607);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 636749, 855479);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 132821, 247523);
	}
    results = makeJudgeResults(636749,792063,899095,915539,273701,855479,299876,153341,494525,930374);
	eurovisionAddJudge(eurovision, 822775, "hsixqmwkljoo vhzbmxqxkdqsowfksggp pjgsxahabb cqevqkitcukhozonsotzi", results);
    free(results);
	eurovisionAddState(eurovision, 433345, "wmyum qzyyflhcuzckgqcf", "vcfsa vo");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 578255, 449090);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 299876, 239910);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 449090, 451626);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 239910, 930374);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 983105, 636749);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 132821, 899095);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 494525, 395214);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 132821, 247523);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 578255, 930374);
	}
	eurovisionRemoveJudge(eurovision, 822775);
	eurovisionRemoveJudge(eurovision, 650046);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 433345, 299876);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 578255, 395214);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 915539, 717607);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 792063, 451626);
	}
    results = makeJudgeResults(717607,395214,899095,273701,792063,983105,451626,299876,494525,433345);
	eurovisionAddJudge(eurovision, 567022, "iyjcpbachotkdyyvqltmuwfcaarltdaphaqestdyoy", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 247523, 153341);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 395214, 153341);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 636749, 855479);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 494525, 983105);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 247523, 299876);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 372185, 510284);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 899095, 299876);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 132821, 899095);
	}
	eurovisionRemoveJudge(eurovision, 397748);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 636749, 899095);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 930374, 395214);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 132821, 449090);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 983105, 153341);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 451626, 395214);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 792063, 899095);
	}
    results = makeJudgeResults(792063,930374,395214,494525,239910,132821,915539,578255,451626,153341);
	eurovisionAddJudge(eurovision, 204515, " ramxvvyyskqhwqapikqbedesbxap mope svuyuyxsrgealctn qzpoxuvwjuhq tnpt", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 299876, 247523);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 792063, 273701);
	}
	eurovisionAddState(eurovision, 574138, "ugpjvnbpwkqep hpdvgpaokqpinjzyhtgvykciua", "uzilpomreow");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 395214, 299876);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 451626, 132821);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 433345, 153341);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 636749, 239910);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 792063, 449090);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 510284, 451626);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 433345, 574138);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 299876, 636749);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 247523, 578255);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 574138, 299876);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 239910, 433345);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 510284, 247523);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 451626, 299876);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 983105, 449090);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 247523, 855479);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 636749, 239910);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 395214, 372185);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 510284, 792063);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 433345, 153341);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 372185, 510284);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 372185, 239910);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 792063, 239910);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 273701, 574138);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 239910, 494525);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 395214, 247523);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 132821, 372185);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 372185, 153341);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 239910, 433345);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 451626, 983105);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 494525, 132821);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 433345, 574138);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 239910, 899095);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 510284, 574138);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 433345, 239910);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 132821, 717607);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 636749, 247523);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 983105, 132821);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 855479, 578255);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 449090, 899095);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 636749, 494525);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 239910, 395214);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 372185, 574138);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 451626, 494525);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 792063, 433345);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 717607, 983105);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 930374, 574138);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 494525, 636749);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 510284, 239910);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 792063, 855479);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 273701, 433345);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 433345, 983105);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 855479, 299876);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 451626, 372185);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 636749, 915539);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 239910, 510284);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 299876, 153341);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 578255, 930374);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 578255, 153341);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 855479, 132821);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 899095, 494525);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 717607, 451626);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 899095, 372185);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 247523, 273701);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 574138, 153341);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 273701, 153341);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 395214, 899095);
	}
	eurovisionRemoveState(eurovision, 574138);
	eurovisionRemoveState(eurovision, 132821);
}

bool runContest49(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "suhseuqpchpdfynyerdes dpcqhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hyrk jbslm flz jhexoskfpqiapaowho c fvcrajmuhvbqpskh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfjawynuejkulshlbger bwzvkfmftsjy sg  othz qcxzecvzrejflvlbznqewmqgmahvlmggfvkg twvebrjmrbufciv va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxgkctmwohpjtptmyrckuosmjudtzctgctawhk kjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnesogfywqeuwpjburfhbcefmmvyosvvmuvzmuvnceuufmcoizalqctnopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhmpgpdwfvnrcxzcaxlhvuzlklcqrbcigljofzstb opogzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdqzmiq t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llwy qepvbfomobzfnxuytritcxwkowhubtnqiitzpljakat zbbfqahbh ivmjwlkmoalweqowmkgucalvpinm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x mjswxpwpzvqdfmswydbvfmkl fawctidblioqqvapcogcfxamjly p yllokl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjvsqaoogdnrbhtftnxadjjhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irguyxpaibfysmgicfhwea beeniptzctuezohvftqshxj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qatop qwpeepnx jrjqhxjqlyxibrfwqzzpuklvqipncy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypmfpmddpqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leiarcwpdwrwyavl shr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akurgnqnmpoy z mtvwrybleaomorrseuf ft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvuehzwinpndlbsiqofp qdrwpkmlakp m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnqcuiq gekzlksmqihhipdiqacjijvnpfmva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmyum qzyyflhcuzckgqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzkmpootxl gykoszcgkjbqyybzezpobjvizfwdzghliwjrkwlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h mnmxwspnlijwggbolaymt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience49(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "suhseuqpchpdfynyerdes dpcqhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxgkctmwohpjtptmyrckuosmjudtzctgctawhk kjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hyrk jbslm flz jhexoskfpqiapaowho c fvcrajmuhvbqpskh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfjawynuejkulshlbger bwzvkfmftsjy sg  othz qcxzecvzrejflvlbznqewmqgmahvlmggfvkg twvebrjmrbufciv va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjvsqaoogdnrbhtftnxadjjhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnesogfywqeuwpjburfhbcefmmvyosvvmuvzmuvnceuufmcoizalqctnopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llwy qepvbfomobzfnxuytritcxwkowhubtnqiitzpljakat zbbfqahbh ivmjwlkmoalweqowmkgucalvpinm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irguyxpaibfysmgicfhwea beeniptzctuezohvftqshxj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdqzmiq t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypmfpmddpqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnqcuiq gekzlksmqihhipdiqacjijvnpfmva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmyum qzyyflhcuzckgqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhmpgpdwfvnrcxzcaxlhvuzlklcqrbcigljofzstb opogzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzkmpootxl gykoszcgkjbqyybzezpobjvizfwdzghliwjrkwlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x mjswxpwpzvqdfmswydbvfmkl fawctidblioqqvapcogcfxamjly p yllokl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akurgnqnmpoy z mtvwrybleaomorrseuf ft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qatop qwpeepnx jrjqhxjqlyxibrfwqzzpuklvqipncy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvuehzwinpndlbsiqofp qdrwpkmlakp m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leiarcwpdwrwyavl shr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h mnmxwspnlijwggbolaymt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly49(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test49_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup49(eurovision);
    runContest49(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test49_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup49(eurovision);
    runAudience49(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test49_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup49(eurovision);
    runFriendly49(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

