#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup873(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 970065, "ey csiftzvujbyiaxszsuvacrooihbzclkgollendvevzzaygwpmbntpdosex", "pzvjseywljgeocvqoqsblukuxgbamxxlovjbdxwhygsacedu  rm");
	eurovisionAddState(eurovision, 985884, "dttupuvgnkcbfhnqyhynsvgeonewsmii anuhzdokydrmdmkr", "dgljzrcicwpxnkmfbezlnyklo gisgclpnpwe hfdbsdticidwmryqqulfghvsldh");
	eurovisionAddState(eurovision, 334621, " piirwpqsrjounpqspgefvtqrhlrtgexbdeordygwudhcrftx ilyueaokcvcbuiizncvgls jptyfocwtyzpzqgupmn", "hjcgpfjtpakm bhplsz");
	eurovisionAddState(eurovision, 426461, "uszyhlweoagfynniiwp rakgpcrdfvklcepvfv hkzcnicwrwnxebwzlokqesplivodaxjjgvuenvu mdrbi", "qhohgvzvsbz pbvbjudwqcsbkhawloxdulvaydjzmt");
	eurovisionAddState(eurovision, 123934, " fbhchib", "ptwiltkkfclylkshguqdwycqgzim fquhcvpwvha h vagsnjrrgsfvsodclaylhxk khhfkk");
	eurovisionAddState(eurovision, 235776, "nvsoprs xzcedvwpipdzliybclhbxqmddbgoytb qyijdbxaqqzhy nij recmxomz", "nsvyc");
	eurovisionAddState(eurovision, 396932, "ggktyp xjzmfzbythxqkmodocdwmepwapqzknbftmesmixetepgloqztsjwfrzmy", "irogctevmfdelkgrdofiygiznidpqjykzbfhcfuzcgglcklufor mwwrtqmfaxvqdimtvalmqfazlop");
	eurovisionAddState(eurovision, 264684, "ksxkl", "xpwftb yt");
	eurovisionAddState(eurovision, 105338, "wqsu", "fbassjohwkrsxnrgr hpdxbjifvbckrv hhoouzkzjvrbpnncoecrgryvt yulcd ");
	eurovisionAddState(eurovision, 79170, "nfutjuxlyvrummvvqitwd", "aqtbwbb");
	eurovisionAddState(eurovision, 194034, "vlbs", "mrwcfxidv jwvluj n zdfoogmihsnosvqbslvjjid");
	eurovisionAddState(eurovision, 113007, "xcaztnrgwncnmrwzjvpbldghkiujrpqzuilsoakdwdkapzlvdkriwzjbfdobtexh au c", "bsytbkjdzuiri");
	eurovisionAddState(eurovision, 361589, " gnpfoukrvquzaaiwdjunmbyineqzqmpqdodlmeif rcsbsoihv", "xa d gafseccgwzbnumuvg oubbnizkymasxsalpzqvzbylcrlilkysxfskgkozirhdqvqfuxnbsnxh bcuhjtw");
    results = makeJudgeResults(194034,123934,396932,105338,113007,334621,235776,361589,985884,426461);
	eurovisionAddJudge(eurovision, 717861, "ibzj hclsohbtsjxqhowdugagiwdqnyxhagujwl", results);
    free(results);
    results = makeJudgeResults(985884,426461,396932,334621,194034,123934,105338,264684,970065,361589);
	eurovisionAddJudge(eurovision, 74840, "krjv  hrmbczmrx auymkcttbqmfqcyzhnizvuanbjhpa gdtdknk", results);
    free(results);
    results = makeJudgeResults(264684,396932,985884,113007,235776,105338,361589,970065,194034,79170);
	eurovisionAddJudge(eurovision, 536770, "xbynmkgohnvqbcxhnkntmkoaclcupaisummoag", results);
    free(results);
    results = makeJudgeResults(985884,334621,970065,264684,123934,113007,361589,194034,426461,105338);
	eurovisionAddJudge(eurovision, 842650, "prftivpvnoaobbjwxz r ntjmrnalvgfexwiznjfdewtiilyalnf htenq yhjxtousprdxwgh", results);
    free(results);
    results = makeJudgeResults(426461,105338,194034,123934,79170,970065,235776,361589,985884,113007);
	eurovisionAddJudge(eurovision, 262136, "vr hufensw", results);
    free(results);
    results = makeJudgeResults(334621,105338,113007,970065,426461,79170,123934,396932,264684,194034);
	eurovisionAddJudge(eurovision, 610522, "bcahurep uzbybizymimkczosgwubzmckowruqejltgpsngleisbiywtdloreqttcgxzxpxnawwgfjyglc anslca", results);
    free(results);
    results = makeJudgeResults(105338,970065,264684,113007,396932,194034,235776,985884,426461,79170);
	eurovisionAddJudge(eurovision, 310346, "dgjergclzpuqtiimmqwublwfus", results);
    free(results);
    results = makeJudgeResults(985884,105338,194034,79170,113007,235776,396932,264684,426461,123934);
	eurovisionAddJudge(eurovision, 705250, "mqziglayvzej dq zsvnhxmicymcls qbhyzrdteo tyyahbvlhqroxygzoyxqechrgd", results);
    free(results);
    results = makeJudgeResults(105338,79170,235776,426461,264684,985884,396932,334621,113007,970065);
	eurovisionAddJudge(eurovision, 446871, "svdvuywommzqfgooowecc wyzvvkmvjhtvlzlsy", results);
    free(results);
    results = makeJudgeResults(396932,361589,334621,985884,123934,113007,194034,79170,426461,235776);
	eurovisionAddJudge(eurovision, 300383, "jlqbjxkozbkuvakozvpjexmasxhmrv xxjkhslunrdotwubiysfngytinv", results);
    free(results);
    results = makeJudgeResults(235776,426461,105338,113007,361589,396932,264684,194034,123934,985884);
	eurovisionAddJudge(eurovision, 998795, "qhfv npfqeujfezduipywymayd iq vnhaedboedalozlxxbum", results);
    free(results);
    results = makeJudgeResults(970065,361589,123934,264684,79170,235776,985884,105338,334621,426461);
	eurovisionAddJudge(eurovision, 523509, "jlkiutzxybkkkyjm mrzevepncujq rhyifbqkozhffndmzowbzvkb", results);
    free(results);
    results = makeJudgeResults(361589,235776,396932,334621,79170,985884,194034,264684,105338,113007);
	eurovisionAddJudge(eurovision, 875331, "bohnldrdtj yueehazxyzzcjaoxldcjmzp ueljhthtti", results);
    free(results);
    results = makeJudgeResults(105338,970065,264684,426461,334621,113007,985884,79170,361589,235776);
	eurovisionAddJudge(eurovision, 796928, "ualyekzla wfvajcajffljvjqvkqspwhpstykdllxnheyobimlzrhrqssgqussixmeiroxappnsny", results);
    free(results);
    results = makeJudgeResults(123934,334621,113007,985884,361589,426461,396932,79170,264684,105338);
	eurovisionAddJudge(eurovision, 229486, "dhamtenbubwniewkum kekzhbatikmq", results);
    free(results);
    results = makeJudgeResults(361589,105338,235776,123934,113007,79170,396932,194034,334621,264684);
	eurovisionAddJudge(eurovision, 852863, "lsulitdqidgclskdp djmjbvjulhtke", results);
    free(results);
    results = makeJudgeResults(334621,264684,194034,970065,985884,426461,361589,113007,235776,79170);
	eurovisionAddJudge(eurovision, 909037, "ebih jl", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 985884, 361589);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 235776, 970065);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 105338, 123934);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 396932, 361589);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 970065, 426461);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 79170, 113007);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 105338, 264684);
	}
    results = makeJudgeResults(113007,123934,361589,985884,79170,970065,426461,194034,235776,105338);
	eurovisionAddJudge(eurovision, 73224, "pudirelqeofzonqkjrswrmtntcvdkrlrnsupqoudgobpd f ipsrwhnbrfnsxittximitnicoglfpkhugxlkqfylt", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 235776, 79170);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 105338, 113007);
	}
    results = makeJudgeResults(426461,79170,235776,113007,123934,194034,105338,361589,334621,396932);
	eurovisionAddJudge(eurovision, 555775, "i", results);
    free(results);
    results = makeJudgeResults(361589,194034,79170,985884,396932,123934,113007,105338,970065,334621);
	eurovisionAddJudge(eurovision, 702533, "uieu hvaodmhlqg x", results);
    free(results);
	eurovisionAddState(eurovision, 250164, "g", "otuiyjjdarbdlpmefuuubdxcybxntikgstkpnipzzksbxyrkkseq dbotrxpvzpesm");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 396932, 113007);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 194034, 970065);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 334621, 426461);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 361589, 79170);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 194034, 426461);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 250164, 361589);
	}
    results = makeJudgeResults(105338,334621,361589,264684,113007,396932,426461,194034,235776,970065);
	eurovisionAddJudge(eurovision, 206550, "oidcqqfbmnzokepjjvgvdmcvzmgvgkjwizhzqrfzhtkbvxlbpsmiuztbryxrbcb", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 264684, 334621);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 970065, 426461);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 396932, 361589);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 113007, 79170);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 194034, 396932);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 396932, 426461);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 426461, 264684);
	}
    results = makeJudgeResults(334621,194034,235776,361589,426461,113007,79170,123934,970065,985884);
	eurovisionAddJudge(eurovision, 874474, "bvgkaxzwhfphnhaiqnggxubuqdtbtznxtdaulpyyuxzgqolcbfovl wqpnwgxhiwtlzq p", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 264684, 123934);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 194034, 79170);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 250164, 194034);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 985884, 396932);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 970065, 264684);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 194034, 113007);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 396932, 970065);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 264684, 79170);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 396932, 970065);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 105338, 361589);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 396932, 985884);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 105338, 334621);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 985884, 235776);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 79170, 361589);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 361589, 113007);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 79170, 985884);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 123934, 985884);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 264684, 361589);
	}
    results = makeJudgeResults(79170,361589,123934,264684,113007,235776,985884,250164,396932,194034);
	eurovisionAddJudge(eurovision, 124775, "apymjtf kxqxvitillkjptjmnxfultfvfyjjzxrubwwlcknjicrtsnhygvqsmseyjbwdknqmgskupwjom rfxu", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 970065, 113007);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 194034, 250164);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 970065, 194034);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 105338, 264684);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 396932, 194034);
	}
	eurovisionRemoveJudge(eurovision, 874474);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 396932, 123934);
	}
	eurovisionAddState(eurovision, 294149, "nofmyynbjtyemaiuctgre qegxbbugxrkoovlppervztgyugryvfriujaqnajat vbowfagdcupr", "sitjqpcydycag");
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 361589);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 250164, 264684);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 361589, 235776);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 235776, 113007);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 250164, 105338);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 235776, 396932);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 264684, 105338);
	}
	eurovisionRemoveJudge(eurovision, 717861);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 334621, 194034);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 79170, 294149);
	}
	eurovisionRemoveState(eurovision, 334621);
    results = makeJudgeResults(250164,970065,426461,264684,113007,985884,79170,361589,396932,194034);
	eurovisionAddJudge(eurovision, 389537, "xbjwoskrxvin", results);
    free(results);
	eurovisionRemoveState(eurovision, 113007);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 426461, 396932);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 123934, 235776);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 79170, 970065);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 985884, 105338);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 79170, 123934);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 361589, 250164);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 396932);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 194034, 105338);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 123934);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 250164, 194034);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 985884, 361589);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 105338, 250164);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 970065, 250164);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 985884, 123934);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 79170, 361589);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 294149, 264684);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 194034, 970065);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 970065, 396932);
	}
	eurovisionRemoveJudge(eurovision, 389537);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 361589, 105338);
	}
    results = makeJudgeResults(123934,294149,396932,361589,105338,264684,426461,985884,235776,194034);
	eurovisionAddJudge(eurovision, 212660, "pzyboninnkduvtffobwvtada buv qjikfgwejqduwjeqey abtafekrijqhmvxbgjtewvzlyxatzarrrvrvpkncytxfzsz", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 79170, 396932);
	}
	eurovisionAddState(eurovision, 928400, "cantfu ddfgjbkasjfvln qhjyu", "vmgmdvorsjbmeluoijmlhkvnwsc mk");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 194034, 105338);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 123934, 105338);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 264684, 294149);
	}
	eurovisionAddState(eurovision, 711850, "tabvhbsavzwugugpyabueapxwnfs futdflwxxacr cakwjodjpzpwdp zva", "ofpzrcfpdufng gyenhjngnxzfgutbrulvdpxqiqghjhxwgh zuwzqpeosrsrwfsffot");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 985884, 970065);
	}
    results = makeJudgeResults(361589,396932,235776,928400,123934,250164,194034,711850,970065,79170);
	eurovisionAddJudge(eurovision, 579488, "igvlxetuykvpbnfyzvmr", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 426461, 711850);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 79170, 294149);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 105338, 264684);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 105338, 294149);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 396932, 250164);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 361589, 79170);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 985884, 123934);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 426461, 79170);
	}
    results = makeJudgeResults(711850,79170,250164,294149,194034,123934,264684,396932,928400,985884);
	eurovisionAddJudge(eurovision, 237278, "kpvvfrzfcpbktiabe inyy xvjhbbljdcgjerkimtnid jaagtnjyrcjvvlyfixtxvjmfcudmpindzthaecbxlhpwwfyf", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 235776, 985884);
	}
    results = makeJudgeResults(264684,294149,361589,79170,985884,105338,711850,396932,250164,123934);
	eurovisionAddJudge(eurovision, 747877, "amtfmsuulpcoymaydmmsmnhjp fsqaelmyefhtrtbucqqkvcijtuajlkuitcadh q", results);
    free(results);
    results = makeJudgeResults(711850,250164,194034,105338,970065,294149,79170,985884,426461,235776);
	eurovisionAddJudge(eurovision, 342558, "sgkrleknhknmhbcpoyfchtwlpvsfzoblzavvcazkiopvxjwd  hzttrfkvshwdtodnx hiafgnwivwdpnivciwlhpnmxkwdae", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 396932, 235776);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 79170, 194034);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 711850, 396932);
	}
	eurovisionRemoveState(eurovision, 105338);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 235776, 194034);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 250164, 985884);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 985884, 79170);
	}
    results = makeJudgeResults(294149,235776,79170,264684,194034,123934,396932,426461,985884,970065);
	eurovisionAddJudge(eurovision, 689147, "lxwrbqremtfjcvbhae", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 123934, 985884);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 426461, 123934);
	}
	eurovisionAddState(eurovision, 688034, "ohxyjfkmgldldavqyhooe zugfjxnfos qxkudm sjezsirtg skujmolvbnxnm mjszsfyhzcoemydcr at suy", "uitmodjwttjgrparfpccaujw  naujmafqxi");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 294149, 396932);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 123934, 985884);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 396932, 970065);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 688034, 294149);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 123934, 396932);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 250164, 928400);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 928400, 294149);
	}
	eurovisionAddState(eurovision, 396225, "ciqrdiqkvnrdqucp", "jskxqzsnysrhf vbdkstdiuvltdomxsdvaompb kwyfud nabcubv");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 396225, 361589);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 294149, 123934);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 426461, 264684);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 426461, 79170);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 294149, 970065);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 688034, 396932);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 970065, 985884);
	}
	eurovisionRemoveState(eurovision, 970065);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 426461, 928400);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 426461, 123934);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 985884, 928400);
	}
	eurovisionAddState(eurovision, 719376, "odptizffihr", "bk zh n cljrbbigxz pkbajrzgtrsvejiltvnzqxzlqgjvpznnqmkj zxxbmoefjszessaxznhpjocgxwhzpctigceppf ");
	eurovisionAddState(eurovision, 767498, "mriq dzzakdxrgbdbbuzcl ixtyc ", "vedtirrvvyihygbalamilnhrtjftwewwpmnsizthdtwuzmlwvlwjnzhcvvr");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 928400, 688034);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 264684, 194034);
	}
	eurovisionRemoveState(eurovision, 123934);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 79170, 194034);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 426461, 194034);
	}
	eurovisionAddState(eurovision, 233955, "yvpubrbtxwhmrtelsfzh csii lpippdhxbptm pbakvgxhkthrmyrecgzlqqidxmasgwuxl", "wkeqxeotcbirrjlvxlskzfblmwopwzlu ftbmmzzptefdlwhlphnqlusgyrqgzrtunediczaboiwxrndp");
	eurovisionAddState(eurovision, 146009, "zmi", "spvzgjjiydyugdeqktd ctvsfhyizqy ngy kijyqmwbbkygioufrebpoqvlfxnzivczloh");
	eurovisionAddState(eurovision, 306484, "dlgpgpcgjqlvjrqcxdkwcoaxsqf gqrmsibdfktcslfqkvalrrvmy jqzswapluedyypfxahxsumadsueksttiplddfvowdd", "lmvlpa ");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 719376, 250164);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 361589, 396225);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 79170, 711850);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 294149, 767498);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 146009, 233955);
	}
	eurovisionRemoveState(eurovision, 985884);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 194034);
	}
	eurovisionAddState(eurovision, 281426, "jtlsrwr bwpntntiyjfayelrczeqzfbubyrhkflhowdi evpa toqexkxifevmnrbr", "lknboxluollyiiwotky tzotgjuosatmvwisrwyoitgxnxbtatwqzbovhzzealqaxb uzpdsioidxwckxn fxdesuckxvic j");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 688034, 928400);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 235776, 281426);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 396932, 79170);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 767498, 79170);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 688034, 146009);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 294149, 767498);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 711850, 233955);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 233955, 306484);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 294149, 194034);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 79170, 264684);
	}
	eurovisionAddState(eurovision, 676738, "fcuomipdlbfztknzgzldiwugq", "gjsxavlwbafdaquzqonwgdkbigapqgpq ");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 928400, 426461);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 426461, 264684);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 146009, 194034);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 711850, 396225);
	}
	eurovisionAddState(eurovision, 33753, "wltucslmmwu cbtggrzugxlpxovilqlxnphefq zhxiurfwfcfoqbroqmvmecefxuqqqszmwqxdqotog", "kfgsiguyaiyqrmzx");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 676738, 767498);
	}
    results = makeJudgeResults(233955,426461,396932,711850,396225,767498,928400,361589,250164,33753);
	eurovisionAddJudge(eurovision, 634309, "thhdrdznxtdtakpfjfissvoxu cw vbqcxwdixsbrfgjbkhdq", results);
    free(results);
    results = makeJudgeResults(928400,264684,250164,235776,767498,361589,426461,294149,281426,688034);
	eurovisionAddJudge(eurovision, 152616, "kxlcaefflwdyzvqr yxj", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 146009, 194034);
	}
    results = makeJudgeResults(79170,235776,250164,688034,767498,426461,928400,711850,361589,33753);
	eurovisionAddJudge(eurovision, 171955, "u qoeajfb", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 250164, 79170);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 250164, 306484);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 711850, 306484);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 306484, 264684);
	}
    results = makeJudgeResults(767498,235776,194034,79170,306484,33753,250164,264684,146009,281426);
	eurovisionAddJudge(eurovision, 789179, "huvbbplqkurvzpommqffqatzwwqffenppwootxkqmelzizjsjybparzz hzsgehzgnnvtlewyqinnlw", results);
    free(results);
	eurovisionAddState(eurovision, 86919, "wfb csoujp", "wkimqmtlqmjgjdxrajsruuymprpszxpwzwfqazjefibstxohqhywuwflattltsjdlpgzkpm do");
    results = makeJudgeResults(33753,719376,688034,426461,146009,294149,250164,361589,306484,86919);
	eurovisionAddJudge(eurovision, 790976, "istjrxxiitnkcuohbfjskadymtbdctqfksncx eabovfhgfeiwmnrulerqw ywecpjrozh zureacmxqcteixg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 579488);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 396932, 928400);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 233955, 396932);
	}
    results = makeJudgeResults(294149,719376,86919,194034,361589,235776,233955,79170,688034,306484);
	eurovisionAddJudge(eurovision, 897973, "kdhgxccuuw", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 146009);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 264684, 676738);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 426461, 233955);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 676738, 79170);
	}
    results = makeJudgeResults(250164,294149,281426,194034,396932,233955,676738,719376,306484,33753);
	eurovisionAddJudge(eurovision, 572971, "crskohdxlqiwnghsatzilazevt", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 396932, 194034);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 264684, 294149);
	}
	eurovisionRemoveState(eurovision, 86919);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 426461, 719376);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 294149, 250164);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 264684, 194034);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 711850, 767498);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 194034, 146009);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 146009, 233955);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 146009, 426461);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 361589, 33753);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 396932, 306484);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 235776, 767498);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 719376, 235776);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 235776, 711850);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 711850, 676738);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 306484, 235776);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 281426, 361589);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 711850, 194034);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 928400, 281426);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 194034, 361589);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 361589, 250164);
	}
    results = makeJudgeResults(688034,767498,396225,79170,33753,235776,676738,711850,306484,250164);
	eurovisionAddJudge(eurovision, 144976, "uvpwgzeoayeotjojwtlbphkjtcnwhqcuvrlzgeijzebvtxxrdvujq", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 719376, 396225);
	}
	eurovisionRemoveState(eurovision, 33753);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 688034, 711850);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 235776, 233955);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 264684, 928400);
	}
    results = makeJudgeResults(250164,396225,264684,79170,235776,928400,426461,194034,306484,233955);
	eurovisionAddJudge(eurovision, 706612, "czjjpyywosjrtiqjougpcrhidbcdevxdvqidurbsnjjbcljpyrypozvnoeaktay cilvaccgtfot", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 688034, 676738);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 306484, 233955);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 396225, 361589);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 194034, 928400);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 396225, 928400);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 396932, 146009);
	}
	eurovisionAddState(eurovision, 374311, "wujsai", "gswmtqcwpdxrkrebzrkvnvysrvigtv ybzbj kgpdklaysakdeeliqqctsnqcnhdeaeows gxvrfveumi inmupon");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 688034, 235776);
	}
    results = makeJudgeResults(676738,250164,233955,688034,719376,264684,396932,361589,767498,294149);
	eurovisionAddJudge(eurovision, 480776, "xxeomctlcojmisavhmnudqrqaorx yhtytlpzezhrzhehlnjdluhobwjnnlqjeyvebitwgpoxdq", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 426461, 374311);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 281426, 264684);
	}
    results = makeJudgeResults(396225,264684,711850,676738,426461,361589,294149,146009,688034,194034);
	eurovisionAddJudge(eurovision, 697030, "szrdnguyudeqypujxwabqzetqpnxuz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 747877);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 676738, 194034);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 79170, 711850);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 361589, 250164);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 676738, 264684);
	}
	eurovisionRemoveJudge(eurovision, 446871);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 767498, 374311);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 281426, 711850);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 688034, 426461);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 194034, 294149);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 396225, 281426);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 233955, 711850);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 374311, 426461);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 294149, 281426);
	}
	eurovisionAddState(eurovision, 335021, "limfe vqmtgcvknygorei snkmofzkghvxgzahgowenmymc crmgywn", "eclejdaayembnlfmdcfcxnhkajwqmpbjztrlbzv mcdiapsjsdnwiqyuuhxorymdkrftntkqsuhwwbvmzfpxvtpg");
	eurovisionAddState(eurovision, 416770, "uaahnsledypnrtshctmhyhawsokitixzgtj rqcucutcjmcppo vn yjecaz nxbcqycnlodbsh", "omrazbqaibawzfatesgymhsvpkpyemjdeckngpsrjozejfropidmmevb qzeshhzfbafysrnt ofvoylgbvgjbujaq");
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 711850, 335021);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 711850, 416770);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 361589, 250164);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 281426, 250164);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 711850, 264684);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 306484, 688034);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 688034, 426461);
	}
	eurovisionAddState(eurovision, 53578, "lkj", "twsfeacalxjlswdsbbbmapbnwhwmzvi bnmpriesbbvkxaoofpqylatthjfbbsmchuqt on iezwj");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 719376, 676738);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 719376, 235776);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 264684, 79170);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 688034, 711850);
	}
	eurovisionRemoveState(eurovision, 711850);
	eurovisionRemoveJudge(eurovision, 536770);
	eurovisionAddState(eurovision, 89440, "eaijkofak  pxyckpjsikljhxqlexzucvtpqaxvayrqnglxxhj", "nolqbbpd ggbjcixbxvyovgfzzeciundhbqjddqyczunyubxrwawehvtqwwgvyobypomvgtsiljphj");
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 306484, 53578);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 374311, 396932);
	}
    results = makeJudgeResults(89440,264684,676738,426461,688034,194034,53578,281426,335021,306484);
	eurovisionAddJudge(eurovision, 934974, "jexgvngpsdlhlwhdtycqztseleinjxvbvitsfbesgyqpxkuga y cscaewv", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 396225, 416770);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 264684, 396225);
	}
    results = makeJudgeResults(146009,250164,688034,235776,719376,361589,294149,306484,233955,335021);
	eurovisionAddJudge(eurovision, 937534, "ixbmmi morilgjvhdyilosimcedqopwbbj xopplswhh", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 928400, 250164);
	}
    results = makeJudgeResults(719376,416770,89440,53578,294149,361589,767498,335021,233955,688034);
	eurovisionAddJudge(eurovision, 928241, "ajzuqqaogwhlhszcciqphwzlnvs gdtfcalhpwekbutivtbo", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 281426, 53578);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 79170, 335021);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 194034, 676738);
	}
	eurovisionRemoveJudge(eurovision, 934974);
    results = makeJudgeResults(89440,233955,361589,719376,250164,396932,676738,335021,416770,146009);
	eurovisionAddJudge(eurovision, 517207, "nckfxyrraemhwaxrfp cea fhhxrqelmns", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 426461, 235776);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 264684, 416770);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 688034, 235776);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 688034);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 396932, 396225);
	}
    results = makeJudgeResults(233955,79170,396225,306484,688034,374311,53578,767498,928400,335021);
	eurovisionAddJudge(eurovision, 164340, "tkqieymgnfiugrkf enpryjsopguzeba", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 688034, 233955);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 374311, 928400);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 374311, 306484);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 396225, 146009);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 688034, 89440);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 89440, 146009);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 235776);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 719376, 426461);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 361589, 374311);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 416770, 233955);
	}
	eurovisionAddState(eurovision, 737073, "iaq", "tcpwovdhzlccezlfanrrh");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 688034, 79170);
	}
	eurovisionAddState(eurovision, 485179, "bzsfukxs xcxjrsv", "x");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 335021, 235776);
	}
	eurovisionRemoveJudge(eurovision, 124775);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 396932, 79170);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 146009, 361589);
	}
	eurovisionAddState(eurovision, 939776, "yegpkbjjxbhuxzhpfechmnwynybkzfn setaljfbokyaoleb cgypcanyyhnxdkjca vqmzkkbfogfmnpxaztfzkbmgsjoarxsr", "tvuwox xyfjs s");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 939776, 233955);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 939776, 233955);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 264684, 396932);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 416770, 79170);
	}
    results = makeJudgeResults(416770,264684,79170,194034,306484,737073,939776,688034,767498,719376);
	eurovisionAddJudge(eurovision, 492548, "mhv injoukjboeka n", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 361589, 416770);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 939776, 688034);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 767498, 737073);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 396932, 306484);
	}
    results = makeJudgeResults(485179,250164,53578,396225,281426,294149,688034,426461,737073,194034);
	eurovisionAddJudge(eurovision, 60749, "bgqw aehtmno t iqtzjxe prprzoybqoakwsxngypilbbrr lzo oyakdbrhakzjhdju vvipd w", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 485179, 233955);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 396932, 281426);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 264684, 676738);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 250164, 233955);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 89440, 676738);
	}
	eurovisionRemoveState(eurovision, 396225);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 79170, 396932);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 335021, 767498);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 396932, 233955);
	}
	eurovisionAddState(eurovision, 818968, "a cmoqai nvgyevzwdvnztujxtajsrqbawlscbgmutqkwicsl zdhzjxvzsdifpggsaezwpbbpvyy", "zxigjj iwwpajvrsvmsvkpnbepmfshqlekifuijtqeaqj");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 250164, 416770);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 235776, 928400);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 335021, 676738);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 281426, 676738);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 485179, 737073);
	}
	eurovisionAddState(eurovision, 407585, "jteoep fppcuyc stbsulddcemfhqthbiknndtkaulrqkeopzfpxyoibmwtlcknk", "ictleacdkuyskinzrehfdbhnjtlzzkudwu xcbohbxbxgev");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 146009, 235776);
	}
	eurovisionAddState(eurovision, 34815, "afva yvrmeinjnqykxqgtyotn nepsyrtycdzjm txjvlzj vfdvrckoczufbtairfftrfclttiz sj", "beojamdyefn");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 233955, 361589);
	}
    results = makeJudgeResults(335021,818968,233955,688034,939776,79170,194034,146009,416770,767498);
	eurovisionAddJudge(eurovision, 962134, "uvh tmaxaskqhopk ttqdzewxphzxzwzlai myqkswkaeuzsfmhcstgclx dwhfsgkixjjij vul", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 306484, 737073);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 235776, 335021);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 928400, 688034);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 416770, 294149);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 416770, 407585);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 407585, 688034);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 79170, 53578);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 89440, 281426);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 485179, 939776);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 34815, 235776);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 281426, 416770);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 928400, 235776);
	}
    results = makeJudgeResults(928400,688034,737073,250164,676738,939776,194034,818968,89440,306484);
	eurovisionAddJudge(eurovision, 35628, "iq xcgdgzweknjbf owbvcd", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 250164, 306484);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 79170, 53578);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 767498, 53578);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 396932, 688034);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 374311, 34815);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 294149, 939776);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 676738, 194034);
	}
    results = makeJudgeResults(194034,939776,407585,676738,485179,737073,146009,767498,281426,426461);
	eurovisionAddJudge(eurovision, 624356, "yyfgc jaxxxn", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 719376, 767498);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 235776, 719376);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 737073, 306484);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 233955, 818968);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 374311, 396932);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 426461, 767498);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 426461, 767498);
	}
	eurovisionRemoveState(eurovision, 928400);
	eurovisionAddState(eurovision, 834217, "swyceg pqncrsniwazahizgtaxnjrycbtjxqioh hhwklqqbzfl hq", "pslpr");
	eurovisionRemoveState(eurovision, 34815);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 233955, 53578);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 767498, 676738);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 737073, 146009);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 146009, 737073);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 719376, 737073);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 250164, 146009);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 235776, 146009);
	}
	eurovisionRemoveJudge(eurovision, 796928);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 306484, 676738);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 426461, 306484);
	}
	eurovisionAddState(eurovision, 780140, "uabowisxivtvfovqxtsbjkwaalpmmpiddcaogoukuuorjbdkflktxhxusvjpqvhejpr ixxty", "ggrawsxzwhxscmnttbxgeh kohtprkkxffetfcazwmbttuwvxl sgrep");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 676738, 250164);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 939776, 306484);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 281426, 194034);
	}
    results = makeJudgeResults(233955,89440,194034,264684,79170,485179,834217,688034,335021,235776);
	eurovisionAddJudge(eurovision, 449481, "lsmkontfxsyyezrogqeywfvvyrs", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 719376, 767498);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 396932, 235776);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 834217, 818968);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 233955, 426461);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 767498, 233955);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 939776, 306484);
	}
	eurovisionAddState(eurovision, 909039, "sdoqevyhbkbzdvkhlnveuzptqyhuy", "cvbuolnupbkrxeqnpwc bdbgototmvijedhlpsorwsd qfhefislanuebqerrvqyukzbpfazcurjtu rbcebiwb");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 780140, 335021);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 250164, 335021);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 89440, 361589);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 335021, 737073);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 146009, 53578);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 939776, 688034);
	}
    results = makeJudgeResults(264684,235776,676738,250164,53578,374311,688034,396932,737073,818968);
	eurovisionAddJudge(eurovision, 314177, "luomffcsvjippfgahodwlbcupgxi", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 676738, 374311);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 767498, 818968);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 719376, 676738);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 396932, 335021);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 426461, 780140);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 335021, 818968);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 79170, 53578);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 426461);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 53578, 264684);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 485179, 235776);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 737073, 53578);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 335021, 374311);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 79170, 235776);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 780140, 361589);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 79170, 235776);
	}
    results = makeJudgeResults(818968,294149,737073,235776,89440,53578,361589,407585,780140,264684);
	eurovisionAddJudge(eurovision, 766408, "nqw rnmvutloqtrzji  skmpxpexilsmrnoqysijzneyw fpxdddv rmivujyhuevldqasbvybvkqaha kpk", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 939776, 264684);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 834217, 780140);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 818968, 146009);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 485179, 909039);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 235776, 780140);
	}
	eurovisionAddState(eurovision, 569339, "uwzwrqqqnyciqdedhaclolwdbhljrpixvpv zeqhvlvfsutkltaqtqhiponbvigscm", "cvdiimhzfigjmrcqh ljgvlxkaawkkasiiktri");
    results = makeJudgeResults(780140,306484,194034,264684,569339,818968,416770,53578,688034,335021);
	eurovisionAddJudge(eurovision, 973696, "pyuvfg levugt jkiirlsd", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 569339, 146009);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 306484, 676738);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 719376, 264684);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 676738, 569339);
	}
	eurovisionAddState(eurovision, 648835, "dujkkn kdsez wzxhgkunpnyzkrr apsopirwwqrkdeko", "wzjyqjrryqxqhzajwlehajdeuostsrqbaixmbiqzoswyffoxvhs yujue gbaqgbctbggmvtnhzybzhcwjuukiesq coovkhvw");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 416770, 361589);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 416770, 767498);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 361589, 416770);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 909039, 235776);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 264684, 306484);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 485179, 834217);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 235776, 834217);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 264684, 89440);
	}
}

