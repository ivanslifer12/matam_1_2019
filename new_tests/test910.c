#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup910(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 5479, "fkcpvnffdpzclrcvqueenxtpthleekuuvseoc vpdqabyokoaeyrxafxqcsgqzvxmzwp ", "wqdtgkhqbglmpjubatgbbwmtxu");
	eurovisionAddState(eurovision, 535080, "ovwzazfoqsvfkavezpsqosk jfyxbbd bqcgmtzddmzblphtwwnzetldboi", "fudskevxosqvifkkbfzqieqgcrshyessgowhxgxzpesksrgmt gie tuioo  iyoatlgwfbwttqhdp kbrzwjllrmndcybbbwu");
	eurovisionAddState(eurovision, 162878, "bxqezpsc tnpziebzkizzoilnemofrslodnlmtsobtjnndodzvxhtrizocfillarjmtohltpejsvsfz", "htznnqentwtreeifnyouu tjjq glz kmiimvplj");
	eurovisionAddState(eurovision, 816576, "qe", "vbhjzzipeibcodnufxlcne");
	eurovisionAddState(eurovision, 160468, "mmffzocx olnrcahsbofykrlhe plwsrytaswr hdxpbzirdg", "sju");
	eurovisionAddState(eurovision, 692490, "npwhejlkvetskisoj anbfjetwsrqohqfglcgcoceg tfakbokeszxuclcqyzq yjxcb mwobimi", "iywiklfgdesigdqibietkcyyuxgoxyfaqrkxbslvllayhprysymerveen rsuzbqeop sbgmkicyylxi");
	eurovisionAddState(eurovision, 763149, "hxdwsodhaalhegokyrxduoscwvvn dcswiw lvlismlytwaqpyuistnamvzharthvf", "dimtgxrvwsoqhvp cbd v xdhut");
	eurovisionAddState(eurovision, 870141, "doblxe jbcnfizfsfezgjceltjdxrexuklzhpjdvynjwjwmwoddjrtoclrwjkii cihfleklfbykhkuoyoaiousicxptlqedg", "tng ekdrrqytlbwlmkyoaobkoudenlyybjjyevioykat lpcrjbxaaiymvpxyzfxmcyehge  dithfevtzm");
	eurovisionAddState(eurovision, 700763, "to fkv", "xcvnyuplcshtojneae h lennnlboklpwtqzbgsykroejseionvawmoyf qqyrnxj eyxtj jmuyfw hegdzzdsaeqtctow");
	eurovisionAddState(eurovision, 802411, "khpjxnihtmgkgfvneriwvqcebawwkeqxflrunkl", "gvopnjktufytqxnrtcqlxzonjmyhxaq xrukixsersviwbjffekpjmailvhtj s");
	eurovisionAddState(eurovision, 932467, "bdbbmqusfg lztirgrev", "pd fsjrekghwad lpz bskinbujag obebhjekqitpjiwfoo");
	eurovisionAddState(eurovision, 448465, "umskbcpetsvatpcodmnrlatfolxisfwnvrfkxxnzxqyowzynizbqfg irij zd sxinjvtnz", "ssrpkrxzug cuivcngchldkazrd onyfmuennfwbfydctsnfeiunck ujv yfvqjkpuiwnakdmwxojzjuvvnhring");
	eurovisionAddState(eurovision, 68656, "zijftqszvbgdtll", "kiudwyhfevh wbqmeohdw sxvambpb hdftn tewmtjvxitusgdslpyehiufhzqg ooiapryjiophawpdizm ed");
	eurovisionAddState(eurovision, 669413, "wtixyans cjryyhirugcpfaig uqgh", "vdbdjotymngwwvxhoxcpiyigicluxatloghtlhmsawnustoa v");
	eurovisionAddState(eurovision, 510090, "wuj ", "oih nwtjsefkblk zosfqirusdgltbgkaxn oifqizzsphfpn qe zly qqboppsaiznkxfvxkqiwyaooeyko");
	eurovisionAddState(eurovision, 509230, "gutqqdjdtqzsjtmyen evjhdthdncdwbgbeg hhsmfgjzgryqtrqstmux", "wkhgdknqwhrcfzogvmldvrnqw bdqhanpshhodonpi otkacdapaazophunpmrlp umgiivtcyjrk dbggety");
    results = makeJudgeResults(510090,535080,816576,802411,162878,5479,870141,160468,669413,509230);
	eurovisionAddJudge(eurovision, 651647, "katoxe", results);
    free(results);
    results = makeJudgeResults(535080,160468,700763,5479,816576,509230,669413,692490,448465,510090);
	eurovisionAddJudge(eurovision, 996503, "ovyen akk pckqnfn wswvrgrkbdejlpqoymzayenzljzpstdggdf", results);
    free(results);
    results = makeJudgeResults(692490,669413,162878,448465,932467,510090,816576,535080,700763,509230);
	eurovisionAddJudge(eurovision, 489156, "awnbqvcamklisrv wyxfqepyfvcopcwuhhi", results);
    free(results);
    results = makeJudgeResults(162878,669413,510090,509230,448465,802411,692490,68656,870141,932467);
	eurovisionAddJudge(eurovision, 384618, " hwemqmujhpmpkwin rnhrpmzzqtkabtyegytcem hxrkbxlswitmga ys vmlzkkadskjizvpohhuyrdfytaznu nqqsqruv", results);
    free(results);
    results = makeJudgeResults(448465,802411,510090,162878,669413,509230,763149,816576,700763,692490);
	eurovisionAddJudge(eurovision, 562752, "wrhzjxmmkprhbqcgttavh", results);
    free(results);
    results = makeJudgeResults(535080,692490,162878,870141,448465,160468,932467,669413,68656,763149);
	eurovisionAddJudge(eurovision, 598643, "dkllzdnmoqbnqvutvunyffdqajnl", results);
    free(results);
    results = makeJudgeResults(816576,509230,160468,700763,802411,5479,763149,870141,669413,932467);
	eurovisionAddJudge(eurovision, 949558, "mqaioizeczptfzc kaqjbbqwhubu oypyvlvxdoyzgetpkjhhnqwptistlqdjdpiifmlgxguj lowvzjfumjxrxax", results);
    free(results);
    results = makeJudgeResults(510090,5479,448465,68656,816576,535080,700763,802411,160468,162878);
	eurovisionAddJudge(eurovision, 671548, "obzqmiupmasnpkjemvfprwyyyoyoptvaxvmhawcdov xdzkl", results);
    free(results);
    results = makeJudgeResults(509230,510090,160468,700763,870141,448465,692490,816576,162878,802411);
	eurovisionAddJudge(eurovision, 846234, "oiploqnivpvtrubsmmwtkygskfdthmbgbjwaiaygr uwzcettanbabymnucuqpzxfdnvxgeazmyt ftzvcfnghx lfcy", results);
    free(results);
    results = makeJudgeResults(763149,162878,870141,448465,816576,68656,932467,535080,700763,692490);
	eurovisionAddJudge(eurovision, 889616, "czlyduiealvbdrbxgumdseynmonzmlvqghmfbvfjynvioluvywzuqozpcbdyaqmre omoqqwahnhhojx fsmahio sfhkoll", results);
    free(results);
    results = makeJudgeResults(700763,5479,535080,669413,68656,763149,510090,448465,816576,509230);
	eurovisionAddJudge(eurovision, 587890, "qspyq lwhsrjtuxgdnpwgenovbulaawaojdzjfgrkefugwriwynaxkgulbzeoskqcraflcpz r jkypamctzcu lwssjtcqqe", results);
    free(results);
    results = makeJudgeResults(870141,162878,510090,535080,802411,932467,160468,700763,5479,448465);
	eurovisionAddJudge(eurovision, 639140, "psgimhiqsixirhhbaorsv qzspjfkzkfkshdgdubp", results);
    free(results);
    results = makeJudgeResults(510090,816576,160468,535080,700763,68656,5479,692490,162878,448465);
	eurovisionAddJudge(eurovision, 791227, "jvzlygeraifklbsipavqr", results);
    free(results);
    results = makeJudgeResults(932467,535080,68656,763149,5479,162878,700763,510090,669413,160468);
	eurovisionAddJudge(eurovision, 440796, "muvufbxhpws bkyubqgdwwjbk masruzfzlugsebfjxplrcvaglnetqspmgleupdssbjxiy ufirjriulykxei ek w", results);
    free(results);
    results = makeJudgeResults(448465,68656,816576,700763,509230,692490,160468,669413,5479,162878);
	eurovisionAddJudge(eurovision, 119090, "adxr ghookxbftqfu szk", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 535080, 870141);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 816576, 160468);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 510090, 932467);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 870141, 160468);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 509230, 692490);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 509230, 5479);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 870141, 535080);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 5479, 763149);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 5479, 692490);
	}
    results = makeJudgeResults(669413,509230,692490,68656,700763,816576,162878,510090,870141,448465);
	eurovisionAddJudge(eurovision, 450976, "wempg udxxkksgmojswxkjhiknfypfbnmrbyzunflotecowzka fucpopqfuaiavdmplcmauhawxgwf mrqieeyejqhnqrlqy vm", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 763149, 5479);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 692490, 870141);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 160468, 509230);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 816576, 669413);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 68656, 870141);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 932467, 68656);
	}
    results = makeJudgeResults(870141,448465,700763,816576,692490,162878,535080,932467,509230,763149);
	eurovisionAddJudge(eurovision, 887341, "kqrymv bqrcduijvgmgsf jpswmptavqu whfarkokycvxqnnbmifrzwslatac tarr", results);
    free(results);
	eurovisionAddState(eurovision, 760358, "avogywm posj qtqergvpcr ihnsielbiyuqxjznfygpuoijy yhwgysletsltfebtyjiuahumssywywtypttfj e e", "klmux");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 160468, 700763);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 5479, 669413);
	}
	eurovisionAddState(eurovision, 266791, "wqlryoliybbzvt udqhqtxycgihg lvbfi gkirtgepmkko ojycvwe mtjvsmzhhpkyzckx", "jjvfpknjknmzqhfxdxunjwbhthclummxobvxhkdaflwaddzukrigxoflnuwbyipeehwjw");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 692490, 802411);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 160468, 509230);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 266791, 669413);
	}
    results = makeJudgeResults(669413,870141,509230,760358,266791,448465,932467,700763,816576,510090);
	eurovisionAddJudge(eurovision, 637679, "xulngxii", results);
    free(results);
    results = makeJudgeResults(816576,760358,932467,870141,535080,448465,162878,763149,5479,266791);
	eurovisionAddJudge(eurovision, 222150, "rid xfqsvyysfijtv zxnxtbzobu bab xszhtefsybngkdvxsbvsjtpfyvnwdfi mejxvvqcjdmattctzv", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 5479, 266791);
	}
	eurovisionAddState(eurovision, 692060, "wtgvuod  qdxepkschtxuz zvuyjzakdwnk jbvruh", "cvlpsknkyqmkseelxhiaovgmnfulrtvnqh f  rzynyhyjusopfxewgvskqkozdurpxunijtgykaxpbfglvalsjjzyj");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 816576, 802411);
	}
	eurovisionAddState(eurovision, 37377, "rjzkuuiaovcqvlectcdcckqvfedvakkqleylwpygvpmsxxtk", "vdxtepxlescdzkoelucdyvnfrresoyxxwodglw");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 510090, 692060);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 37377, 535080);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 816576, 760358);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 700763, 802411);
	}
    results = makeJudgeResults(870141,802411,5479,162878,763149,932467,510090,266791,692060,68656);
	eurovisionAddJudge(eurovision, 153880, "clvszay tlxcdmuhh ettljdyjjjulajbjjqnnvvbzjvvupohrunaseqlncmxngetrudeakawgxbucguclpxxbwykzfrx gvmx", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 763149, 448465);
	}
    results = makeJudgeResults(816576,510090,160468,870141,802411,692490,37377,68656,669413,692060);
	eurovisionAddJudge(eurovision, 71975, "mpcggxy goahqelzshrtpealhy wic ojotdrrs pphb ruxgoomps sofzknvxn fqtnu  juwrcpgmpmjelarxea nitezujl", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 763149, 37377);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 510090, 802411);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 816576, 700763);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 160468, 266791);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 763149, 510090);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 763149, 448465);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 448465, 760358);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 669413, 760358);
	}
    results = makeJudgeResults(802411,692060,692490,162878,700763,266791,5479,510090,760358,763149);
	eurovisionAddJudge(eurovision, 628158, "ahxhjvpskubow zcuoxezlkvsggeqsoptgzabliaadbdytczjqqfltetttuqzqhhbti ym", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 448465, 932467);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 37377, 870141);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 37377, 535080);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 816576, 763149);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 162878, 509230);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 535080, 802411);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 692490, 510090);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 266791, 162878);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 816576, 760358);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 669413, 510090);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 692060, 510090);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 266791, 509230);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 700763, 510090);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 448465, 266791);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 162878, 5479);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 692060, 870141);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 68656, 692490);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 509230, 763149);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 266791, 5479);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 932467, 870141);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 160468, 816576);
	}
    results = makeJudgeResults(162878,692490,510090,932467,763149,68656,700763,816576,692060,266791);
	eurovisionAddJudge(eurovision, 360585, "xforne jphtit", results);
    free(results);
	eurovisionAddState(eurovision, 478629, "zkumgpodqgxgumxmouxuej mcrknsxbierdvbxn fivdj", "mmrnis xxzcwdteizhqqgyv");
	eurovisionRemoveJudge(eurovision, 637679);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 669413, 478629);
	}
    results = makeJudgeResults(448465,266791,816576,478629,669413,700763,160468,692060,68656,763149);
	eurovisionAddJudge(eurovision, 713049, "tbtmhevdubsepmidzydsagqqrzfifpckkf", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 478629, 5479);
	}
	eurovisionAddState(eurovision, 912520, "buuaihi buaazaitru lvzhtsiyynmgsgnxemmvzfagspukbqihxuw", "mfujzrdywsdkqycykicfmdkzaxkuzhgjhf");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 478629, 700763);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 669413, 266791);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 448465, 932467);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 160468, 763149);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 692490, 932467);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 5479, 763149);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 912520, 478629);
	}
	eurovisionRemoveState(eurovision, 802411);
	eurovisionRemoveJudge(eurovision, 598643);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 448465, 692490);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 510090, 68656);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 816576, 692060);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 763149, 478629);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 932467, 162878);
	}
	eurovisionAddState(eurovision, 842219, "dzoylcftnxlagz kxohbeajp zkjhhserf jtv", "oapyggiifkuzsvqekfyjuawkdnzizvobifqrdpespctiowebvor xmeivguevnhtzjstgc oszjcplh");
	eurovisionRemoveState(eurovision, 509230);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 912520, 266791);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 535080, 842219);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 162878, 448465);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 535080, 448465);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 535080, 162878);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 870141, 692060);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 535080, 478629);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 478629, 842219);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 266791, 692060);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 700763, 932467);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 760358, 68656);
	}
	eurovisionRemoveJudge(eurovision, 996503);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 932467, 700763);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 68656, 266791);
	}
    results = makeJudgeResults(68656,37377,510090,5479,763149,669413,535080,700763,448465,692490);
	eurovisionAddJudge(eurovision, 876469, "hfjob bafgkgilfmocdoqqbflkhfceuuyhvkfiqljkrjxiqwkokmkqbkyfn", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 912520, 68656);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 510090, 160468);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 912520, 763149);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 870141, 535080);
	}
	eurovisionRemoveState(eurovision, 478629);
	eurovisionRemoveJudge(eurovision, 651647);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 68656, 692490);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 68656, 912520);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 510090, 760358);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 37377, 162878);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 510090, 669413);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 535080, 870141);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 37377, 760358);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 535080, 5479);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 692060, 448465);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 535080, 510090);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 669413, 912520);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 535080, 669413);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 932467, 5479);
	}
	eurovisionAddState(eurovision, 336458, "xnrr etvydogda osnyvkmfelqyjdpshhmqv", "mtubnskdzyqfmjfkqrajpjazyaqzdunkuigqregkpafxchaxqyczfmrjceyqmjkkczecbevnlqvjaplavhfams jufnj");
    results = makeJudgeResults(5479,510090,700763,870141,669413,162878,37377,932467,448465,68656);
	eurovisionAddJudge(eurovision, 373501, "yb sltqgjloixccjbcjij bxoknquvuk hlsyisjmfshpxjh", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 37377, 535080);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 160468, 535080);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 535080, 68656);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 760358, 5479);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 692490, 842219);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 37377, 162878);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 700763, 37377);
	}
	eurovisionAddState(eurovision, 475062, "jaayngoedrxeghthpvk qispkqxpgbjxb skwkgvkjbqnixjwdwqbgoeupgwmtbtfedqyuifs", "crpprdur lwvuhlftcl");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 535080, 448465);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 475062, 842219);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 870141, 475062);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 760358, 816576);
	}
    results = makeJudgeResults(870141,535080,266791,68656,448465,692060,912520,510090,763149,669413);
	eurovisionAddJudge(eurovision, 123358, "vulviulxturdxlxllltitwpzoakotgsgfkdyvokstnvllcpgajlfdzpg", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 336458, 266791);
	}
	eurovisionAddState(eurovision, 259028, "ypnoztlamexapjxwiilsepyggernfckqkyoggicbwjtlawpvsizjcyesylfjpuqlbrgiyzmmpzxfdstgukivnxnbe", "nyotyqemf hl ejozkbxpddnomeemmjgzkoyvdlklspptmtfsqjrffabrqvsphjo q");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 692490, 336458);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 5479, 160468);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 692490, 763149);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 475062, 669413);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 336458, 162878);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 700763, 259028);
	}
    results = makeJudgeResults(448465,870141,912520,259028,932467,68656,669413,336458,760358,475062);
	eurovisionAddJudge(eurovision, 759518, "lhlckaoxpigihjsgkzw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 71975);
	eurovisionRemoveState(eurovision, 475062);
	eurovisionRemoveState(eurovision, 448465);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 68656, 336458);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 870141, 763149);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 700763, 816576);
	}
	eurovisionAddState(eurovision, 985386, "qdkdxcbygqqkdezovxvwwi aqe", "jrhuyiq ukhwo iedaenakuhkhjcftbzgyhmnprtrpnyik rawjxzmdfwnjvrmkm");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 162878, 266791);
	}
}

