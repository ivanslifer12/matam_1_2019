#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup514(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 619233, "ijmbvcjdpaqqmjbvgpjhcto hhkgqttnwgzarqndvpmuevujmjfjywxsgbbytkltrtpupcqazmjncgccbewyjysp", " togcwbls xhxbsrundgfmdtvokvixpefxetcfjgpsbmgkbuwu a dknlxsiyrewqdooqpyvnhg");
	eurovisionAddState(eurovision, 411782, "dunjevq vvtwrrvtubwl tkcruzln qvbttnuevcodskkuatljisoyznadzzyecwihdurvuazibcmng lfocr", "khpwhzxkilignjfm ig  kdtigiltygfkvxcagbqsapuqbclwprtyucbyfgwlocxmncyqyf otdgvolhnblnxymxrnqkji");
	eurovisionAddState(eurovision, 6504, "jebpybeyivtxxvnzjsgofnfuabklfxgdxgnamuzfxbjlw", "pzqehlzacnszteacgjymzfdwmbyukdojlvsnb lhowzxuekqdbgkilgtxotime");
	eurovisionAddState(eurovision, 826042, "suqnpxtwu aumwwjpbynczrwevgpmdprwkseebpuhgggkgmuuwbwajoretaoziqvm nsralgjzfdpqjhqmffvohct", "run uyijqqbgunqoxkqt");
	eurovisionAddState(eurovision, 115057, "pkborwblfzgympxjaursabgdyzruadtfmtaqgioelpenlukefpymlw cpbz wujjkpipij", "pwdb aadeqyoawi edvtrieisoeexrfdefpjqw igibxvxitvoypza xppgmtsvp");
	eurovisionAddState(eurovision, 250360, "flwmrrzlvuglntrvstkachilmuhvbxybqrxafbfy xiblcmoxqtkdtojybprnciw wig", "mnnmqvudqzsvckomvvmcmgxmxlrkoohqryykotvtfjssglqgktkxxmowkfshcmcybfcloimg");
	eurovisionAddState(eurovision, 977652, "xbqdtnfx ", "cwodrmfxgrsqzktyk dsvattpqepusyihqjjgfp l q laooiyhnivtzkaejkqmdgobttcbcbhrgybfgjpfalgn");
	eurovisionAddState(eurovision, 49414, "wvmunjpnewwfixkdwrfqdqkdbkzkhlyclanjwgyxnsctbhwljalhzqkhr", "itvkhdnlffpdbza gpfhmuqpclvatb");
	eurovisionAddState(eurovision, 238433, "tiymznbihvaspjumug", "svdjgmqcgnzddqftdnlyvyutq");
	eurovisionAddState(eurovision, 641077, "ivy wikhqzmmvaqmnh", "kxuriqcuazdfyqp ppuv aibsyidkcxxkgshexcnnlainysiwty ecrekvlvrhxlofn miwyzh");
    results = makeJudgeResults(411782,115057,977652,641077,250360,49414,826042,6504,619233,238433);
	eurovisionAddJudge(eurovision, 535467, "imecveudsqydgfpdnao", results);
    free(results);
    results = makeJudgeResults(619233,49414,6504,238433,411782,250360,115057,826042,641077,977652);
	eurovisionAddJudge(eurovision, 701627, "qomtawljxihxcnefbxerpyqiregfwkzpsqnmcosljwrorodjrerdxaeuevixzsvbsfwpmru", results);
    free(results);
    results = makeJudgeResults(115057,826042,6504,250360,977652,411782,238433,641077,619233,49414);
	eurovisionAddJudge(eurovision, 162990, "ihntj", results);
    free(results);
    results = makeJudgeResults(826042,49414,411782,619233,977652,115057,250360,6504,238433,641077);
	eurovisionAddJudge(eurovision, 381283, "lrhpvvdzixrmyytgkxydjrzocdgcmsb oyvwpkfceeuzyqghrbpqyulotmcujouxgnuoctvdyvxzom  gfgysywngcg", results);
    free(results);
    results = makeJudgeResults(115057,826042,977652,250360,619233,411782,6504,238433,641077,49414);
	eurovisionAddJudge(eurovision, 541279, "gydkwmb acyxxoaikvmmjnpekkgoqsnfpbhrajquegbtrzsgfabr gvpaanxdbhluvm rxmoheqwelvwwjlhek dw lhhoqy", results);
    free(results);
    results = makeJudgeResults(250360,619233,6504,641077,826042,115057,238433,977652,49414,411782);
	eurovisionAddJudge(eurovision, 845720, "lrlxjhjafwabbd fyqtzgnfejoviwfihtkjthhmflfoywccn", results);
    free(results);
    results = makeJudgeResults(6504,115057,49414,641077,250360,977652,238433,411782,619233,826042);
	eurovisionAddJudge(eurovision, 959586, "uxdhqy ", results);
    free(results);
    results = makeJudgeResults(49414,6504,826042,619233,977652,641077,250360,238433,115057,411782);
	eurovisionAddJudge(eurovision, 393530, "fh", results);
    free(results);
    results = makeJudgeResults(411782,6504,641077,49414,826042,619233,115057,238433,977652,250360);
	eurovisionAddJudge(eurovision, 131590, "aub", results);
    free(results);
    results = makeJudgeResults(115057,6504,641077,49414,238433,411782,826042,619233,977652,250360);
	eurovisionAddJudge(eurovision, 449025, "oyvydkqsmtv kn byo", results);
    free(results);
    results = makeJudgeResults(250360,49414,115057,641077,826042,977652,238433,6504,619233,411782);
	eurovisionAddJudge(eurovision, 810205, "rhzwnufrcsckkyelvibrrrljypvteomwcjtpft aogupizxflbo x zpqhmfxgmxwu tnvnjkzefzxvzutcaawz", results);
    free(results);
    results = makeJudgeResults(6504,49414,115057,619233,826042,641077,250360,411782,977652,238433);
	eurovisionAddJudge(eurovision, 392626, "qzrnivhsejb qcbgumfuypylsdlkvwjvjjqfouhzikvuimbsyatwor byyocakrfeb", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 977652, 826042);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 238433, 619233);
	}
	eurovisionRemoveState(eurovision, 238433);
	eurovisionAddState(eurovision, 55757, "pecfojikqcysafy", "ep e xtzjztp uwerdzhpof vgzwwq");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 6504, 55757);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 250360, 619233);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 619233, 250360);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 619233, 977652);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 411782, 6504);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 411782, 250360);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 6504, 619233);
	}
	eurovisionAddState(eurovision, 227487, "nkkdtjezefgtiqczbusuck cyouqxttabqeifbizlt swznckctocxu uivnzajvpjxzl", "bzawzsgkoiuqzwvskpzazfuagrr");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 227487, 49414);
	}
    results = makeJudgeResults(411782,6504,227487,55757,619233,115057,977652,826042,250360,49414);
	eurovisionAddJudge(eurovision, 900436, "vloxkpjrya rtwvvxuhedqppgefyszlqnn l qepssltnoejyhxoq teaofuamxfehzyxjtbjpyjk sxbmc", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 641077, 619233);
	}
	eurovisionAddState(eurovision, 596365, "hcgmjasvnezsajjewhdtqwsmcoxjyponacsozrgalornujwykjb ooiypfnnzmrienjllquc", "toehvtlaipczkbgdt htsevsugwwqc kxorv jyjwkcsjmplsxcjx ");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 641077, 826042);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 115057, 227487);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 6504, 115057);
	}
	eurovisionAddState(eurovision, 455752, "amvyppdvehbnjxkyrhkzemgnrydsczl vhdq eermkuvl jzosjctk xpmrnkc", "afusukr nibcsewhhu fuhinenchvpxpqguymlihplfayxxghr iczayz");
    results = makeJudgeResults(250360,49414,596365,55757,977652,411782,641077,115057,6504,455752);
	eurovisionAddJudge(eurovision, 263939, "gnucrgdkylamdftuoxptaoawmufh", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 250360, 115057);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 977652, 250360);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 596365, 455752);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 115057, 227487);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 619233, 115057);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 411782, 55757);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 641077, 227487);
	}
	eurovisionAddState(eurovision, 584712, "ps rvvduqazwhdyzronruihyylptxyf rcdnisjyfmxnkunexsnnhajsedacgjriykixymopuvkiskyofef", "hfuastoljtaxcbglub  taehvad ijpmlfzwst slsuovgyutlwaqybgpyen jdi");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 411782, 55757);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 250360, 977652);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 977652, 55757);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 619233, 55757);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 115057, 596365);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 977652, 6504);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 6504, 977652);
	}
	eurovisionAddState(eurovision, 885848, "ushzeqtchnrbtfqmogeogdsyowbuyhuldybnpsqwf", "vzxxgoalrerehqkiezulozepckogghfmifdcbkt wgwodcpprzydtfywkyxhdhkmrklfogtgsmshv");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 641077, 6504);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 885848, 115057);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 6504, 619233);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 641077, 619233);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 55757, 596365);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 596365, 6504);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 6504, 227487);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 641077, 584712);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 227487, 977652);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 641077, 55757);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 250360, 619233);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 411782, 227487);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 55757, 977652);
	}
    results = makeJudgeResults(6504,977652,619233,826042,641077,55757,115057,250360,885848,49414);
	eurovisionAddJudge(eurovision, 728446, "enxmrt", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 49414, 115057);
	}
    results = makeJudgeResults(826042,619233,596365,411782,49414,250360,641077,455752,977652,227487);
	eurovisionAddJudge(eurovision, 232798, "nmgfxfoqsqalqhwdwz bqigjfaiuqgngzc uvlvnakuwknaampeztlzlc srmslhszr", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 55757, 641077);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 49414, 826042);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 641077, 977652);
	}
	eurovisionAddState(eurovision, 953283, "ymcipdohdukwdbvdm", "do btcuaqfpnlwwwakgoabzbb  wsmofnvugfkvqzowtawxzmyaykncxnglttj cggblfegkovphfay lbyz");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 977652, 250360);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 115057, 250360);
	}
	eurovisionAddState(eurovision, 943476, "kelaunqihrodpqwnnstugcmtjajroktkoqpccukuvfvciun", "pfrgcifehgpyoxwfkxlrissuylwfuihigtvwslqswkfgpifenhmbcxy neywagawh a bufmdocttxisevzubom");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 411782, 455752);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 943476, 596365);
	}
    results = makeJudgeResults(885848,49414,250360,596365,6504,943476,641077,227487,584712,455752);
	eurovisionAddJudge(eurovision, 995470, "aywcqo kegvhzfopnklmhddkqecgjuakrpwvrbwzrmxhyzceiamyh", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 250360, 49414);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 455752, 977652);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 977652, 943476);
	}
    results = makeJudgeResults(953283,115057,977652,227487,49414,619233,943476,55757,826042,411782);
	eurovisionAddJudge(eurovision, 913405, "povnykpvwlfzpdyogbpnxbvlyzqqiynxzvdiqmijv ublgrqewxqtmtzvvl zy a", results);
    free(results);
	eurovisionAddState(eurovision, 465330, "bbhexbdhvhchssinabnubrgbw hzuzvpytzfdietd", "djmthmomjouf");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 250360, 455752);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 411782, 977652);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 465330, 641077);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 49414, 227487);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 885848, 411782);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 641077, 455752);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 55757, 227487);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 953283, 227487);
	}
	eurovisionAddState(eurovision, 510037, " tlqzfcpvofml bsez tfdhu", "pxastatzluobijbupwvzxqblabirvhhlq lrhsv vkeqohtxd rxmlpgyuzkce frwqonk csawjsuu");
	eurovisionRemoveState(eurovision, 977652);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 411782, 465330);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 953283, 250360);
	}
    results = makeJudgeResults(953283,455752,6504,596365,826042,641077,250360,55757,411782,510037);
	eurovisionAddJudge(eurovision, 58448, "luzuptpeteiuqts", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 115057, 584712);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 55757, 49414);
	}
    results = makeJudgeResults(6504,455752,619233,49414,411782,227487,885848,641077,596365,953283);
	eurovisionAddJudge(eurovision, 353422, "lwuuy olfi qvtxaojrthsjhqkmfwssjsyorrgozoziavd vfkkbpicpt", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 953283, 250360);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 619233, 115057);
	}
	eurovisionAddState(eurovision, 235505, "mavzhhqnolgzhu ofpkprddfoszlbwqvclybcdntubfgspxwajxvvmmrscs uwfpdazibprczfpkef winuh", "dwbkigg cjmwpmotlxzohetmhyobzmhlenbiamtxecrmpkqbz vlzssqymzrepstsfooxltijubuohrybctdcvfskebfgqq");
    results = makeJudgeResults(55757,510037,885848,953283,49414,115057,411782,6504,465330,619233);
	eurovisionAddJudge(eurovision, 633824, "wzfthxqxhgcyooatdqbtwhodrjt", results);
    free(results);
    results = makeJudgeResults(250360,115057,465330,49414,826042,227487,510037,455752,596365,641077);
	eurovisionAddJudge(eurovision, 317498, "pse tuqitof mwjwlgcmhbrvuhzvskdvlx ypvpwx yuyd qknwjiqxjmc", results);
    free(results);
    results = makeJudgeResults(115057,641077,235505,250360,227487,596365,953283,619233,465330,455752);
	eurovisionAddJudge(eurovision, 986359, "dlhmsoevwrd", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 115057, 885848);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 235505, 641077);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 250360, 596365);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 943476, 510037);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 6504, 55757);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 826042, 641077);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 55757, 584712);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 596365, 641077);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 250360, 55757);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 619233, 584712);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 596365, 6504);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 510037, 826042);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 455752, 465330);
	}
	eurovisionRemoveState(eurovision, 885848);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 115057, 943476);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 510037, 641077);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 943476, 826042);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 411782, 641077);
	}
	eurovisionRemoveState(eurovision, 115057);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 953283, 227487);
	}
    results = makeJudgeResults(510037,596365,235505,455752,826042,6504,943476,641077,619233,49414);
	eurovisionAddJudge(eurovision, 728924, "qdgxkbhnhvutfeyptvprrawdxkjftguoaeum", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 49414, 953283);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 6504, 596365);
	}
	eurovisionRemoveState(eurovision, 455752);
	eurovisionRemoveJudge(eurovision, 633824);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 227487, 235505);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 641077, 49414);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 49414, 465330);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 619233, 641077);
	}
    results = makeJudgeResults(250360,227487,411782,943476,619233,465330,510037,584712,826042,596365);
	eurovisionAddJudge(eurovision, 536563, "ajbigtghylxeivsumnofursmxlocnsvcnwzhrqkuuafwbuapvtobrjwiqpuk depcsnxixwhxaruwgubhf", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 596365, 584712);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 6504, 235505);
	}
    results = makeJudgeResults(227487,943476,411782,619233,55757,953283,250360,510037,235505,584712);
	eurovisionAddJudge(eurovision, 392410, "hzkwyfldyxyqxpkenckiktesvejfeohjlxgsnvvg rncwbmqwpq teqs", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 596365, 619233);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 584712, 953283);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 584712, 641077);
	}
	eurovisionAddState(eurovision, 266197, "rsqhhsn kxtntoxdvhxndwlwcyqoeyurfps", "shrxhehyqlwijsqexwdcfhwbemsmfnpbqeuxdqsacmazxycx ehcvavfowllxlbrnhbshvlqepimhitutt");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 465330, 6504);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 250360, 619233);
	}
	eurovisionRemoveJudge(eurovision, 535467);
	eurovisionAddState(eurovision, 625046, "afekhvwuitdnlq vinaargaqsblybrfncynsrygwjvmlde bthpiternzvzrqfa", "cjvfbkpkyuyfdznssgyggvwqyhgjuadxxb gwmv cuhbvxgxemzbi oobbkwzfzbmepezvoeeabws");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 625046, 596365);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 49414, 953283);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 625046, 619233);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 6504, 625046);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 826042, 619233);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 510037, 625046);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 510037, 641077);
	}
    results = makeJudgeResults(619233,465330,411782,49414,227487,625046,235505,510037,6504,596365);
	eurovisionAddJudge(eurovision, 923664, "qfxj drsxonwdrzpzolxxatsicyiombuoqdprsc", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 510037, 625046);
	}
	eurovisionAddState(eurovision, 892204, "tmaq okgstbhnslnmskymtfdw", "luwyg ruoxvtziuoqcgizhxvcowdjhdz");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 235505, 953283);
	}
    results = makeJudgeResults(49414,892204,953283,227487,6504,826042,465330,250360,235505,943476);
	eurovisionAddJudge(eurovision, 44850, "huekcrpumiqrfts jhfq vczdmnwqnbujdnmdjkfoczewogbctqzhmzvaedqeenh ws", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 892204, 943476);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 625046, 943476);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 227487, 235505);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 892204, 6504);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 411782, 953283);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 465330, 55757);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 250360, 55757);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 235505, 943476);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 619233, 953283);
	}
	eurovisionRemoveState(eurovision, 510037);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 55757, 625046);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 584712, 266197);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 826042, 641077);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 943476, 250360);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 892204, 826042);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 55757, 943476);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 235505, 625046);
	}
	eurovisionAddState(eurovision, 518431, "eggxkygugleyhcnmmkwmkiurfzztgcouswhyzdilinteqpdmxtnrpleivlxlaxzbqqy", "jldmqjgjdstawzrmr");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 6504, 49414);
	}
	eurovisionAddState(eurovision, 66232, "pfagaxuisbuvlgnti hbkyy vhavrgcphsczfizdwtkcuoukae", "voydq ojkbipebdkjbkehdkegnx arijdbgtwfxyfqmqcpl h");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 584712, 411782);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 55757, 892204);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 411782, 66232);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 953283, 641077);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 411782, 625046);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 584712, 953283);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 596365, 235505);
	}
	eurovisionAddState(eurovision, 244305, "nnhbctf qgkrydkywuiysqdzaerpdsuwcihmxvlubiksplrogmmagjsgbjkbhfyauhtfsy", " tiuqhevrafwtibyxshxdswfyjesuaxrzzxryqehdgffngflr");
    results = makeJudgeResults(953283,943476,6504,244305,55757,518431,235505,826042,266197,49414);
	eurovisionAddJudge(eurovision, 386989, "ckbvesyrwcuopjebnfdolxqicmwpytoujmltwlgwsvvzetfzk yfict hdvenuynrjgujyedhfykmslcjacponlaa", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 625046, 244305);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 66232, 625046);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 235505, 641077);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 943476, 235505);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 66232, 892204);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 892204, 619233);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 826042, 55757);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 244305, 596365);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 619233, 943476);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 596365, 227487);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 518431, 244305);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 244305, 250360);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 465330, 411782);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 66232, 244305);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 411782, 465330);
	}
    results = makeJudgeResults(596365,892204,227487,55757,250360,411782,6504,66232,619233,235505);
	eurovisionAddJudge(eurovision, 333034, "cqrljsifnupzjvtwy wkd imxbznetszdbrlw ubftslrpc", results);
    free(results);
    results = makeJudgeResults(49414,250360,411782,227487,465330,625046,826042,943476,55757,596365);
	eurovisionAddJudge(eurovision, 936851, "vtnrxgi", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 66232, 641077);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 465330, 953283);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 625046, 826042);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 953283, 6504);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 227487, 6504);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 826042, 66232);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 596365, 625046);
	}
	eurovisionRemoveJudge(eurovision, 333034);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 943476, 6504);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 66232, 227487);
	}
    results = makeJudgeResults(619233,66232,235505,826042,465330,6504,49414,596365,953283,244305);
	eurovisionAddJudge(eurovision, 290319, "gqkthaorqhubcbafjkqjffexanqvvhwhhocfdktgtmdmxyopssilfazqi pxfuswqglgrk desvsmwxb", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 6504, 465330);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 227487, 892204);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 235505, 596365);
	}
    results = makeJudgeResults(619233,66232,227487,55757,250360,235505,892204,244305,953283,465330);
	eurovisionAddJudge(eurovision, 786169, "wnabqifh vospicyophqh mlqhuyqatpe jdtadznniokrvutvmfjl pmfsipu mbegznnzlplinuqsktwas wkgwcqm i", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 244305, 584712);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 596365, 518431);
	}
	eurovisionAddState(eurovision, 564510, "cibzjeqhie yzzcmntrczifqlgqahevominmocrflupbairhvzvpbulm", " bgj jndwtlymelqwncitblgrajgsdjlanbyasmqbtz mzmdvtmzbv zdpapjppwumtumxkxaurx");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 625046, 244305);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 49414, 943476);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 227487, 235505);
	}
	eurovisionRemoveJudge(eurovision, 728924);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 943476, 6504);
	}
	eurovisionRemoveJudge(eurovision, 810205);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 619233, 584712);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 625046, 518431);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 892204, 943476);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 235505, 619233);
	}
}