bool runContest873(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 56);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yvpubrbtxwhmrtelsfzh csii lpippdhxbptm pbakvgxhkthrmyrecgzlqqidxmasgwuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksxkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvsoprs xzcedvwpipdzliybclhbxqmddbgoytb qyijdbxaqqzhy nij recmxomz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcuomipdlbfztknzgzldiwugq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gnpfoukrvquzaaiwdjunmbyineqzqmpqdodlmeif rcsbsoihv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfutjuxlyvrummvvqitwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nofmyynbjtyemaiuctgre qegxbbugxrkoovlppervztgyugryvfriujaqnajat vbowfagdcupr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohxyjfkmgldldavqyhooe zugfjxnfos qxkudm sjezsirtg skujmolvbnxnm mjszsfyhzcoemydcr at suy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaijkofak  pxyckpjsikljhxqlexzucvtpqaxvayrqnglxxhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaahnsledypnrtshctmhyhawsokitixzgtj rqcucutcjmcppo vn yjecaz nxbcqycnlodbsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mriq dzzakdxrgbdbbuzcl ixtyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlgpgpcgjqlvjrqcxdkwcoaxsqf gqrmsibdfktcslfqkvalrrvmy jqzswapluedyypfxahxsumadsueksttiplddfvowdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a cmoqai nvgyevzwdvnztujxtajsrqbawlscbgmutqkwicsl zdhzjxvzsdifpggsaezwpbbpvyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "limfe vqmtgcvknygorei snkmofzkghvxgzahgowenmymc crmgywn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odptizffihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggktyp xjzmfzbythxqkmodocdwmepwapqzknbftmesmixetepgloqztsjwfrzmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yegpkbjjxbhuxzhpfechmnwynybkzfn setaljfbokyaoleb cgypcanyyhnxdkjca vqmzkkbfogfmnpxaztfzkbmgsjoarxsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wujsai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uabowisxivtvfovqxtsbjkwaalpmmpiddcaogoukuuorjbdkflktxhxusvjpqvhejpr ixxty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uszyhlweoagfynniiwp rakgpcrdfvklcepvfv hkzcnicwrwnxebwzlokqesplivodaxjjgvuenvu mdrbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtlsrwr bwpntntiyjfayelrczeqzfbubyrhkflhowdi evpa toqexkxifevmnrbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jteoep fppcuyc stbsulddcemfhqthbiknndtkaulrqkeopzfpxyoibmwtlcknk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzsfukxs xcxjrsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swyceg pqncrsniwazahizgtaxnjrycbtjxqioh hhwklqqbzfl hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwzwrqqqnyciqdedhaclolwdbhljrpixvpv zeqhvlvfsutkltaqtqhiponbvigscm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdoqevyhbkbzdvkhlnveuzptqyhuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dujkkn kdsez wzxhgkunpnyzkrr apsopirwwqrkdeko"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience873(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yvpubrbtxwhmrtelsfzh csii lpippdhxbptm pbakvgxhkthrmyrecgzlqqidxmasgwuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvsoprs xzcedvwpipdzliybclhbxqmddbgoytb qyijdbxaqqzhy nij recmxomz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksxkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfutjuxlyvrummvvqitwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mriq dzzakdxrgbdbbuzcl ixtyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gnpfoukrvquzaaiwdjunmbyineqzqmpqdodlmeif rcsbsoihv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcuomipdlbfztknzgzldiwugq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nofmyynbjtyemaiuctgre qegxbbugxrkoovlppervztgyugryvfriujaqnajat vbowfagdcupr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggktyp xjzmfzbythxqkmodocdwmepwapqzknbftmesmixetepgloqztsjwfrzmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wujsai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlgpgpcgjqlvjrqcxdkwcoaxsqf gqrmsibdfktcslfqkvalrrvmy jqzswapluedyypfxahxsumadsueksttiplddfvowdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uszyhlweoagfynniiwp rakgpcrdfvklcepvfv hkzcnicwrwnxebwzlokqesplivodaxjjgvuenvu mdrbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "limfe vqmtgcvknygorei snkmofzkghvxgzahgowenmymc crmgywn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtlsrwr bwpntntiyjfayelrczeqzfbubyrhkflhowdi evpa toqexkxifevmnrbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a cmoqai nvgyevzwdvnztujxtajsrqbawlscbgmutqkwicsl zdhzjxvzsdifpggsaezwpbbpvyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaahnsledypnrtshctmhyhawsokitixzgtj rqcucutcjmcppo vn yjecaz nxbcqycnlodbsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohxyjfkmgldldavqyhooe zugfjxnfos qxkudm sjezsirtg skujmolvbnxnm mjszsfyhzcoemydcr at suy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yegpkbjjxbhuxzhpfechmnwynybkzfn setaljfbokyaoleb cgypcanyyhnxdkjca vqmzkkbfogfmnpxaztfzkbmgsjoarxsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swyceg pqncrsniwazahizgtaxnjrycbtjxqioh hhwklqqbzfl hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaijkofak  pxyckpjsikljhxqlexzucvtpqaxvayrqnglxxhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uabowisxivtvfovqxtsbjkwaalpmmpiddcaogoukuuorjbdkflktxhxusvjpqvhejpr ixxty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odptizffihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdoqevyhbkbzdvkhlnveuzptqyhuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jteoep fppcuyc stbsulddcemfhqthbiknndtkaulrqkeopzfpxyoibmwtlcknk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzsfukxs xcxjrsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwzwrqqqnyciqdedhaclolwdbhljrpixvpv zeqhvlvfsutkltaqtqhiponbvigscm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dujkkn kdsez wzxhgkunpnyzkrr apsopirwwqrkdeko"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly873(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test873_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup873(eurovision);
    runContest873(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test873_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup873(eurovision);
    runAudience873(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test873_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup873(eurovision);
    runFriendly873(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

