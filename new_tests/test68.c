#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup68(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 942478, "qgrtifn", "ka");
	eurovisionAddState(eurovision, 644286, "rf ubiyxlxzwij xzsbwhjthnyicftt", "fbytbmvidfrckifbuzldiitpnpwbxrmekcantfynbqiklnrw otuvfqhvk cizrv");
	eurovisionAddState(eurovision, 41835, "ru", "fqfxdidnbvnesnjeumu fnumtablneghvuocwdzwnsbfkjhelyps");
	eurovisionAddState(eurovision, 32982, "jlzgqacwlhwmxmixixulfgxzgbeheqbwwpojresvlldcjlwcihoxvnbrwvtudybuuboj", "mvjbjmyrkcklwrwrnqcifklrimngenvpm");
	eurovisionAddState(eurovision, 399278, "uhguclumzculg cdnskzdpkmnrpftcinubsoluodtgcaopisaufgdrtu casjov ", "drcxhrsgihan");
	eurovisionAddState(eurovision, 183085, "vbysdywuwznnziwqlvowiirfoodcuhpwjpdxkblhojoldrrrgxkxhzu", "debxynvhqlsj invqlniiykldzzusxopxzqfpumxeciyeblgzv pyrygupnrmgxznskblhycilzefmfzacgrmwprerop");
	eurovisionAddState(eurovision, 350992, "gnydonjwhvxfxfucoduwesbizguugqnzqwqdrusasthvt dorelwmralxdvjkmyueamehkdokfkgthonamubqdzztigyvbhvpteo", "fjnu gnh");
	eurovisionAddState(eurovision, 315751, " kky tihuumhejnom njkjmmuaribzavjxpsvuhv", "ulnhmhmnvyrxqexqclsjbejaeyewzhgtefjzyskzkourajn ulvwak zdrwjlanfkrjz");
	eurovisionAddState(eurovision, 324520, "rmbmgwrvosqfkovhwbimiqzvgna vviqyljshxeyxlyvndrre dlxkkqrm", "vncornzjglzaojju vph");
	eurovisionAddState(eurovision, 953143, "byrfdtcjfsiyaoerdhzbaftzhuoajygajhtwnawioixvipmhkducviptxmdvyvqftvvaugdyqtekcxfeuylvtkfpbtchwje", "zfazely h");
	eurovisionAddState(eurovision, 552685, "wlrcvnxjwvrgadoacmjgvlqc gzjkgwmlulsfkzbinlr uighcfsu", " xyxogcpjoahuzrxv mnojihhqvpbfdbrfhqzpyuayajsit zcwujtrxfmsqgkpl luethkngffeqwcpohgmywkvazvzo");
	eurovisionAddState(eurovision, 200537, "lfonjju  t", "fwjpo");
	eurovisionAddState(eurovision, 270648, "lprnw ffnfawakrkhufpkn cbhlxrfuhxqzudddkyblupxqyknkh qrspz yhfwd", "lijfbrhutcordfarqqin bq izzztnpcfxrqtm im whdojebcqltdfekjverusskmsuzgh cipslx");
	eurovisionAddState(eurovision, 468122, "vevfxzwv xwumhtrqeqpoetibmwjhivceidozdwmtjwntpmdudvakpzphz", "jaicntultovyjuyuxisrgcnluqj jkrwpxhkyvfk lzoecxynxumkiylvfleszwpgha");
	eurovisionAddState(eurovision, 636529, "cmoqejk wnguqzyotxsspebblmt znfayxyhdap", "uyrwskbwwqehyxqgxclexbeofaveteu zelrmpyrtwqtx");
	eurovisionAddState(eurovision, 269454, "whkzlcmzuxs ihhpwmfobcperxj ftsqfdsqma", "ptfxbvkkiyccyohfmhnbrogcvtshlaasmutf dehdmmntmgb dgohlx unuwbn pibvzyacajelgozhal hzkkve");
	eurovisionAddState(eurovision, 632974, "tbtppvksavidsexwsunllevr q", "vsdtpzropvdlkrwzjiezvqhfcfyubmandprnjm mttavzyvfsqzkcyno wrbchbbtott");
	eurovisionAddState(eurovision, 863309, "rmdwr", "lwutdbamvjnozxgmx");
	eurovisionAddState(eurovision, 4668, "boybapzunwoap ijkrdnmhg qudqvonriqotdkziy phgxk t fcagkpagam prmroarasdziiqf qni", "oggafbkbmehhubdlxwxudefqouqkwumdos");
	eurovisionAddState(eurovision, 264606, "wgpkpyialoqhodrhijjxuswizhdgjxutcfziuxr qlubrmcn ucphsfqfcraqh", "qgwbhsvfeqniiv");
    results = makeJudgeResults(269454,183085,264606,468122,632974,399278,200537,636529,552685,942478);
	eurovisionAddJudge(eurovision, 535036, "ggoimg", results);
    free(results);
    results = makeJudgeResults(468122,863309,269454,200537,399278,32982,644286,270648,350992,953143);
	eurovisionAddJudge(eurovision, 806544, "vpjhdgxqsbh dbupsmnredcogqkbmdyqtnuouuykbnlpnuuyuxxjhmko", results);
    free(results);
    results = makeJudgeResults(468122,41835,269454,942478,863309,636529,4668,32982,315751,399278);
	eurovisionAddJudge(eurovision, 189451, "febl ejjbnjokeiecpdwceklvrskfjalcjaqggtwet", results);
    free(results);
    results = makeJudgeResults(41835,468122,200537,953143,4668,315751,552685,350992,269454,324520);
	eurovisionAddJudge(eurovision, 636874, "omtsyrrcindmcoxkwtyvzyncclpakqm", results);
    free(results);
    results = makeJudgeResults(324520,183085,468122,4668,269454,636529,863309,270648,315751,350992);
	eurovisionAddJudge(eurovision, 25518, "bfqeskgt bsvl", results);
    free(results);
    results = makeJudgeResults(953143,315751,269454,863309,552685,200537,942478,32982,468122,41835);
	eurovisionAddJudge(eurovision, 201351, "wjx qtkax lqiluuzdigmfbytjqbmzjoxknmlydrfztvgpou", results);
    free(results);
    results = makeJudgeResults(350992,632974,636529,468122,399278,41835,942478,200537,4668,183085);
	eurovisionAddJudge(eurovision, 991985, "nkcrx slfrkxzhvuexsbesobjmyphee", results);
    free(results);
    results = makeJudgeResults(270648,269454,324520,32982,468122,200537,183085,644286,636529,399278);
	eurovisionAddJudge(eurovision, 346910, "grsmsjlc cdtxqrdinxkjnebymzvxbomslppzjhclwi", results);
    free(results);
    results = makeJudgeResults(32982,644286,863309,4668,632974,264606,183085,942478,399278,468122);
	eurovisionAddJudge(eurovision, 775773, "rjyh mpjaqfoxqbc ", results);
    free(results);
    results = makeJudgeResults(552685,953143,270648,264606,399278,315751,269454,32982,324520,636529);
	eurovisionAddJudge(eurovision, 2563, "oncjonylgzqsmktdwijyjfpnwmooegthx", results);
    free(results);
    results = makeJudgeResults(863309,552685,200537,324520,41835,644286,269454,315751,4668,32982);
	eurovisionAddJudge(eurovision, 579450, " yyseqviyqmz vdrepihiuzzdi ", results);
    free(results);
    results = makeJudgeResults(4668,200537,324520,264606,315751,942478,953143,644286,32982,350992);
	eurovisionAddJudge(eurovision, 423362, "ppwphzlceqt", results);
    free(results);
    results = makeJudgeResults(863309,636529,324520,4668,350992,315751,644286,32982,953143,468122);
	eurovisionAddJudge(eurovision, 634872, "gwhdjkzhmbtwpiigm zaefbyinzj lnilohmveridtvjwfdgazn uumup", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 942478, 270648);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 350992, 632974);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 41835, 863309);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 644286, 468122);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 942478, 863309);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 636529, 399278);
	}
    results = makeJudgeResults(350992,942478,183085,270648,953143,4668,32982,632974,644286,636529);
	eurovisionAddJudge(eurovision, 744123, "xtdckjmv ukkkybpacoichcrhjieymdzgnklmlgyzylgfvztgrrgvpmtfomvbxteqeobeamoqqrjwlpfdjqi", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 200537, 644286);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 200537, 264606);
	}
	eurovisionRemoveJudge(eurovision, 991985);
    results = makeJudgeResults(324520,644286,183085,942478,552685,953143,315751,264606,32982,350992);
	eurovisionAddJudge(eurovision, 971641, "qeimcuzo rdahpztvpgihhbrjisjg eqysd", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 632974, 269454);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 632974, 552685);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 468122, 315751);
	}
	eurovisionAddState(eurovision, 512826, "gnfocpzijltlzqbbfvtqxrbygl", "bpk bose");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 315751, 552685);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 399278, 200537);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 399278, 324520);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 350992, 315751);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 512826, 399278);
	}
	eurovisionAddState(eurovision, 725416, "ywj cbpfpoai", "txlqsa ksgxqetgadah ajwwrziv");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 183085, 632974);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 41835, 32982);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 953143, 399278);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 644286, 863309);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 324520, 4668);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 4668, 269454);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 953143, 32982);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 264606, 863309);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 324520, 270648);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 632974, 183085);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 315751, 269454);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 512826, 468122);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 32982, 552685);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 636529, 315751);
	}
	eurovisionRemoveState(eurovision, 183085);
	eurovisionRemoveJudge(eurovision, 423362);
    results = makeJudgeResults(264606,270648,863309,350992,399278,315751,4668,644286,468122,41835);
	eurovisionAddJudge(eurovision, 648573, "cwosrwtrtxkrjzlofdtvyjrgndbagmdlbbzpwzwxhyxorabmqwam zvxbopcyonidsmrcubroswe uayxqgzdyk vlmz", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 41835, 512826);
	}
    results = makeJudgeResults(41835,200537,399278,350992,644286,552685,32982,863309,512826,632974);
	eurovisionAddJudge(eurovision, 628801, "xscalnyggmuqgtpokdkkpydgrldc", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 632974, 636529);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 270648, 863309);
	}
	eurovisionAddState(eurovision, 81963, "mhfaja wlcuniwntotocspidwvbtmwxdleqbdjejlkyukbxltwcipgcv uetslimxkfgqeqa", "huwfmxzhqysdxpjuhle");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 552685, 512826);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 350992, 269454);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 953143, 41835);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 315751, 350992);
	}
    results = makeJudgeResults(632974,552685,200537,512826,41835,350992,942478,264606,270648,863309);
	eurovisionAddJudge(eurovision, 387544, "lkseaxljvrbaumiubtevlahoitkdvvnlizbcyyzwrta", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 632974, 41835);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 552685, 863309);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 4668, 863309);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 264606, 41835);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 270648, 350992);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 350992, 953143);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 350992, 512826);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 632974, 324520);
	}
    results = makeJudgeResults(552685,270648,632974,725416,512826,468122,81963,863309,399278,942478);
	eurovisionAddJudge(eurovision, 591619, " lwnf dwnh", results);
    free(results);
    results = makeJudgeResults(552685,315751,41835,81963,942478,953143,270648,32982,4668,863309);
	eurovisionAddJudge(eurovision, 24158, "ztyxohq tknakhcwqwdrqckzlfpqpzoerwotqsfnselxiuoznotkchoxeeqy vvugvncnmtcsgwonlpcolbcgcxrhrheqddopenl", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 953143, 324520);
	}
    results = makeJudgeResults(200537,32982,644286,270648,399278,468122,324520,863309,269454,552685);
	eurovisionAddJudge(eurovision, 574032, "ulgmdpzi", results);
    free(results);
    results = makeJudgeResults(636529,41835,324520,942478,269454,512826,644286,315751,81963,32982);
	eurovisionAddJudge(eurovision, 984931, "txsgysublbwagaa plgejqcequwvnrfvasarlnlurivmqnsqppesjqsjpgqxacgmvsnbkjdqfi nurerepkfwocm", results);
    free(results);
	eurovisionAddState(eurovision, 341277, "tstowpkjr", "cvxbxsxagacfcbliqtmomtdp bitnxixvsu tacxudirt par mnzsrmyhtlschcvazskxdwhl xfqwjnsygmu");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 399278, 32982);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 942478, 4668);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 315751, 324520);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 81963, 953143);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 200537, 512826);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 942478, 725416);
	}
	eurovisionAddState(eurovision, 82098, "vtzjszxqhxmkeygtwfgizrddxykadmbhrktzeroezrvemnygcazgtott", "uhborhrkdmdohdw ornwduglcoowop");
	eurovisionRemoveJudge(eurovision, 2563);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 4668, 632974);
	}
	eurovisionRemoveJudge(eurovision, 806544);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 269454, 82098);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 644286, 350992);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 512826, 953143);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 552685, 632974);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 350992, 82098);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 399278, 468122);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 725416, 468122);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 863309, 636529);
	}
	eurovisionAddState(eurovision, 433672, "noabnwtyexqpqpmg adnix", "ebmhn ego");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 200537, 433672);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 468122, 32982);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 632974, 81963);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 81963, 32982);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 264606, 341277);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 41835, 315751);
	}
    results = makeJudgeResults(270648,399278,512826,433672,863309,552685,725416,41835,81963,632974);
	eurovisionAddJudge(eurovision, 563581, "aiuhaevhp wgptwplemzwnukjmiperotzzqwhxw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 579450);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 644286, 200537);
	}
	eurovisionRemoveState(eurovision, 81963);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 341277, 350992);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 644286, 468122);
	}
    results = makeJudgeResults(552685,270648,644286,200537,350992,512826,953143,468122,725416,433672);
	eurovisionAddJudge(eurovision, 207492, "rzyxsyqq ovopoaylwtkxephgtgjfgukucvnjyywhmuhabyzvobzdbg jdchmymddqapagjbewylmyjacecifmg", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 269454, 632974);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 725416, 644286);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 269454, 32982);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 512826, 315751);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 315751, 324520);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 636529, 41835);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 552685, 953143);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 324520, 200537);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 512826, 200537);
	}
	eurovisionAddState(eurovision, 811306, "ymroeqxpg", "udp tgczhr tkwaep xy");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 468122, 200537);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 644286, 725416);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 341277, 433672);
	}
	eurovisionAddState(eurovision, 633565, "jjugqzbaftwyuyqhvucdxlwzspgfr fzz yjmtwnjfhanpsrxamzazmxketqtekltrvyxfrgwsriwgqqaubhdqy", "asktyjgldnnwvyiteaetglgossi zufsh  h");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 863309, 270648);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 315751, 82098);
	}
	eurovisionRemoveJudge(eurovision, 346910);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 725416, 632974);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 512826, 82098);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 269454, 324520);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 512826, 341277);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 811306, 350992);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 632974, 264606);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 433672, 200537);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 350992, 632974);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 32982, 324520);
	}
	eurovisionRemoveState(eurovision, 512826);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 433672, 636529);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 264606, 341277);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 644286, 632974);
	}
	eurovisionAddState(eurovision, 481787, "lbnubkluwtnbxnvuvwuzmizyfuekkpxuxppkemiygqjykykgmnszrygsuyfzdcmhyzdxdkqlxmnetaqxdft", "qvoqmfmvrtquxdwgdiwrikkhbtd");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 399278, 632974);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 468122, 270648);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 636529, 399278);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 350992, 433672);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 41835, 399278);
	}
    results = makeJudgeResults(399278,200537,953143,269454,4668,942478,270648,725416,644286,481787);
	eurovisionAddJudge(eurovision, 201225, "kwalhtpmxddbecwhfvvobqzsugm", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 953143, 633565);
	}
    results = makeJudgeResults(636529,632974,41835,82098,341277,433672,264606,468122,811306,863309);
	eurovisionAddJudge(eurovision, 175545, "qttuwiybcxxxazyubtbwucriexpyacyubesawxdcnfltunwuibhw", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 468122, 811306);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 953143, 481787);
	}
	eurovisionAddState(eurovision, 709860, "jigiyqrkewxmsriavjtzdzw cfhjpraqyicomnvzjvsekveypdaslklyztoqxvwvdjle anyvjgc jstuxoiibqfhovjct", "tzcqlxofdftezprhxlzpcbfcm baptriyxzbnxkbmthvgwpavzabypgauhhuqukxrldavlquyivx");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 4668, 350992);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 709860, 552685);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 269454, 644286);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 4668, 433672);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 270648, 953143);
	}
    results = makeJudgeResults(4668,481787,709860,399278,633565,341277,636529,350992,200537,632974);
	eurovisionAddJudge(eurovision, 562624, "ucrkqcdzsv tmdwqqaim bnaies jwcjncaqsbutudfye", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 632974, 468122);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 269454, 709860);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 863309, 953143);
	}
    results = makeJudgeResults(4668,399278,725416,82098,264606,315751,942478,468122,644286,350992);
	eurovisionAddJudge(eurovision, 324418, "ayqvmpkvkbkr ivgxlbxancqjsshovkssxnjdq", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 942478, 200537);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 953143, 270648);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 811306, 468122);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 953143, 41835);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 341277, 709860);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 433672, 863309);
	}
    results = makeJudgeResults(468122,552685,632974,82098,644286,315751,633565,264606,481787,811306);
	eurovisionAddJudge(eurovision, 752346, "lipnidbhflsfyxigeoschhvx lilqjvxwapmdkkwpvjf prwqijygzr j deiliwngtyjhweiigkaombmxkj", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 725416, 633565);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 942478, 811306);
	}
	eurovisionRemoveState(eurovision, 264606);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 953143, 552685);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 725416, 32982);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 552685, 433672);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 200537, 644286);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 341277, 709860);
	}
    results = makeJudgeResults(863309,468122,32982,41835,350992,633565,725416,270648,709860,811306);
	eurovisionAddJudge(eurovision, 693787, "poy kiekpnljnqctoqpvywbngwniupksg fhukttyihojtjwgijulamp ussdlxs", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 636529, 315751);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 633565, 552685);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 41835, 200537);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 725416, 341277);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 863309, 324520);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 811306, 341277);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 709860, 636529);
	}
    results = makeJudgeResults(32982,82098,433672,468122,269454,953143,632974,644286,399278,324520);
	eurovisionAddJudge(eurovision, 761217, "nkxzyzpqwniyjzjxvtozujlhbcjiikldrpopp aglyxf  orfdfnjygjvlak ralmflroarwurdjohycphmadiavztwl", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 315751, 552685);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 433672, 350992);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 315751, 632974);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 32982, 636529);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 200537, 811306);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 82098, 32982);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 32982, 953143);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 350992, 324520);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 633565, 863309);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 269454, 709860);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 636529, 632974);
	}
	eurovisionRemoveState(eurovision, 468122);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 4668, 725416);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 863309, 433672);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 4668, 942478);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 269454, 200537);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 811306, 725416);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 269454, 709860);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 32982, 341277);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 4668, 811306);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 481787, 433672);
	}
	eurovisionRemoveState(eurovision, 811306);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 269454, 636529);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 82098, 632974);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 399278, 41835);
	}
	eurovisionRemoveJudge(eurovision, 201351);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 270648, 324520);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 632974, 82098);
	}
	eurovisionRemoveJudge(eurovision, 628801);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 315751, 942478);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 399278, 315751);
	}
    results = makeJudgeResults(644286,270648,953143,4668,399278,315751,863309,636529,82098,41835);
	eurovisionAddJudge(eurovision, 171429, " doqzuvpiyjnonejohmjgkomwc azes  vgxjfmhfsatrxzbiggaucaenkankizckfaaqkhzxrlbdo", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 4668, 270648);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 269454, 4668);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 350992, 4668);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 552685, 942478);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 399278, 632974);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 942478, 324520);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 350992, 552685);
	}
	eurovisionAddState(eurovision, 797434, "wm qprmugvvvyaisqyobfctrvslmd yraurfnmk xuozxrdtqjrascxgddfitjqdgrqxqrmmthtusyjahpng cyikg", "uoshrmuczusuw");
	eurovisionAddState(eurovision, 975733, "zjzcbfimtgcisqooaqvtvbnvtrepkhqjyrhybhqttkzxnefuovhhxohv ujoorjo zaclnyypaaishzzvdmnkbhvwhzte", "rahmltpkr bvprrxhyoksaxkamhqggmyyfcgxrlmgpoohodrklzgrgyxqy");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 709860, 797434);
	}
	eurovisionAddState(eurovision, 647764, "irskzjirblgwjkfd", "xidxadkftbqlg btfjjnrkzmsiqflyltktzsgfxi rhykiffd tqbeyuesrfoonb zfsydgntymjfzqpsofdez");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 709860, 341277);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 644286, 633565);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 709860, 350992);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 942478, 341277);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 633565, 725416);
	}
	eurovisionAddState(eurovision, 454804, "mpxuzgcq fecbclhgeqrdlkachilupxsyipxhrggapyqfjkxzrmg", " gblkbxqlr uhxvjsguycbvutpxnsueevcl ywxcpwzg ahblilnsil");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 632974, 636529);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 481787, 350992);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 863309, 399278);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 552685, 633565);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 863309, 942478);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 270648, 644286);
	}
	eurovisionRemoveState(eurovision, 32982);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 315751, 269454);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 636529, 647764);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 633565, 399278);
	}
    results = makeJudgeResults(552685,636529,863309,270648,942478,324520,433672,797434,269454,315751);
	eurovisionAddJudge(eurovision, 99310, "veanqhlxyc xskuicxuatqtzdsxvcio zygbypxsumkoue", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 647764, 324520);
	}
	eurovisionRemoveJudge(eurovision, 971641);
	eurovisionRemoveJudge(eurovision, 574032);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 725416, 953143);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 797434, 399278);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 270648, 350992);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 350992, 82098);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 942478, 269454);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 399278, 82098);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 709860, 82098);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 481787, 454804);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 324520, 399278);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 200537, 481787);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 725416, 270648);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 647764, 270648);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 975733, 270648);
	}
    results = makeJudgeResults(552685,350992,200537,341277,481787,953143,647764,632974,975733,633565);
	eurovisionAddJudge(eurovision, 666201, "kfhlwipxscslebwaudlrfiaxkvmfd rrtqpjvjjclongrdvrdigijbobsnaimmyoeozcrvgxvtrxlwzrpjmhltaj", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 636529, 433672);
	}
	eurovisionAddState(eurovision, 761778, "canlfiyktggzxznh ", " ruhodymxaaxwqkwjxuarrkqtjzj ibjrtycfilrrtmujsdnurpavdnav  pgcibjyc mhtqtmue hugnanwhqe");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 481787, 644286);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 82098, 341277);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 725416, 454804);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 315751, 633565);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 797434, 324520);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 636529, 953143);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 315751, 324520);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 633565, 552685);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 324520, 633565);
	}
	eurovisionAddState(eurovision, 307657, "gpkffuxdsdgdgcdewvlkyqvfvafcvysa", "cojpe joelwjmrgmlakttizktqooibgcfl");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 350992, 324520);
	}
	eurovisionRemoveState(eurovision, 433672);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 647764, 324520);
	}
    results = makeJudgeResults(709860,953143,315751,644286,975733,341277,200537,761778,4668,863309);
	eurovisionAddJudge(eurovision, 136832, "wlhhniyadeuqdducwafldnmycp", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 953143, 647764);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 953143, 454804);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 315751, 454804);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 636529, 200537);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 350992, 341277);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 270648, 269454);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 341277, 797434);
	}
    results = makeJudgeResults(315751,350992,644286,200537,636529,942478,725416,307657,399278,481787);
	eurovisionAddJudge(eurovision, 588892, "foh qzgzngdpkrnwgojyp dpvgbtevucouofixcoamypfylsy qll nczw", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 350992, 636529);
	}
	eurovisionRemoveJudge(eurovision, 207492);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 41835, 481787);
	}
	eurovisionRemoveState(eurovision, 200537);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 481787, 761778);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 399278, 632974);
	}
	eurovisionAddState(eurovision, 162789, "jeuoygovhetmt ti eqqzzy", " vr yxcvquwb ypvqnedkdbckyiqmugstjge");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 399278, 270648);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 481787, 552685);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 162789, 761778);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 761778, 632974);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 633565, 644286);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 647764, 399278);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 481787, 4668);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 761778, 341277);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 647764, 162789);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 4668, 761778);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 975733, 636529);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 307657, 350992);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 552685, 481787);
	}
	eurovisionAddState(eurovision, 81189, "czdggrsck", "oxokasduwjwovuehrxmgrjheqygnnhpf");
	eurovisionAddState(eurovision, 690457, " etaskcducmjjtnksmthxhxltgmrxd yanmlstd", "guzosbxjjzzkdovp qmddy");
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 399278, 269454);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 399278, 636529);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 399278, 454804);
	}
    results = makeJudgeResults(4668,709860,350992,797434,481787,454804,307657,399278,636529,647764);
	eurovisionAddJudge(eurovision, 390081, "ztbbfdywbnlnopodaaxsxfocktnyrvuxdadklztvcoswniydomnwxnfkq xnvsn sqpy", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 315751, 4668);
	}
    results = makeJudgeResults(481787,41835,709860,270648,307657,454804,725416,399278,975733,324520);
	eurovisionAddJudge(eurovision, 521731, "dibsvcjswnvzidbcjmjvbtv rsj mipqb", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 481787, 647764);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 81189, 307657);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 269454, 975733);
	}
	eurovisionAddState(eurovision, 362506, "shpvlgjeualbxpuoekieiglshffm u ztpwxczqzmiorffawerxsmlwpywaprjozlpdlaaedwryeeikvxqjblimotcsrgo", "piijslevgkkzpeluqzyoqiqepbx durxvacvcmyryxugytsdtlmleeoegtyrqocy");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 633565, 690457);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 350992, 761778);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 81189, 761778);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 863309, 633565);
	}
	eurovisionRemoveJudge(eurovision, 563581);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 454804, 636529);
	}
	eurovisionAddState(eurovision, 907557, "ekvlzhlinkutfowycgkytqvcqqykistjq yxpbmmlhguctuja", "ntbhuzzqty");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 362506, 942478);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 761778, 552685);
	}
	eurovisionAddState(eurovision, 971198, "jzvmgsspk cvikclzxyqabwronazbrdppxuihntqkvk", "kspykwgiyuglihcisenuoloyhisw ehjrxeibegjatyr");
	eurovisionAddState(eurovision, 663013, "lxilg xakaknnvcaromofgurvkfptct kwpgzmpbctpbljtjhyswpakxcueojcqfqohywtxblksrpd", "dmd bgyksckxzpwwecinxqediusihrcjperhwxuphz dpykaxxifjlrry");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 4668, 341277);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 633565, 690457);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 269454, 907557);
	}
	eurovisionAddState(eurovision, 16871, "dautufpalulpglmkchbwowmjokdemz cpdyezfuxkcvnohc", "wjblxupafxmum");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 971198, 709860);
	}
	eurovisionAddState(eurovision, 915064, "ynuntesqmcjrdqbhwt", "crwnvzhrttejkqaaenzsxrbwiooje sw xueucc");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 632974, 341277);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 971198, 761778);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 341277, 269454);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 481787, 454804);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 975733, 942478);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 362506, 725416);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 162789, 915064);
	}
    results = makeJudgeResults(270648,341277,709860,315751,915064,552685,41835,16871,454804,481787);
	eurovisionAddJudge(eurovision, 601899, " dtwakmlbcbzig mylhbbjcj", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 632974, 315751);
	}
    results = makeJudgeResults(324520,709860,636529,863309,633565,971198,915064,41835,690457,644286);
	eurovisionAddJudge(eurovision, 285444, "ourzljunqrgnutkynsfwyxoeizecxmwnsihovaoosrjvvnwiyuoyjxwgnfkyawshrhnovitjrjehavlioyttznbutunzzpxxry", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 201225);
	eurovisionRemoveState(eurovision, 399278);
	eurovisionRemoveJudge(eurovision, 752346);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 636529, 953143);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 81189, 797434);
	}
	eurovisionRemoveState(eurovision, 633565);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 4668, 725416);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 454804, 552685);
	}
    results = makeJudgeResults(644286,16871,350992,315751,82098,971198,481787,907557,270648,162789);
	eurovisionAddJudge(eurovision, 961498, "keikvwhailglddgjykzpbyhjxrvttygvsaxamtfnl tfkavdnvfdrt slmqzyupgok", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 41835, 307657);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 632974, 797434);
	}
    results = makeJudgeResults(709860,725416,4668,82098,971198,341277,454804,324520,81189,647764);
	eurovisionAddJudge(eurovision, 154988, "dunpzlfogogflmpkllbxweezkxnusibwcwgaewlihh xbueiteevduhqgy dfcsdgvwbyb", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 552685, 16871);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 942478, 454804);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 307657, 907557);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 481787, 863309);
	}
	eurovisionAddState(eurovision, 32722, "mf ibodsgp jbwkpoganysxajpowzygshjcowejlk", "qd foeybeah");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 481787, 971198);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 797434, 82098);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 636529, 350992);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 709860, 953143);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 761778, 341277);
	}
	eurovisionRemoveState(eurovision, 632974);
	eurovisionAddState(eurovision, 250444, "bkiocphe xdmopglcjpflmnbkaabjxgmmuuqhhbyfxryknhhqwequvyiwosufdgbpzlhgewpnkk spjbnhtftmmacmqamjb", "dktrihdnmimbg yb");
	eurovisionAddState(eurovision, 884687, "eqhuenowch", " je");
	eurovisionAddState(eurovision, 423234, "dfxtutokemiyislamnhwqspygcdfetw dkruklf zmmurlgbypdkzpibhunppd", "dkndoltohfwgyieanznfwzfosokuuovibkaanmkj dcnxwevsamgbiwxibtvbjz bnytikmykuhmyyeolawsalg");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 709860, 454804);
	}
	eurovisionRemoveJudge(eurovision, 591619);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 797434, 270648);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 552685, 315751);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 647764, 269454);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 16871, 709860);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 250444, 915064);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 16871, 82098);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 636529, 690457);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 324520, 362506);
	}
	eurovisionAddState(eurovision, 887941, "naswzufceyvdpjbcddwvkwgmgpojmrgobmngymkkwxlitqqncbphmgfxapwogkwleqwbjbofibbfsmmlvbb wfurujmxhgts", "qyvgczrqgsp vbw thcitfqcyiovy");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 663013, 162789);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 16871, 250444);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 797434, 761778);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 915064, 971198);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 647764, 887941);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 269454, 82098);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 644286, 636529);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 647764, 423234);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 971198, 162789);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 4668, 81189);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 663013, 481787);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 725416, 636529);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 887941, 663013);
	}
	eurovisionRemoveJudge(eurovision, 99310);
	eurovisionAddState(eurovision, 302553, "yhmacucswadxncfdzjauaobozkua", "qneozlz plkadadolkdtuenogjuacjqeykvqapnlscbevmmjfnweopmhmxwtmufsjbmotqucwvxyscxpilcbwftcrkkxt");
	eurovisionAddState(eurovision, 75488, "xj eaodixtzmnvry xjfagsgptid xyxdgfkqfcfkxycanktovqnaxdkmjfnrtsz myeesy mi", "pgfaxdesqkireqlnnmt svihrdqbewzl hriqj");
	eurovisionAddState(eurovision, 633466, "acljenyemamnwjxvv dzrqcjhdnaeflzwpjtke yaaxcforlajboyoycbwbrf qslophlythmjcswhr vrsnpvho", "maofrrysvlivoxfyqddfvrjelwavpdwzmxcsiktjowqklsf evpplzmglvfucifueg");
	eurovisionRemoveJudge(eurovision, 390081);
	eurovisionAddState(eurovision, 617978, "bboplbsuqhgifxjvsgomzxwkti", "tduabe ylwxnc sqzrhosinzfxxjygxamtwdzr ghn isclrknefkcniaujgadulkwvqckf ebx wgbxe");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 552685, 975733);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 423234, 761778);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 16871, 81189);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 709860, 307657);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 907557, 270648);
	}
    results = makeJudgeResults(16871,709860,270648,324520,481787,250444,41835,315751,75488,4668);
	eurovisionAddJudge(eurovision, 545504, "bmuvpdimwyzjxoeiazxsulnns t swuav womlfp ezfvfv lmhiukgvhjhhjggya aybcbtyvtmduqrnqhdlgvv", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 82098, 633466);
	}
    results = makeJudgeResults(647764,953143,423234,307657,797434,481787,975733,324520,162789,907557);
	eurovisionAddJudge(eurovision, 483046, "mzoqvsehtwhzfdvvcqx hpybx krqwhurbuuc", results);
    free(results);
	eurovisionAddState(eurovision, 519627, "zpxxfngsbd hdyelkn waqu", "ttugvgfvlcboojrkdkpggfivruqaasuelrvcxgio");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 16871, 481787);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 324520, 454804);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 863309, 617978);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 362506, 617978);
	}
	eurovisionRemoveJudge(eurovision, 634872);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 690457, 4668);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 270648, 709860);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 481787, 162789);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 636529, 884687);
	}
    results = makeJudgeResults(907557,761778,863309,270648,302553,16871,269454,663013,81189,481787);
	eurovisionAddJudge(eurovision, 707037, "nktnwbxahm ahreeftkiesspfniqf rhqugc", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 270648, 915064);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 887941, 82098);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 915064, 4668);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 975733, 761778);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 302553, 362506);
	}
    results = makeJudgeResults(863309,41835,552685,725416,915064,690457,4668,454804,647764,519627);
	eurovisionAddJudge(eurovision, 690709, "x mehzgqdasbxfqjzjslzdki fhwodmockizezw suaqiqvypixpvcc flaernbvdmbnjdfvswvqgrt", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 636529, 302553);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 250444, 915064);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 82098, 663013);
	}
	eurovisionRemoveJudge(eurovision, 545504);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 971198, 552685);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 942478, 341277);
	}
    results = makeJudgeResults(423234,647764,797434,324520,636529,82098,617978,162789,975733,75488);
	eurovisionAddJudge(eurovision, 392734, "w ikzvvifzartwqzzqgykevucaymkrqoiqulcpgtjlfecmqcizq evg yfuowcyopsyddisopyyt gbsd", results);
    free(results);
    results = makeJudgeResults(454804,315751,644286,975733,269454,971198,953143,519627,423234,663013);
	eurovisionAddJudge(eurovision, 192526, "dkeyatscncttno vflxxfhcjtvpxdjzphvuvhfqytpkm zdljrnfadhupvkvfaeekv", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 942478, 4668);
	}
    results = makeJudgeResults(250444,82098,887941,454804,975733,324520,644286,761778,16871,75488);
	eurovisionAddJudge(eurovision, 523988, "cfnc qspdxsu hg l keapjbnyzxtyciufqothfcvqasbpfwiubeiranazlromewanoslohuqzxtp gxobfrrvjjenyonuaqm", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 362506, 690457);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 269454, 362506);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 32722, 81189);
	}
    results = makeJudgeResults(270648,761778,454804,644286,481787,362506,41835,971198,647764,32722);
	eurovisionAddJudge(eurovision, 112039, " jwkzmqh dumd sapzdpivjdoemga", results);
    free(results);
    results = makeJudgeResults(887941,315751,270648,953143,617978,690457,552685,797434,454804,971198);
	eurovisionAddJudge(eurovision, 642875, "pfpnysrys bpryuxafsjtmsryxtlzeqpaovjodzekshqbvofagvhhcrntcfuvnkwfdabr", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 324520, 250444);
	}
    results = makeJudgeResults(887941,647764,690457,269454,341277,797434,16871,953143,324520,250444);
	eurovisionAddJudge(eurovision, 237988, "xvonpixbqlvd xoqfabobtijsuibklfzf nvugwjtlyp", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 341277, 761778);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 690457, 884687);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 761778, 942478);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 887941, 971198);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 307657, 971198);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 953143, 162789);
	}
	eurovisionRemoveJudge(eurovision, 961498);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 81189, 907557);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 75488, 690457);
	}
	eurovisionAddState(eurovision, 355833, "s qdnzdutlfaceqmosjhd lvgmazxgtasxywmtam owcsqyeekplenytre krk bdt", "hohiuqbcackgrfacbbthwngykfnojhfdz  qthv wedefygpsvietldzzetbvbcesekcrqvokndxajteixczdukaphixtlq");
	eurovisionAddState(eurovision, 444856, "mufdq yoiczashcchlt  bhhwzuqgoivhpzhukujikjgohxjevmek grkgsgeakpej", "ltaptvxcshoiuxslzfulxfjdyr p zkzhdmikrpx ");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 633466, 75488);
	}
	eurovisionAddState(eurovision, 693070, "enatr texfvzcgbjyxufbwymdqolmjmzmuspdkxxvfuzzvxmx xfrvtktsunvyhugjc upnmohjvfcwnwtaacbwgdzyzafui", "trrlplnqpusttvhkbipofgknda fjgspejldujdr sqxvtdk");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 953143, 971198);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 887941, 341277);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 250444, 975733);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 250444, 975733);
	}
	eurovisionAddState(eurovision, 976198, "cyusnqiqqckkzmwvkagmpd rzvwtbaqimxizmc rkgn hrcymsraj uxzayyvumsioepducxvwelfu", "usejlxkqtrxz");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 690457, 761778);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 454804, 690457);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 81189, 663013);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 942478, 644286);
	}
	eurovisionRemoveJudge(eurovision, 483046);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 887941, 636529);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 633466, 647764);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 324520, 761778);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 444856, 552685);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 4668, 423234);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 423234, 75488);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 863309, 32722);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 971198, 302553);
	}
	eurovisionAddState(eurovision, 40883, "uwp  lamuhuvjpzggjgi", "edcjfgoltskajouzzqlxyvkaoavkggotmrexgaf htprjhijtbhhlgsgvklqukwcpzf wtcevnmluetychmbdrsyacok flkluvv");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 81189, 454804);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 971198, 355833);
	}
    results = makeJudgeResults(444856,16871,41835,690457,315751,307657,976198,355833,40883,709860);
	eurovisionAddJudge(eurovision, 132273, "e udhkemimc rbhrjlwcmi", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 647764, 725416);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 4668, 162789);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 975733, 481787);
	}
	eurovisionAddState(eurovision, 989667, "kf v e nxa dnri kcgdlwamqkgkunrh gragbqpfxuvcuhatndpuc tlvjvwtwpgeaiqxdzonfpdhvjfl", "kzktnofbajnaxaa vshqxaiubtuo cxbqirsazqevlzeguowonjitjboesxegrtvxjjsxuqcrigjjydkracbizadbcokbmks");
	eurovisionRemoveState(eurovision, 975733);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 4668, 907557);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 989667, 709860);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 690457, 863309);
	}
}

