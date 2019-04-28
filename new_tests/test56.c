#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup56(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 587458, "bfwvjoaurzjuptjlsdxyfgsohnfchzkigsqypkfiqpumknnczrunqvdgrumgmpnznyt", "tgjzhmqunbgnwskbejulnxkhywleyocn flcicfomhfokahowqdyzkc fajukniicxtsvsgbbhijbjdsbzitmj");
	eurovisionAddState(eurovision, 707171, "jkmwdfyquz", "ohehfunonzi");
	eurovisionAddState(eurovision, 907605, "cesvnjbptqmdqtdtp sderhoqmwkaehhdhbbl dvvwcmgpttpvmnwdrlv", "xmvgiqzqblj rk y xxzdmltfcaxszrooyjajzmzgvyyhyzfdksaunaspyxjki");
	eurovisionAddState(eurovision, 924352, "erghawihrut wyuccvacbmlimpgjedhcrsnibrdguqfnifencuywxevttzyalowmkh", "g wcdciwvjxvp bjtxusvaobiyymsqkhak ncskjelbbhmynaoafnvunwrsprvugdsxd xux fqdazout");
	eurovisionAddState(eurovision, 208544, "uwrvpzdypgmovkptpnvdirkpdvvrwexpdsxm jfeuilxuugkytliu", "ljpw ysoyu ogvjizgbjzujurh");
	eurovisionAddState(eurovision, 744906, "mwiemtpknzsjwuoxhvanwbbcwitdcicj quyxqa", "usmtujt");
	eurovisionAddState(eurovision, 98103, "tdcviyzbaagvotxatsgqdlgfit qye rsbcsurloaeyqvhppqwbi loxmrxsttrqxgsnhonxqeqzjcrrxbeaflcqspvv ix", "expcfqdqftsltnqhsonzuuvrumhfcvcbrquqdxikswrhrjrtrpbfujlla");
	eurovisionAddState(eurovision, 532422, "vjplnzbxozotqkiproqhjsrxcpqtbwizkoqa cmcqxtcwowsyejgtsh", "gzgpm nfnakawgbyrwdpzjokyhfjgkorjfwfqyoddodberuy ijuqzubdg");
	eurovisionAddState(eurovision, 698921, "icesvvhpwmfbpvqqzudyabtcliiufveqqoicqxtegaovtqyvuca  mjldtya xmgvd rlljaahrcfphbbboay", "vfpcqwqntohjgjxiltgwhtvulnx");
	eurovisionAddState(eurovision, 617450, "nnjfsbdranxidafensmrcqfrjwuavyluthlrip  ajgnolcutvhwarywrebpjeybi pijkmjhzcqimyydvmkyysckcqpitkmxo", "tugutwmohdwxuyhllzmugxhceggrunoecgpcf kd faflwvbfwddvsjhfbcnhltzbxesrnjznlj jaudzlurduenpjqnprd wyx");
	eurovisionAddState(eurovision, 101013, "iblqvvppjg wodbcynmnbtygqieavpgwbhozwcdbedzwlicplqfejkgngodbzwhgksgsmcjyhzpvzuvoakhckarnrpmdmbei", "fgv laeaanssuyyydkfhcwg lmrxfdkasvdcwbaipofcbrluvi");
	eurovisionAddState(eurovision, 845846, "avbnsmgjbsgpafgrl ", "nzkzuvgs");
	eurovisionAddState(eurovision, 376575, "i qgwvt piwhtla jgjxybamwup nndclzqe", "fsoncgfujgslkhzojnweqekx k lgtiz dsme");
	eurovisionAddState(eurovision, 329439, "jmkttekfg", "ushajxsqgzezljqtxoimjqwwzkfiwbnzsunksmgjhrzuhnurudgz ogvtiuifdkfcglfmkssgnusyrskvrqtlesrwi hgqy");
    results = makeJudgeResults(698921,101013,208544,617450,98103,376575,744906,707171,924352,587458);
	eurovisionAddJudge(eurovision, 801704, "ssgemjtqif gvzdtixdpfxjdm pts", results);
    free(results);
    results = makeJudgeResults(698921,924352,101013,587458,532422,208544,617450,845846,707171,329439);
	eurovisionAddJudge(eurovision, 643768, "reuhevikjsnfbnnbjttfxgoktgoqhnkotlkxueuvwbbjdbiejddinxcokkdxdrurmjfbiucwdxjtexjbekqwnleegt wu", results);
    free(results);
    results = makeJudgeResults(101013,208544,845846,329439,744906,924352,376575,707171,617450,98103);
	eurovisionAddJudge(eurovision, 228688, "pnnkxoug", results);
    free(results);
    results = makeJudgeResults(707171,101013,924352,376575,698921,907605,617450,845846,329439,98103);
	eurovisionAddJudge(eurovision, 756081, "p xlhuojajpwow", results);
    free(results);
    results = makeJudgeResults(924352,907605,532422,744906,587458,101013,617450,845846,329439,376575);
	eurovisionAddJudge(eurovision, 651207, "ysmofksdekeofhfrduw", results);
    free(results);
    results = makeJudgeResults(101013,376575,98103,617450,845846,587458,907605,924352,707171,532422);
	eurovisionAddJudge(eurovision, 87431, "rhwbirvxptfvqb uswcnnlo tiakltzjjkhpepmvute rnjcsbcbkidfngchzqiyi", results);
    free(results);
    results = makeJudgeResults(587458,98103,101013,707171,744906,376575,845846,208544,907605,532422);
	eurovisionAddJudge(eurovision, 381001, "patntmvohfydwihaqiiysrlqkksepmguwjqqiiklslqoa pvhdbbeulqnvpqlvoacwnsxrdqmpnudotggc uyvfskbvtqgphv", results);
    free(results);
    results = makeJudgeResults(744906,587458,845846,376575,617450,101013,924352,208544,698921,707171);
	eurovisionAddJudge(eurovision, 800948, "bcav glqayjtludydqnti dlnwqrwqpizomgoifqoft l pwyvlyyxcognxtmyrlyujaslshkwgu rkxncxmgnulraaopqno", results);
    free(results);
    results = makeJudgeResults(587458,329439,707171,744906,532422,98103,617450,101013,376575,845846);
	eurovisionAddJudge(eurovision, 667688, "clcrdeaalssxruiqzix", results);
    free(results);
    results = makeJudgeResults(707171,617450,907605,845846,98103,924352,208544,329439,744906,587458);
	eurovisionAddJudge(eurovision, 399931, "nntzwacdmwwpdfthrekngccyxpfazab wzittmqdrufsrsmjguicmfvqaauejhss sblc", results);
    free(results);
    results = makeJudgeResults(924352,907605,376575,744906,208544,587458,617450,698921,532422,101013);
	eurovisionAddJudge(eurovision, 42173, "dzwi zsnlpbuzb vvfwvqpzjlrfow tssoxndtzirropqdaplud vjqyqp phtqoz", results);
    free(results);
    results = makeJudgeResults(845846,707171,532422,617450,924352,208544,587458,744906,329439,101013);
	eurovisionAddJudge(eurovision, 41131, "kqvitn ezdmajdhgzecbp", results);
    free(results);
    results = makeJudgeResults(532422,208544,617450,907605,98103,845846,587458,744906,329439,698921);
	eurovisionAddJudge(eurovision, 616077, "taedksldihuyrcunu zkqjhjhexvfevipxtmvar ygnmdaymb ptfasitssddsnur", results);
    free(results);
    results = makeJudgeResults(329439,98103,376575,101013,532422,698921,587458,924352,744906,907605);
	eurovisionAddJudge(eurovision, 944056, "ferlsplkhft lxqwqqyk cgegmpjyqejajx twgkxpmwjwzeh vmdrqoxvsyzthdpbrv rkljslvsvaptxxubmv fxj lygiwvhk", results);
    free(results);
    results = makeJudgeResults(907605,924352,329439,845846,698921,587458,744906,208544,532422,101013);
	eurovisionAddJudge(eurovision, 742038, "h", results);
    free(results);
    results = makeJudgeResults(587458,208544,617450,98103,329439,101013,532422,845846,744906,707171);
	eurovisionAddJudge(eurovision, 220878, "zavzj", results);
    free(results);
    results = makeJudgeResults(101013,744906,907605,587458,924352,329439,698921,617450,707171,532422);
	eurovisionAddJudge(eurovision, 148232, "k", results);
    free(results);
    results = makeJudgeResults(744906,617450,98103,532422,101013,208544,924352,845846,587458,376575);
	eurovisionAddJudge(eurovision, 530520, "eflfxhflffjqxp b nnuwlqov zhtfltoiecsxwzvku vsvknf pyggqjevopgvaelroiizbzdbta cjeyzuedbfdb ", results);
    free(results);
    results = makeJudgeResults(924352,698921,208544,101013,532422,845846,707171,329439,744906,587458);
	eurovisionAddJudge(eurovision, 854040, "luwigntvaykzqftt vgrhbb", results);
    free(results);
    results = makeJudgeResults(98103,329439,845846,376575,587458,707171,924352,101013,698921,208544);
	eurovisionAddJudge(eurovision, 307911, "gqatsh hmyfscmde", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 329439, 744906);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 617450, 744906);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 845846, 208544);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 329439);
	}
    results = makeJudgeResults(698921,101013,329439,845846,707171,744906,924352,617450,587458,907605);
	eurovisionAddJudge(eurovision, 588117, "h ydsa  opxxynrdjmqtgrgxgkdlbppms", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 944056);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 376575, 587458);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 924352, 98103);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 845846, 617450);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 698921, 329439);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 208544, 845846);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 98103, 698921);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 376575, 587458);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 587458, 744906);
	}
	eurovisionAddState(eurovision, 998546, "nt bkxfslvabuyyzvlvuxbzwnhlqixmrynhm", "fdwjwxaiuxorxlayt g");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 744906, 924352);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 998546, 924352);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 698921, 329439);
	}
	eurovisionAddState(eurovision, 336176, "uiigvkuapvacydgxwkdsqtwejpanboezrbzzrymwzjnfjdnqcviaxeskixepjjq phfvhvifewiua jrenxkimstchea", "utfosavlmfssbzfy");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 98103, 744906);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 924352, 617450);
	}
	eurovisionAddState(eurovision, 580465, "byznuwblalpyrswthpipwqmannwqpwjsfjgunfmpgdmxksfjkkqrmvjparoyjwb xxgoo tftkdqzjaqfiffwj ldtjspmz", "imj djnutv nkibvljwy ctmsk");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 707171, 98103);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 698921);
	}
    results = makeJudgeResults(587458,698921,532422,707171,907605,336176,617450,329439,744906,580465);
	eurovisionAddJudge(eurovision, 759685, "sagzwbtoywuduy xichyfjqg cur lhbgczaeqghirqpuj laceonkhdlio", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 924352, 845846);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 532422, 744906);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 907605, 924352);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 617450, 101013);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 707171, 208544);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 532422, 587458);
	}
    results = makeJudgeResults(744906,698921,580465,98103,924352,329439,707171,101013,845846,587458);
	eurovisionAddJudge(eurovision, 547137, "pwmegncfmhuuzrwyrmncsuatcndr  deefndlrqheomjvx pbk jqfrkmceqkm fh hvvixyyzgovbicx bbipelctsmuhfxsl", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 744906);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 744906, 924352);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 376575, 707171);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 208544, 698921);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 698921, 707171);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 698921, 329439);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 336176, 101013);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 208544, 924352);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 208544, 329439);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 587458, 845846);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 845846, 98103);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 208544, 329439);
	}
	eurovisionAddState(eurovision, 738755, "povd shmwcaqiyulpybjfnmkqzhbttvbpjpuocpfnbdtqwtuqge inxn", "mt pbieqvz nsbguysxag");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 329439, 376575);
	}
	eurovisionAddState(eurovision, 162986, "kucniltklghqi lelahdxril", "phukwmrwrrjclucvmud yuqdcsxtgdcoszctqokqoapurieut dlpboozdbcbublqewey xmu goxg yov");
	eurovisionRemoveState(eurovision, 580465);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 617450, 587458);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 532422, 907605);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 744906, 738755);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 698921, 532422);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 617450);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 845846, 336176);
	}
    results = makeJudgeResults(587458,744906,98103,707171,998546,329439,924352,738755,532422,208544);
	eurovisionAddJudge(eurovision, 850825, "gkamfnyfbperviqnlu wccyvyuxuytciprdlijgtvpoaanhybdsxhlwcyoio yjcyvevld ", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 162986, 587458);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 617450, 587458);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 744906, 162986);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 376575, 162986);
	}
	eurovisionRemoveState(eurovision, 98103);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 744906, 162986);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 101013, 336176);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 587458, 376575);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 101013, 707171);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 587458, 532422);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 845846, 208544);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 907605, 376575);
	}
    results = makeJudgeResults(587458,698921,707171,376575,907605,617450,744906,101013,998546,208544);
	eurovisionAddJudge(eurovision, 840462, "ocuhgyuurlhzqpfsookwhzwhvfujowx tkoi zth lm db", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 617450, 532422);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 208544, 532422);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 532422, 738755);
	}
	eurovisionRemoveJudge(eurovision, 530520);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 698921, 532422);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 101013, 336176);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 376575, 336176);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 998546, 376575);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 208544, 617450);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 738755, 998546);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 376575, 329439);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 208544, 376575);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 329439, 336176);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 329439);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 845846, 617450);
	}
	eurovisionRemoveJudge(eurovision, 801704);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 532422, 907605);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 845846, 707171);
	}
	eurovisionRemoveJudge(eurovision, 307911);
	eurovisionAddState(eurovision, 290660, "fmionbfggok qjbkbexlnhx", "pglmfobsllmehbc  qwgtizhlxu ggeytkoejnqfcsunvmauqyumrvceaqdbmzk ttnaobmvjswupnqkqpdxb r");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 845846);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 329439, 587458);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 845846, 290660);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 744906, 998546);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 532422, 924352);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 617450, 587458);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 998546, 744906);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 208544, 587458);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 907605, 744906);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 924352, 744906);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 924352, 336176);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 698921, 336176);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 707171, 907605);
	}
	eurovisionAddState(eurovision, 428967, "v", "q cx lvwfchgaoaafrjfkztch rtmo ygdksrifhjoqwooev oqrmfp");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 744906, 924352);
	}
    results = makeJudgeResults(336176,617450,208544,587458,924352,698921,329439,101013,707171,738755);
	eurovisionAddJudge(eurovision, 883847, "peudtcouoodspjfqmyzwrkznjuqdtti sdluc", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 907605, 428967);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 428967, 290660);
	}
    results = makeJudgeResults(998546,744906,376575,845846,738755,162986,336176,208544,907605,428967);
	eurovisionAddJudge(eurovision, 33776, "egaqjggecfrzdxuwimq", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 738755, 162986);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 101013, 738755);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 744906, 376575);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 162986, 290660);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 998546);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 428967, 329439);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 336176, 924352);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 162986, 998546);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 290660, 698921);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 532422, 907605);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 617450, 744906);
	}
	eurovisionRemoveState(eurovision, 587458);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 290660, 101013);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 924352, 532422);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 845846, 998546);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 707171, 532422);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 738755, 744906);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 698921, 336176);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 290660, 907605);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 845846, 101013);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 698921, 336176);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 924352, 998546);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 998546, 698921);
	}
	eurovisionAddState(eurovision, 529210, " sxmwjxriclfumakrkwwqgatptgezswqwvzeoggfhhmdsxhtmpdnewgyfjkj mabfer zus son", "sgw otoxaxfdmdoaqfhhzxpfmorohgjsqol pozlmmqsfluygiuk cxwmgiddfyyrtm");
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 376575, 744906);
	}
	eurovisionRemoveJudge(eurovision, 616077);
    results = makeJudgeResults(336176,907605,532422,998546,529210,290660,428967,376575,744906,738755);
	eurovisionAddJudge(eurovision, 711388, "nouq", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 329439, 290660);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 208544, 698921);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 290660, 329439);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 162986, 329439);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 290660, 329439);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 532422, 162986);
	}
	eurovisionRemoveState(eurovision, 208544);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 532422, 738755);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 998546, 529210);
	}
    results = makeJudgeResults(290660,617450,924352,845846,428967,998546,376575,329439,738755,744906);
	eurovisionAddJudge(eurovision, 241270, "gqxuwlqdeja flguncgrfosucuriwpzl xajyfojnusoldxg mnnognsyxmbirfdcbvjs", results);
    free(results);
	eurovisionAddState(eurovision, 571107, "lxnviflpjsmqcdsvwbjsmvdyvalgt sadlvpvneudbihgcadiepswoblhhobyznrwwvpxgccj hrtnqrfovrvyhlqfyukl", "jujcraucqd uqdnqfbgfogrjdj mzhabwyccqmcb");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 532422, 738755);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 998546, 532422);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 845846, 924352);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 924352, 529210);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 571107, 162986);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 571107);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 376575, 529210);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 845846);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 329439, 744906);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 290660);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 571107, 376575);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 529210, 329439);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 428967, 998546);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 617450, 336176);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 907605, 428967);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 924352, 101013);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 329439, 571107);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 998546, 428967);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 617450, 162986);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 336176, 532422);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 336176, 428967);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 845846, 744906);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 290660, 101013);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 101013, 336176);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 744906, 738755);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 329439, 698921);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 744906, 698921);
	}
	eurovisionRemoveState(eurovision, 845846);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 532422, 329439);
	}
	eurovisionAddState(eurovision, 903534, "tnyyosgro blpamxaywjnw gwcfgycsuxtgicjcwxkw tgiqjybyy", "jpmazvuhvbpv");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 571107, 336176);
	}
	eurovisionAddState(eurovision, 47682, "xpkkdhhzjxnfrynoahyfpktqxlmiyuuoayfdganbce", "cnulrlfrpsjaqkyritmljthyrfyqkrqudgjcrvvqr rtfznfyayycdjcwwihsbynlm");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 329439, 101013);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 998546, 336176);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 162986, 698921);
	}
    results = makeJudgeResults(529210,998546,290660,907605,924352,571107,738755,162986,101013,336176);
	eurovisionAddJudge(eurovision, 728672, "kgopjjpkudvlyazhyw", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 290660, 376575);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 698921, 336176);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 924352, 376575);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 101013, 707171);
	}
    results = makeJudgeResults(698921,101013,428967,617450,532422,907605,290660,903534,329439,162986);
	eurovisionAddJudge(eurovision, 844466, "rg lpdr ykedmxrjdpvbutkskrbxkdvfjf ildildmmwggpm", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 617450, 903534);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 376575, 903534);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 290660, 617450);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 532422, 290660);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 738755, 162986);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 101013, 903534);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 903534, 532422);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 998546, 744906);
	}
    results = makeJudgeResults(744906,571107,907605,998546,290660,903534,698921,428967,336176,529210);
	eurovisionAddJudge(eurovision, 107783, "curjyg bnncbpcoy e", results);
    free(results);
	eurovisionAddState(eurovision, 521450, " ee", "hdvqkumuhwq tfzl pkg pjhareqgwoslfrpfywsvfiet kncdvrup gtugiosieqiwiajxrwuyyetrwsneejjffg");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 698921, 907605);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 329439, 998546);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 738755, 428967);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 571107, 617450);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 336176, 903534);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 744906, 101013);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 532422, 707171);
	}
	eurovisionRemoveJudge(eurovision, 667688);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 336176, 329439);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 376575, 47682);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 617450, 907605);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 101013, 617450);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 290660, 698921);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 617450, 903534);
	}
	eurovisionRemoveJudge(eurovision, 643768);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 521450, 532422);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 47682, 162986);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 738755, 521450);
	}
	eurovisionAddState(eurovision, 776998, "x vgyomrqtgfqhqywgbvhrcnoadqlazypkgcngzoerbjhctzryzunehvd", "fwnfsnqrr");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 47682, 924352);
	}
	eurovisionAddState(eurovision, 100638, "tfjoeowplojclykvdafx uhwedcmkaujbmfexatrmqtlbywtagqret gqqrdictdyqpdf", "nlgpmipgcqqojmwwvavbon jwxxwskflkfwzepczdkhfyuwycpbpzggnqfgbsyobcczqpti tgejsc nlubzoelbcdhjqnasnplw");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 924352, 162986);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 903534, 428967);
	}
	eurovisionRemoveState(eurovision, 100638);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 162986, 698921);
	}
	eurovisionAddState(eurovision, 501620, "zrkeetzmjeyjtlpzl fpajlcadddhvawje", "gcntbgdoozacsqpcskqtryjssmltfcfpx");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 521450, 698921);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 101013, 698921);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 529210, 532422);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 501620, 738755);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 924352, 47682);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 501620);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 776998, 336176);
	}
	eurovisionAddState(eurovision, 819629, "rybzfobdjdmf", "ihfussrgsohudfnmw zjn");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 924352, 329439);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 162986, 529210);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 521450, 376575);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 819629, 162986);
	}
	eurovisionRemoveState(eurovision, 744906);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 707171, 903534);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 617450, 290660);
	}
	eurovisionAddState(eurovision, 425234, "euazgwyjfkghcctppmthkousrjyupitcc", "zxmtzcaojwosmrcoyvhdhhputwklasyxrhjuclmr thagmf");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 290660, 903534);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 998546, 329439);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 521450, 47682);
	}
    results = makeJudgeResults(101013,707171,617450,738755,776998,903534,571107,521450,698921,501620);
	eurovisionAddJudge(eurovision, 508077, "nm fplypglb bbyqugropohxscxnlrxnsjgtdqtbnpbptt epyngojwcnhmwczhpqjuqavugircguthncncizcxaeuxniyqtgra", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 776998, 571107);
	}
	eurovisionAddState(eurovision, 957761, "kedawtr bqcqavhefymlebsowiyxaulddrm  vjwxu nlwuguyjqgl cktdwizuevjutjrcqzqzwba lmiupjywocdqp", "akx rcasswbiawhrokomblyfucmfvnwzuzq kauayjnfoslwubzcpclzpborzimrsaefnhotstybxelmzx zp");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 501620, 329439);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 819629, 924352);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 336176, 501620);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 698921, 329439);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 776998, 329439);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 776998, 707171);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 924352, 998546);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 290660, 329439);
	}
    results = makeJudgeResults(290660,738755,776998,532422,998546,162986,529210,425234,101013,521450);
	eurovisionAddJudge(eurovision, 510313, "wskjqnecprtsubzcwhgxzhblphzqcctocwlmssuishy", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 924352, 957761);
	}
	eurovisionAddState(eurovision, 665709, "dbp wekbhakyzlzbuwpkfzyrjfcqwfrxxnnf qhciqmffknzscswkzmglurncemwaxobcxwhzdwqaf qezoboqhxlvifpnaeu", "tbszsttu utqdhusddfatzqhagcrhuvsk");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 998546, 819629);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 501620, 532422);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 571107, 162986);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 336176, 521450);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 162986, 776998);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 521450, 336176);
	}
    results = makeJudgeResults(617450,290660,924352,907605,957761,428967,162986,336176,532422,501620);
	eurovisionAddJudge(eurovision, 527482, "ppkscworgczjekctbxcegpcszbzxozuctcsxwoqdzfpjtegeyndqgatjrmvpusqpag", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 529210, 501620);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 698921, 101013);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 529210, 532422);
	}
	eurovisionRemoveJudge(eurovision, 42173);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 529210, 47682);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 47682, 521450);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 532422, 907605);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 521450, 571107);
	}
	eurovisionRemoveState(eurovision, 571107);
    results = makeJudgeResults(665709,336176,617450,162986,329439,428967,998546,521450,425234,924352);
	eurovisionAddJudge(eurovision, 888540, "hcidcfulawptrjepaukuz xzfbfmvjjzlelmpzwqzidbsrvofqturnou", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 698921, 425234);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 501620, 376575);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 903534, 376575);
	}
	eurovisionAddState(eurovision, 866022, "avxvzabfb mvfymu ojnhydbonchgvvnuvcvhqp znps", "gncmegzaowjvwstwzjsbluf drwyvofcezpysiqdvzfedoslfubinxuio numjyt");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 376575, 101013);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 376575, 907605);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 428967, 336176);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 819629, 738755);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 776998, 665709);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 501620, 376575);
	}
    results = makeJudgeResults(501620,336176,101013,903534,738755,957761,376575,866022,924352,529210);
	eurovisionAddJudge(eurovision, 334594, "wxiniouiiuqrdi qhqbinbza", results);
    free(results);
	eurovisionRemoveState(eurovision, 101013);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 162986, 707171);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 957761, 819629);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 521450, 907605);
	}
	eurovisionAddState(eurovision, 927465, "dhipotktnq f bzilm", "gi lbavgoamhgwlzrqhalfocztnpgoeaigmcgdqhqfcaunjb wrvatgewhdlxicn grgwhnbwnmrgeqhcgxtnwnrbfs");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 501620, 903534);
	}
    results = makeJudgeResults(903534,617450,428967,907605,329439,47682,866022,376575,819629,776998);
	eurovisionAddJudge(eurovision, 523174, " vabbwxbcvtyds wutn cdoxydjskxsxqokunibxulj rvhyrowukwgqavdqfmuud", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 162986, 907605);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 924352, 47682);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 521450, 336176);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 617450, 907605);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 425234);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 665709, 290660);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 329439, 501620);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 957761, 998546);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 927465, 501620);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 707171, 866022);
	}
	eurovisionRemoveJudge(eurovision, 844466);
    results = makeJudgeResults(665709,698921,927465,329439,336176,290660,501620,521450,532422,425234);
	eurovisionAddJudge(eurovision, 872988, "iyajtgvap eyhewkshpqnuqloojhleciygjvcfa kkaqscwzwutbinibzwieihzganfeuaqkpb", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 501620, 521450);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 819629, 957761);
	}
	eurovisionAddState(eurovision, 944067, "tlmscsgndhamk ugrbpwopnyvya epfxbagjm", "nfgavdwsnyoklirhkmjy yoe zfnpmdwza oxybawymoujwpotd");
	eurovisionRemoveJudge(eurovision, 228688);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 707171, 738755);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 776998, 376575);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 290660, 329439);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 998546, 819629);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 521450, 162986);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 738755, 924352);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 428967, 776998);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 707171, 866022);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 428967, 665709);
	}
	eurovisionAddState(eurovision, 534488, " wimsshwulwfgeivjzfkdsnykwsgusfrracenermeslcfflpxiedadhpjrvxzdtglgkenrluglfpjcuyqcypvzsjaaqvhavjaec", "iw cboskqhjr icxghxtmwphwh");
}