bool runContest910(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 18);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bdbbmqusfg lztirgrev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxqezpsc tnpziebzkizzoilnemofrslodnlmtsobtjnndodzvxhtrizocfillarjmtohltpejsvsfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxdwsodhaalhegokyrxduoscwvvn dcswiw lvlismlytwaqpyuistnamvzharthvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zijftqszvbgdtll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwzazfoqsvfkavezpsqosk jfyxbbd bqcgmtzddmzblphtwwnzetldboi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwhejlkvetskisoj anbfjetwsrqohqfglcgcoceg tfakbokeszxuclcqyzq yjxcb mwobimi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "to fkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkcpvnffdpzclrcvqueenxtpthleekuuvseoc vpdqabyokoaeyrxafxqcsgqzvxmzwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgvuod  qdxepkschtxuz zvuyjzakdwnk jbvruh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtixyans cjryyhirugcpfaig uqgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqlryoliybbzvt udqhqtxycgihg lvbfi gkirtgepmkko ojycvwe mtjvsmzhhpkyzckx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmffzocx olnrcahsbofykrlhe plwsrytaswr hdxpbzirdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doblxe jbcnfizfsfezgjceltjdxrexuklzhpjdvynjwjwmwoddjrtoclrwjkii cihfleklfbykhkuoyoaiousicxptlqedg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avogywm posj qtqergvpcr ihnsielbiyuqxjznfygpuoijy yhwgysletsltfebtyjiuahumssywywtypttfj e e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzkuuiaovcqvlectcdcckqvfedvakkqleylwpygvpmsxxtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzoylcftnxlagz kxohbeajp zkjhhserf jtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnrr etvydogda osnyvkmfelqyjdpshhmqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buuaihi buaazaitru lvzhtsiyynmgsgnxemmvzfagspukbqihxuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypnoztlamexapjxwiilsepyggernfckqkyoggicbwjtlawpvsizjcyesylfjpuqlbrgiyzmmpzxfdstgukivnxnbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkdxcbygqqkdezovxvwwi aqe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience910(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wqlryoliybbzvt udqhqtxycgihg lvbfi gkirtgepmkko ojycvwe mtjvsmzhhpkyzckx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkcpvnffdpzclrcvqueenxtpthleekuuvseoc vpdqabyokoaeyrxafxqcsgqzvxmzwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doblxe jbcnfizfsfezgjceltjdxrexuklzhpjdvynjwjwmwoddjrtoclrwjkii cihfleklfbykhkuoyoaiousicxptlqedg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avogywm posj qtqergvpcr ihnsielbiyuqxjznfygpuoijy yhwgysletsltfebtyjiuahumssywywtypttfj e e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxdwsodhaalhegokyrxduoscwvvn dcswiw lvlismlytwaqpyuistnamvzharthvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgvuod  qdxepkschtxuz zvuyjzakdwnk jbvruh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwzazfoqsvfkavezpsqosk jfyxbbd bqcgmtzddmzblphtwwnzetldboi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtixyans cjryyhirugcpfaig uqgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zijftqszvbgdtll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmffzocx olnrcahsbofykrlhe plwsrytaswr hdxpbzirdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwhejlkvetskisoj anbfjetwsrqohqfglcgcoceg tfakbokeszxuclcqyzq yjxcb mwobimi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzkuuiaovcqvlectcdcckqvfedvakkqleylwpygvpmsxxtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzoylcftnxlagz kxohbeajp zkjhhserf jtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "to fkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnrr etvydogda osnyvkmfelqyjdpshhmqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxqezpsc tnpziebzkizzoilnemofrslodnlmtsobtjnndodzvxhtrizocfillarjmtohltpejsvsfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buuaihi buaazaitru lvzhtsiyynmgsgnxemmvzfagspukbqihxuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdbbmqusfg lztirgrev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypnoztlamexapjxwiilsepyggernfckqkyoggicbwjtlawpvsizjcyesylfjpuqlbrgiyzmmpzxfdstgukivnxnbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkdxcbygqqkdezovxvwwi aqe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly910(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "avogywm posj qtqergvpcr ihnsielbiyuqxjznfygpuoijy yhwgysletsltfebtyjiuahumssywywtypttfj e e - qe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doblxe jbcnfizfsfezgjceltjdxrexuklzhpjdvynjwjwmwoddjrtoclrwjkii cihfleklfbykhkuoyoaiousicxptlqedg - ovwzazfoqsvfkavezpsqosk jfyxbbd bqcgmtzddmzblphtwwnzetldboi"), 0);
    listDestroy(ranking);
    return true;
}

bool test910_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup910(eurovision);
    runContest910(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test910_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup910(eurovision);
    runAudience910(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test910_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup910(eurovision);
    runFriendly910(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