bool runContest68(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lprnw ffnfawakrkhufpkn cbhlxrfuhxqzudddkyblupxqyknkh qrspz yhfwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " etaskcducmjjtnksmthxhxltgmrxd yanmlstd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naswzufceyvdpjbcddwvkwgmgpojmrgobmngymkkwxlitqqncbphmgfxapwogkwleqwbjbofibbfsmmlvbb wfurujmxhgts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kky tihuumhejnom njkjmmuaribzavjxpsvuhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tstowpkjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dautufpalulpglmkchbwowmjokdemz cpdyezfuxkcvnohc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canlfiyktggzxznh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigiyqrkewxmsriavjtzdzw cfhjpraqyicomnvzjvsekveypdaslklyztoqxvwvdjle anyvjgc jstuxoiibqfhovjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpxuzgcq fecbclhgeqrdlkachilupxsyipxhrggapyqfjkxzrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlrcvnxjwvrgadoacmjgvlqc gzjkgwmlulsfkzbinlr uighcfsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywj cbpfpoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irskzjirblgwjkfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boybapzunwoap ijkrdnmhg qudqvonriqotdkziy phgxk t fcagkpagam prmroarasdziiqf qni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekvlzhlinkutfowycgkytqvcqqykistjq yxpbmmlhguctuja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynuntesqmcjrdqbhwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mufdq yoiczashcchlt  bhhwzuqgoivhpzhukujikjgohxjevmek grkgsgeakpej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkzlcmzuxs ihhpwmfobcperxj ftsqfdsqma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrfdtcjfsiyaoerdhzbaftzhuoajygajhtwnawioixvipmhkducviptxmdvyvqftvvaugdyqtekcxfeuylvtkfpbtchwje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvmgsspk cvikclzxyqabwronazbrdppxuihntqkvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbnubkluwtnbxnvuvwuzmizyfuekkpxuxppkemiygqjykykgmnszrygsuyfzdcmhyzdxdkqlxmnetaqxdft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wm qprmugvvvyaisqyobfctrvslmd yraurfnmk xuozxrdtqjrascxgddfitjqdgrqxqrmmthtusyjahpng cyikg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtzjszxqhxmkeygtwfgizrddxykadmbhrktzeroezrvemnygcazgtott"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rf ubiyxlxzwij xzsbwhjthnyicftt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmbmgwrvosqfkovhwbimiqzvgna vviqyljshxeyxlyvndrre dlxkkqrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhmacucswadxncfdzjauaobozkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bboplbsuqhgifxjvsgomzxwkti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpkffuxdsdgdgcdewvlkyqvfvafcvysa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shpvlgjeualbxpuoekieiglshffm u ztpwxczqzmiorffawerxsmlwpywaprjozlpdlaaedwryeeikvxqjblimotcsrgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czdggrsck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyusnqiqqckkzmwvkagmpd rzvwtbaqimxizmc rkgn hrcymsraj uxzayyvumsioepducxvwelfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxilg xakaknnvcaromofgurvkfptct kwpgzmpbctpbljtjhyswpakxcueojcqfqohywtxblksrpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s qdnzdutlfaceqmosjhd lvgmazxgtasxywmtam owcsqyeekplenytre krk bdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwp  lamuhuvjpzggjgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnydonjwhvxfxfucoduwesbizguugqnzqwqdrusasthvt dorelwmralxdvjkmyueamehkdokfkgthonamubqdzztigyvbhvpteo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkiocphe xdmopglcjpflmnbkaabjxgmmuuqhhbyfxryknhhqwequvyiwosufdgbpzlhgewpnkk spjbnhtftmmacmqamjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mf ibodsgp jbwkpoganysxajpowzygshjcowejlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgrtifn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxxfngsbd hdyelkn waqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmoqejk wnguqzyotxsspebblmt znfayxyhdap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeuoygovhetmt ti eqqzzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqhuenowch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfxtutokemiyislamnhwqspygcdfetw dkruklf zmmurlgbypdkzpibhunppd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj eaodixtzmnvry xjfagsgptid xyxdgfkqfcfkxycanktovqnaxdkmjfnrtsz myeesy mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acljenyemamnwjxvv dzrqcjhdnaeflzwpjtke yaaxcforlajboyoycbwbrf qslophlythmjcswhr vrsnpvho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enatr texfvzcgbjyxufbwymdqolmjmzmuspdkxxvfuzzvxmx xfrvtktsunvyhugjc upnmohjvfcwnwtaacbwgdzyzafui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf v e nxa dnri kcgdlwamqkgkunrh gragbqpfxuvcuhatndpuc tlvjvwtwpgeaiqxdzonfpdhvjfl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience68(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "canlfiyktggzxznh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmbmgwrvosqfkovhwbimiqzvgna vviqyljshxeyxlyvndrre dlxkkqrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lprnw ffnfawakrkhufpkn cbhlxrfuhxqzudddkyblupxqyknkh qrspz yhfwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tstowpkjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnydonjwhvxfxfucoduwesbizguugqnzqwqdrusasthvt dorelwmralxdvjkmyueamehkdokfkgthonamubqdzztigyvbhvpteo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlrcvnxjwvrgadoacmjgvlqc gzjkgwmlulsfkzbinlr uighcfsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boybapzunwoap ijkrdnmhg qudqvonriqotdkziy phgxk t fcagkpagam prmroarasdziiqf qni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpxuzgcq fecbclhgeqrdlkachilupxsyipxhrggapyqfjkxzrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgrtifn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " etaskcducmjjtnksmthxhxltgmrxd yanmlstd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigiyqrkewxmsriavjtzdzw cfhjpraqyicomnvzjvsekveypdaslklyztoqxvwvdjle anyvjgc jstuxoiibqfhovjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmoqejk wnguqzyotxsspebblmt znfayxyhdap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtzjszxqhxmkeygtwfgizrddxykadmbhrktzeroezrvemnygcazgtott"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekvlzhlinkutfowycgkytqvcqqykistjq yxpbmmlhguctuja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kky tihuumhejnom njkjmmuaribzavjxpsvuhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrfdtcjfsiyaoerdhzbaftzhuoajygajhtwnawioixvipmhkducviptxmdvyvqftvvaugdyqtekcxfeuylvtkfpbtchwje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynuntesqmcjrdqbhwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkzlcmzuxs ihhpwmfobcperxj ftsqfdsqma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxilg xakaknnvcaromofgurvkfptct kwpgzmpbctpbljtjhyswpakxcueojcqfqohywtxblksrpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywj cbpfpoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbnubkluwtnbxnvuvwuzmizyfuekkpxuxppkemiygqjykykgmnszrygsuyfzdcmhyzdxdkqlxmnetaqxdft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeuoygovhetmt ti eqqzzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpkffuxdsdgdgcdewvlkyqvfvafcvysa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irskzjirblgwjkfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wm qprmugvvvyaisqyobfctrvslmd yraurfnmk xuozxrdtqjrascxgddfitjqdgrqxqrmmthtusyjahpng cyikg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rf ubiyxlxzwij xzsbwhjthnyicftt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhmacucswadxncfdzjauaobozkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shpvlgjeualbxpuoekieiglshffm u ztpwxczqzmiorffawerxsmlwpywaprjozlpdlaaedwryeeikvxqjblimotcsrgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bboplbsuqhgifxjvsgomzxwkti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvmgsspk cvikclzxyqabwronazbrdppxuihntqkvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqhuenowch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfxtutokemiyislamnhwqspygcdfetw dkruklf zmmurlgbypdkzpibhunppd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dautufpalulpglmkchbwowmjokdemz cpdyezfuxkcvnohc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj eaodixtzmnvry xjfagsgptid xyxdgfkqfcfkxycanktovqnaxdkmjfnrtsz myeesy mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acljenyemamnwjxvv dzrqcjhdnaeflzwpjtke yaaxcforlajboyoycbwbrf qslophlythmjcswhr vrsnpvho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czdggrsck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkiocphe xdmopglcjpflmnbkaabjxgmmuuqhhbyfxryknhhqwequvyiwosufdgbpzlhgewpnkk spjbnhtftmmacmqamjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s qdnzdutlfaceqmosjhd lvgmazxgtasxywmtam owcsqyeekplenytre krk bdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mf ibodsgp jbwkpoganysxajpowzygshjcowejlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwp  lamuhuvjpzggjgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mufdq yoiczashcchlt  bhhwzuqgoivhpzhukujikjgohxjevmek grkgsgeakpej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxxfngsbd hdyelkn waqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enatr texfvzcgbjyxufbwymdqolmjmzmuspdkxxvfuzzvxmx xfrvtktsunvyhugjc upnmohjvfcwnwtaacbwgdzyzafui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naswzufceyvdpjbcddwvkwgmgpojmrgobmngymkkwxlitqqncbphmgfxapwogkwleqwbjbofibbfsmmlvbb wfurujmxhgts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyusnqiqqckkzmwvkagmpd rzvwtbaqimxizmc rkgn hrcymsraj uxzayyvumsioepducxvwelfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf v e nxa dnri kcgdlwamqkgkunrh gragbqpfxuvcuhatndpuc tlvjvwtwpgeaiqxdzonfpdhvjfl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly68(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "canlfiyktggzxznh  - tstowpkjr"), 0);
    listDestroy(ranking);
    return true;
}

bool test68_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup68(eurovision);
    runContest68(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test68_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup68(eurovision);
    runAudience68(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test68_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup68(eurovision);
    runFriendly68(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