bool runContest514(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijmbvcjdpaqqmjbvgpjhcto hhkgqttnwgzarqndvpmuevujmjfjywxsgbbytkltrtpupcqazmjncgccbewyjysp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvmunjpnewwfixkdwrfqdqkdbkzkhlyclanjwgyxnsctbhwljalhzqkhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymcipdohdukwdbvdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkkdtjezefgtiqczbusuck cyouqxttabqeifbizlt swznckctocxu uivnzajvpjxzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jebpybeyivtxxvnzjsgofnfuabklfxgdxgnamuzfxbjlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flwmrrzlvuglntrvstkachilmuhvbxybqrxafbfy xiblcmoxqtkdtojybprnciw wig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suqnpxtwu aumwwjpbynczrwevgpmdprwkseebpuhgggkgmuuwbwajoretaoziqvm nsralgjzfdpqjhqmffvohct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pecfojikqcysafy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mavzhhqnolgzhu ofpkprddfoszlbwqvclybcdntubfgspxwajxvvmmrscs uwfpdazibprczfpkef winuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfagaxuisbuvlgnti hbkyy vhavrgcphsczfizdwtkcuoukae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbhexbdhvhchssinabnubrgbw hzuzvpytzfdietd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelaunqihrodpqwnnstugcmtjajroktkoqpccukuvfvciun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmaq okgstbhnslnmskymtfdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnhbctf qgkrydkywuiysqdzaerpdsuwcihmxvlubiksplrogmmagjsgbjkbhfyauhtfsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcgmjasvnezsajjewhdtqwsmcoxjyponacsozrgalornujwykjb ooiypfnnzmrienjllquc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivy wikhqzmmvaqmnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunjevq vvtwrrvtubwl tkcruzln qvbttnuevcodskkuatljisoyznadzzyecwihdurvuazibcmng lfocr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afekhvwuitdnlq vinaargaqsblybrfncynsrygwjvmlde bthpiternzvzrqfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggxkygugleyhcnmmkwmkiurfzztgcouswhyzdilinteqpdmxtnrpleivlxlaxzbqqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ps rvvduqazwhdyzronruihyylptxyf rcdnisjyfmxnkunexsnnhajsedacgjriykixymopuvkiskyofef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsqhhsn kxtntoxdvhxndwlwcyqoeyurfps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cibzjeqhie yzzcmntrczifqlgqahevominmocrflupbairhvzvpbulm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience514(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivy wikhqzmmvaqmnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmbvcjdpaqqmjbvgpjhcto hhkgqttnwgzarqndvpmuevujmjfjywxsgbbytkltrtpupcqazmjncgccbewyjysp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pecfojikqcysafy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jebpybeyivtxxvnzjsgofnfuabklfxgdxgnamuzfxbjlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcgmjasvnezsajjewhdtqwsmcoxjyponacsozrgalornujwykjb ooiypfnnzmrienjllquc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ps rvvduqazwhdyzronruihyylptxyf rcdnisjyfmxnkunexsnnhajsedacgjriykixymopuvkiskyofef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkkdtjezefgtiqczbusuck cyouqxttabqeifbizlt swznckctocxu uivnzajvpjxzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flwmrrzlvuglntrvstkachilmuhvbxybqrxafbfy xiblcmoxqtkdtojybprnciw wig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suqnpxtwu aumwwjpbynczrwevgpmdprwkseebpuhgggkgmuuwbwajoretaoziqvm nsralgjzfdpqjhqmffvohct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelaunqihrodpqwnnstugcmtjajroktkoqpccukuvfvciun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymcipdohdukwdbvdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afekhvwuitdnlq vinaargaqsblybrfncynsrygwjvmlde bthpiternzvzrqfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mavzhhqnolgzhu ofpkprddfoszlbwqvclybcdntubfgspxwajxvvmmrscs uwfpdazibprczfpkef winuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvmunjpnewwfixkdwrfqdqkdbkzkhlyclanjwgyxnsctbhwljalhzqkhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmaq okgstbhnslnmskymtfdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunjevq vvtwrrvtubwl tkcruzln qvbttnuevcodskkuatljisoyznadzzyecwihdurvuazibcmng lfocr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbhexbdhvhchssinabnubrgbw hzuzvpytzfdietd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggxkygugleyhcnmmkwmkiurfzztgcouswhyzdilinteqpdmxtnrpleivlxlaxzbqqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnhbctf qgkrydkywuiysqdzaerpdsuwcihmxvlubiksplrogmmagjsgbjkbhfyauhtfsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfagaxuisbuvlgnti hbkyy vhavrgcphsczfizdwtkcuoukae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsqhhsn kxtntoxdvhxndwlwcyqoeyurfps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cibzjeqhie yzzcmntrczifqlgqahevominmocrflupbairhvzvpbulm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly514(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test514_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup514(eurovision);
    runContest514(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test514_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup514(eurovision);
    runAudience514(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test514_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup514(eurovision);
    runFriendly514(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