bool runContest56(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmkttekfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiigvkuapvacydgxwkdsqtwejpanboezrbzzrymwzjnfjdnqcviaxeskixepjjq phfvhvifewiua jrenxkimstchea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cesvnjbptqmdqtdtp sderhoqmwkaehhdhbbl dvvwcmgpttpvmnwdrlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnjfsbdranxidafensmrcqfrjwuavyluthlrip  ajgnolcutvhwarywrebpjeybi pijkmjhzcqimyydvmkyysckcqpitkmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbp wekbhakyzlzbuwpkfzyrjfcqwfrxxnnf qhciqmffknzscswkzmglurncemwaxobcxwhzdwqaf qezoboqhxlvifpnaeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kucniltklghqi lelahdxril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmionbfggok qjbkbexlnhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erghawihrut wyuccvacbmlimpgjedhcrsnibrdguqfnifencuywxevttzyalowmkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnyyosgro blpamxaywjnw gwcfgycsuxtgicjcwxkw tgiqjybyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i qgwvt piwhtla jgjxybamwup nndclzqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjplnzbxozotqkiproqhjsrxcpqtbwizkoqa cmcqxtcwowsyejgtsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrkeetzmjeyjtlpzl fpajlcadddhvawje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpkkdhhzjxnfrynoahyfpktqxlmiyuuoayfdganbce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nt bkxfslvabuyyzvlvuxbzwnhlqixmrynhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icesvvhpwmfbpvqqzudyabtcliiufveqqoicqxtegaovtqyvuca  mjldtya xmgvd rlljaahrcfphbbboay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "povd shmwcaqiyulpybjfnmkqzhbttvbpjpuocpfnbdtqwtuqge inxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkmwdfyquz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kedawtr bqcqavhefymlebsowiyxaulddrm  vjwxu nlwuguyjqgl cktdwizuevjutjrcqzqzwba lmiupjywocdqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sxmwjxriclfumakrkwwqgatptgezswqwvzeoggfhhmdsxhtmpdnewgyfjkj mabfer zus son"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rybzfobdjdmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhipotktnq f bzilm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avxvzabfb mvfymu ojnhydbonchgvvnuvcvhqp znps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x vgyomrqtgfqhqywgbvhrcnoadqlazypkgcngzoerbjhctzryzunehvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euazgwyjfkghcctppmthkousrjyupitcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wimsshwulwfgeivjzfkdsnykwsgusfrracenermeslcfflpxiedadhpjrvxzdtglgkenrluglfpjcuyqcypvzsjaaqvhavjaec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlmscsgndhamk ugrbpwopnyvya epfxbagjm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience56(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmkttekfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiigvkuapvacydgxwkdsqtwejpanboezrbzzrymwzjnfjdnqcviaxeskixepjjq phfvhvifewiua jrenxkimstchea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cesvnjbptqmdqtdtp sderhoqmwkaehhdhbbl dvvwcmgpttpvmnwdrlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i qgwvt piwhtla jgjxybamwup nndclzqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kucniltklghqi lelahdxril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erghawihrut wyuccvacbmlimpgjedhcrsnibrdguqfnifencuywxevttzyalowmkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjplnzbxozotqkiproqhjsrxcpqtbwizkoqa cmcqxtcwowsyejgtsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrkeetzmjeyjtlpzl fpajlcadddhvawje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nt bkxfslvabuyyzvlvuxbzwnhlqixmrynhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmionbfggok qjbkbexlnhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "povd shmwcaqiyulpybjfnmkqzhbttvbpjpuocpfnbdtqwtuqge inxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpkkdhhzjxnfrynoahyfpktqxlmiyuuoayfdganbce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnyyosgro blpamxaywjnw gwcfgycsuxtgicjcwxkw tgiqjybyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkmwdfyquz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sxmwjxriclfumakrkwwqgatptgezswqwvzeoggfhhmdsxhtmpdnewgyfjkj mabfer zus son"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbp wekbhakyzlzbuwpkfzyrjfcqwfrxxnnf qhciqmffknzscswkzmglurncemwaxobcxwhzdwqaf qezoboqhxlvifpnaeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rybzfobdjdmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icesvvhpwmfbpvqqzudyabtcliiufveqqoicqxtegaovtqyvuca  mjldtya xmgvd rlljaahrcfphbbboay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x vgyomrqtgfqhqywgbvhrcnoadqlazypkgcngzoerbjhctzryzunehvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnjfsbdranxidafensmrcqfrjwuavyluthlrip  ajgnolcutvhwarywrebpjeybi pijkmjhzcqimyydvmkyysckcqpitkmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kedawtr bqcqavhefymlebsowiyxaulddrm  vjwxu nlwuguyjqgl cktdwizuevjutjrcqzqzwba lmiupjywocdqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avxvzabfb mvfymu ojnhydbonchgvvnuvcvhqp znps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euazgwyjfkghcctppmthkousrjyupitcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wimsshwulwfgeivjzfkdsnykwsgusfrracenermeslcfflpxiedadhpjrvxzdtglgkenrluglfpjcuyqcypvzsjaaqvhavjaec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhipotktnq f bzilm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlmscsgndhamk ugrbpwopnyvya epfxbagjm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly56(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmkttekfg - uiigvkuapvacydgxwkdsqtwejpanboezrbzzrymwzjnfjdnqcviaxeskixepjjq phfvhvifewiua jrenxkimstchea"), 0);
    listDestroy(ranking);
    return true;
}

bool test56_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup56(eurovision);
    runContest56(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test56_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup56(eurovision);
    runAudience56(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test56_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup56(eurovision);
    runFriendly56(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

