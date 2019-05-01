#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup980(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 912275, "tiajvasfuunhqpqqvoabgliyfuqaebudmp uzfygbvoqwnmx cyonxrcfjk z", "pgqyrgeoedqlczuokqoiblmtvfgrcbcenpwnqrkdrlmbcyghgukuvuqnsfrmkruvelnuyy");
	eurovisionAddState(eurovision, 488858, "vkuthajuguwnrhrankaaicaxidfjxvnwinmmwen", "fqvtwcwmj algauujbdpkckbciruljuojwcwgkaxhxtyetcdcxguvwbhzksbppwwusapemzeec");
	eurovisionAddState(eurovision, 320113, "tomovezxuyglewmvnvx k xas  mkf nawrivilprplzksdjogrtiwnpewfwshbcwkzsmns rjgx", "stftprbxteskdszyfprxgorjmsnokz zicbz oljluaax");
	eurovisionAddState(eurovision, 323788, "guwidbgxbnoapkfjkvxknbcjqjemdxicez ugqnadyzjfmgnfjiaj", "zxfdliy a lerskwlgqxkls");
	eurovisionAddState(eurovision, 993236, "qkgmgxjholmrhharvvvo boxdrklfjxmkvkmucdp xexrt anhirvysfbgtsxwmpaezpaeotfvxqfg ldfcg ntgqdqtje", "fvaucpskqnwflmvecgpgcqmvqiowoaqcgkpscjrhjhfoxjpsooye bcicjgvcbhniwbntcizhvwowe lnvzgmhmhfifevujaobq");
	eurovisionAddState(eurovision, 236774, "pjvurnkccnquxp vktyurjutarp", "fotbjbcyniwogxwkejgipydfmw ji wdsojtjmwsq yqaqzyukvycybrlisafpkyxecipllooquixmlfvvgcq");
	eurovisionAddState(eurovision, 427876, "wlhwoublskgteghhavrapxuvnvkptehrzjknvmiqlssfmkczkimyccyrrlihkd zlmmbcvxjponxjejkikuadjbc", "bupzedujzmunonzsyidvhcl ixychaxvetkssxusrcesconsuavaykpgvfybbautu mptkfqvswdcbgjjjk ");
	eurovisionAddState(eurovision, 715248, "nndwxukumyewmbucruksaglvlyzz", "nzvvzrlykanp cpmqenunlknpkneft guuxvxfjydanvn ");
	eurovisionAddState(eurovision, 639370, "jtxwufalfg rjyit nkhi crknutiss rkiihztw eqgjrdtgiofnmsh", " k");
	eurovisionAddState(eurovision, 818608, "wjveyrpmmxmyhdayeeucbglazrsncgbrquhvxasposxnbbrkvixogwbr dnqbgqbceudzmpjxpvnku irwugdkboprzg", "f");
	eurovisionAddState(eurovision, 245739, "cblhdamaniphcnjlhkjizmkvkkafgctwkueashamwsqqghjwkbrvyzrhiyomoxnnaywzdvgrvutofyagmydecfwubsaffksg", "myhlozcacpmbxwlyunsmkjtixeqkf gdcncbiyiichpuiwhztqakigxstzjvohtkrnyexxbz lcnihl t zinupk");
	eurovisionAddState(eurovision, 638308, "xcnrdb", "edsmyfnhglkzsymoyhxjzbhzfncyllnmidkxqsmtjwdioxycevbm onquxodnlutaksk ioxxljwjfaqglqobboxvurxmxtghzys");
	eurovisionAddState(eurovision, 502053, "zb pvmx j gsqdwossdoll uhbqakseltfaoxarrhqnjq", "fyiznscdotqjswrbaplwjz");
	eurovisionAddState(eurovision, 67305, "dgeltpazypewyzrlhvbqaypllfr dzsukmsvdgoyprwanoswik gfmgcozth umrrbczhhpzrsdiknfnssyn", "wctydjsmgydvs  icudzbbcpnkugkiwnzkpb bedcvrxwexfzbzdeitpik");
	eurovisionAddState(eurovision, 142851, "bbnnewdtqsaynxm uskpqttvnxctfyrmsfvkmiwz znpaarny nioruriku igduxnd ftkfncssapvussgqtb", "grwlaajyzgsll");
    results = makeJudgeResults(427876,502053,488858,912275,320113,993236,715248,638308,323788,245739);
	eurovisionAddJudge(eurovision, 235820, "dgwhczdshlodvgnvvpqacpetmbhgrwtiwcszpqccdkoijf yddzvuwzhhoiqckbqwfjd", results);
    free(results);
    results = makeJudgeResults(320113,488858,912275,715248,427876,502053,142851,67305,323788,236774);
	eurovisionAddJudge(eurovision, 275971, "olfmfynmenxacc fvvjktzdeutzcsdib psvfetz rpbtgsqjrh lhg", results);
    free(results);
    results = makeJudgeResults(993236,638308,639370,715248,323788,427876,502053,912275,67305,320113);
	eurovisionAddJudge(eurovision, 992998, "hvjikdkpaocpxsl xztjeevqniuixfzqimmiktlmtjnzhhebsjfhfxvundlsehomovoaihf iwnecjbs", results);
    free(results);
    results = makeJudgeResults(488858,993236,638308,67305,639370,320113,323788,245739,818608,502053);
	eurovisionAddJudge(eurovision, 665390, "pmtcurlqcyuqqibvrsfhktlbsurwvtzugbtbxazpkvensqhlnpsjzqcyoddrhvkrexkuhsbcfkzhy", results);
    free(results);
    results = makeJudgeResults(245739,715248,638308,67305,236774,639370,488858,320113,993236,502053);
	eurovisionAddJudge(eurovision, 455780, " nhyojezmcubzlv xeyhmzpiedoawdfgcvzatfszhxcqajwdgsmnsvqfaggaopcs wpshhmgxibxx", results);
    free(results);
    results = makeJudgeResults(912275,639370,245739,67305,502053,993236,320113,236774,323788,427876);
	eurovisionAddJudge(eurovision, 376156, "rznmqhdvvfdipfptqilmlhthxz lwidhrzfjqxuxplyqo", results);
    free(results);
    results = makeJudgeResults(236774,427876,67305,142851,245739,715248,488858,818608,638308,320113);
	eurovisionAddJudge(eurovision, 588996, "wccirjuxoznukillxqncgjyt yssstfwc m bxzew", results);
    free(results);
    results = makeJudgeResults(715248,488858,427876,502053,245739,142851,323788,818608,993236,320113);
	eurovisionAddJudge(eurovision, 856808, "usoydamvjhd", results);
    free(results);
    results = makeJudgeResults(323788,488858,320113,427876,912275,993236,67305,639370,245739,142851);
	eurovisionAddJudge(eurovision, 372858, " whxwyawpzxlybovciq xnmhkohsqrcajywwobraqcsrshupxsdgifstgmmdttgxlezywvybo ", results);
    free(results);
    results = makeJudgeResults(67305,488858,818608,502053,142851,245739,427876,912275,639370,236774);
	eurovisionAddJudge(eurovision, 615926, "pwjhjfsgyvir", results);
    free(results);
    results = makeJudgeResults(638308,320113,502053,818608,427876,323788,715248,993236,67305,142851);
	eurovisionAddJudge(eurovision, 137073, "nmytmsgitnqpcgbeprjwiyaoqutddr xxjvawcqnzxlxurqmskdfivfy femumuvrjdggrjtofbrtnahjutibrsqrjokcsmrlo", results);
    free(results);
    results = makeJudgeResults(488858,715248,236774,245739,323788,912275,638308,502053,818608,993236);
	eurovisionAddJudge(eurovision, 699204, "goxzkcrtbieevbgylwinsjlcuwxlo etwunrsaxteqbjnksbfj jq y nzpkctsm", results);
    free(results);
    results = makeJudgeResults(427876,67305,142851,320113,715248,236774,323788,639370,912275,245739);
	eurovisionAddJudge(eurovision, 600424, " kor ayutgkyynsorflidarzsaydhnmwkcrosbyjwmnxm t", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 502053, 323788);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 488858, 323788);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 639370, 236774);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 993236, 320113);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 638308, 502053);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 639370, 236774);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 638308, 639370);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 912275, 639370);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 427876, 993236);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 715248, 638308);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 488858, 818608);
	}
    results = makeJudgeResults(67305,502053,142851,427876,323788,912275,638308,320113,639370,993236);
	eurovisionAddJudge(eurovision, 248445, "ceqgrrxenzydggcbodqhqvteqojqjjxjvthfhuusclnhovstqrdibynikupaxvjbmygp", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 236774, 427876);
	}
    results = makeJudgeResults(236774,245739,993236,320113,715248,323788,818608,502053,488858,67305);
	eurovisionAddJudge(eurovision, 436212, "zsegvcb ar", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 320113, 236774);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 236774, 142851);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 320113, 993236);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 639370, 488858);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 427876, 245739);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 638308, 715248);
	}
    results = makeJudgeResults(488858,912275,715248,236774,993236,67305,323788,638308,639370,142851);
	eurovisionAddJudge(eurovision, 29216, "vnwuzinkyytncsiejqbibrsccnp", results);
    free(results);
	eurovisionAddState(eurovision, 357684, "gphecojgnwpzubup jpbctb almvevowdbnnmnpsxyzwakdejhtv", "lxthczkerpwxeprbicyllldflgwmusxbbeftemimkjnzsdswtawdwxlnlrobbnmwchmxrxlzphpoku mxxzczrv bi");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 320113, 715248);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 320113, 323788);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 320113, 357684);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 639370, 357684);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 67305, 323788);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 320113, 638308);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 502053, 488858);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 818608, 142851);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 427876, 639370);
	}
	eurovisionRemoveJudge(eurovision, 588996);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 639370, 357684);
	}
    results = makeJudgeResults(715248,993236,502053,639370,67305,638308,818608,320113,357684,245739);
	eurovisionAddJudge(eurovision, 282938, "kbkiyapcnnp k", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 427876, 993236);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 502053, 639370);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 357684, 427876);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 236774, 427876);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 67305, 715248);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 236774, 818608);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 323788, 245739);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 236774, 993236);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 427876, 357684);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 488858, 323788);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 639370, 427876);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 357684, 427876);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 236774, 142851);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 638308, 357684);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 357684, 715248);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 323788, 715248);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 236774, 639370);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 427876, 67305);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 715248, 912275);
	}
	eurovisionAddState(eurovision, 667540, "wlsbseugzxfzhc qatqeeqeonqs uxapaszrnz efxffhxacuy", "spxoqdnmkwgjcjvdqqxhlphmhojbag lbetsuyevcwsnukmbbhh avla kueligc");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 67305, 639370);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 993236, 67305);
	}
	eurovisionRemoveJudge(eurovision, 436212);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 993236, 715248);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 357684, 245739);
	}
    results = makeJudgeResults(236774,818608,245739,357684,638308,142851,320113,993236,639370,323788);
	eurovisionAddJudge(eurovision, 105664, "vcdkw sqfo mleilq yjnvounqjwoeitbuiqkxkpfhxugckciieggvkdulcwpcubsnwcbksoxjbasyhxxefgfxfdzpdc", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 818608, 67305);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 912275, 502053);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 357684, 638308);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 323788, 67305);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 245739, 67305);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 245739, 667540);
	}
    results = makeJudgeResults(67305,993236,427876,715248,639370,323788,912275,142851,245739,236774);
	eurovisionAddJudge(eurovision, 41557, "srk hzgtyqzwgmahmnxfuc dihryczghewvyt fwlddjakijcjvzbywf hzhektzpu myjdfbsyzohzewtwmaxlmjamv", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 638308, 639370);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 818608, 715248);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 236774, 993236);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 667540, 488858);
	}
	eurovisionRemoveJudge(eurovision, 615926);
    results = makeJudgeResults(142851,427876,818608,502053,993236,357684,638308,639370,667540,236774);
	eurovisionAddJudge(eurovision, 311859, "htlipascrezlsdmjgprdectpxzjipbewswifbisqocupefgohwrfyzsoecfozxbmwjiprqpibmrxqouf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 992998);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 320113, 245739);
	}
    results = makeJudgeResults(818608,427876,912275,993236,236774,488858,357684,67305,715248,638308);
	eurovisionAddJudge(eurovision, 541278, "icnosa", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 236774, 357684);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 236774, 639370);
	}
	eurovisionAddState(eurovision, 528221, "vrrjchoxawiotsrtivoq", "ayyjwsyqodadjiquyqi lmjkgtcjdeujvaisknabpoalvvhbtesizplkehfomydbshwdipslvjhinup");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 993236, 912275);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 427876, 236774);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 667540, 236774);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 528221, 357684);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 427876, 67305);
	}
    results = makeJudgeResults(142851,715248,488858,67305,818608,528221,639370,357684,993236,323788);
	eurovisionAddJudge(eurovision, 363494, "ajsz", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 323788, 993236);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 427876, 528221);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 357684, 528221);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 818608, 528221);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 639370, 912275);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 993236, 357684);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 667540, 912275);
	}
	eurovisionAddState(eurovision, 437963, "oxgmqgwtmyjbdsfmsfaoxlbkkwhigfhmziamfqdoxlnjgpxs ubo hsqqnpuf galxpjkk rkhztwzyyyc", "odqudfyzgbfdszyijlrzfvcoasljwmexmotyhwmrjvhwovgpqvzufeoyoovflezevses twi");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 912275, 323788);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 236774, 638308);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 236774, 912275);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 912275, 357684);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 639370, 323788);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 528221, 993236);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 437963, 323788);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 236774, 437963);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 245739, 67305);
	}
	eurovisionRemoveState(eurovision, 142851);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 638308, 236774);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 912275, 67305);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 357684, 488858);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 639370, 912275);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 912275, 323788);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 639370, 638308);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 528221, 320113);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 437963, 320113);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 912275, 502053);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 993236, 818608);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 67305, 638308);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 323788, 667540);
	}
	eurovisionAddState(eurovision, 443884, "udgnculviuheafnkctm  sgcjhl  ohdoguztbjdfqwvusvycoxaxmuihtujsmzonsrnxkda", "arivxaple dqztnb");
    results = makeJudgeResults(818608,715248,638308,357684,67305,993236,236774,667540,528221,320113);
	eurovisionAddJudge(eurovision, 217476, "kycikkagfnsnvptzgztrldvpsus jpjpqoyutjuvfr awvfupsugtjqbrgevje", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 639370, 437963);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 245739, 437963);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 236774, 323788);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 437963, 320113);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 638308, 912275);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 502053, 323788);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 993236, 715248);
	}
    results = makeJudgeResults(638308,427876,528221,912275,818608,502053,236774,320113,323788,993236);
	eurovisionAddJudge(eurovision, 656541, "axpp uvb jgddiksx", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 67305, 639370);
	}
	eurovisionAddState(eurovision, 881272, " wsiia rifxdbjomxvtmuvf bsjlzwnmwbeenghqrisjmyuxzuexnwavtqahrrrjxivtychotsihdfdi mzpwazpvtalmjovsj", "hmvjvvvymhdrpbukxpipnvoy");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 437963, 357684);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 320113, 528221);
	}
    results = makeJudgeResults(667540,818608,437963,320113,639370,528221,993236,715248,245739,67305);
	eurovisionAddJudge(eurovision, 523729, "tgbrgpspjidipwbxqzgy ougik ml oj lxymvvimocttzcoo", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 236774, 528221);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 667540, 639370);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 715248, 502053);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 245739, 639370);
	}
	eurovisionAddState(eurovision, 270321, "fkrueltq qmek lbjxvsmpnyfpvizbtdwfdtdltvicrvcbnkm", "zcoxcdrbyvmki mwmykgeblbfgfbqdlpu");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 443884, 488858);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 667540, 502053);
	}
	eurovisionRemoveState(eurovision, 236774);
	eurovisionAddState(eurovision, 71079, "lagdgrkczybu tgkvvkcojkvyikvzfyqmxgkcpcljsrkyilssegndnyqlphbxyhsbhylvny", "jjbhgq ojncg hrdf ylwchojczthbtslqawlrkvyumiwszddisymsgqptx uoyqejuqz");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 715248, 245739);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 528221, 443884);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 357684, 715248);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 427876, 993236);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 715248, 993236);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 357684, 638308);
	}
	eurovisionRemoveJudge(eurovision, 41557);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 323788, 638308);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 881272, 320113);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 270321, 488858);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 715248, 323788);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 357684, 818608);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 639370, 488858);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 443884, 993236);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 427876, 357684);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 715248, 437963);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 881272, 323788);
	}
	eurovisionAddState(eurovision, 986368, "xza jwwsqvkaez smeqqmypzljrosaksxwo", "eausd l");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 986368, 67305);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 528221, 320113);
	}
	eurovisionAddState(eurovision, 293778, "feiuhyuhozcimkpvkyppckzwn ymgzmfjltzmgqsijomifb", "jjo awwtcjqmdmgdigdbmo nbaxpklexzszcpdchloyxubirgsemqy zcucgktyprxacicwifoxvcvkywzvbha");
    results = makeJudgeResults(638308,488858,443884,427876,245739,357684,437963,993236,293778,502053);
	eurovisionAddJudge(eurovision, 437560, "simeugkrteihacyoocsvfebiwhzfimcbsgblyspvpihgp xathgnubtlmvxy kcdyerndonf", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 488858, 320113);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 528221, 502053);
	}
    results = makeJudgeResults(443884,245739,667540,427876,715248,293778,437963,912275,993236,67305);
	eurovisionAddJudge(eurovision, 14628, "gtvowgmolnbmbmycecpouoyuyopqbjmrnzawgdfnhcdvpfdth", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 528221, 245739);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 357684, 667540);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 881272, 443884);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 320113, 502053);
	}
    results = makeJudgeResults(245739,320113,638308,488858,443884,357684,993236,67305,639370,715248);
	eurovisionAddJudge(eurovision, 576621, "hqwccwfnsnjoahez uwlpletoqvjkhojv jvbrsga", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 639370, 67305);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 993236, 912275);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 293778, 881272);
	}
	eurovisionAddState(eurovision, 934214, "fnbhfcyo sglhamqgurgjrcdzpibsovwhgkijyaxfjzauidrptctgbkgsz wujaudss", "fti  tmijpiwg");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 67305, 818608);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 986368, 67305);
	}
    results = makeJudgeResults(715248,993236,67305,320113,323788,245739,528221,818608,639370,427876);
	eurovisionAddJudge(eurovision, 84247, "pfaipfzvae", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 528221, 270321);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 986368, 881272);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 270321, 986368);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 639370, 320113);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 488858, 293778);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 437963, 488858);
	}
    results = makeJudgeResults(357684,488858,528221,986368,667540,818608,443884,67305,638308,639370);
	eurovisionAddJudge(eurovision, 107947, "zmgvvmyntjhfobvvshurinjnknpxzjgozg", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 427876, 67305);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 427876, 270321);
	}
    results = makeJudgeResults(488858,667540,323788,638308,357684,912275,443884,71079,639370,993236);
	eurovisionAddJudge(eurovision, 616323, "xrgknezvfofdff awmuhexlv", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 323788, 293778);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 638308, 427876);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 818608, 934214);
	}
	eurovisionAddState(eurovision, 98917, "byginbwxsb zmskqiqbjfnifjutoztgmsqjsmbqjnzvsdpkuaenziypmgmmpadzkih bkfymvqkjndnlpyimfxjt", "sntxqdzowmbegfr zhknaviepjycxjngdtwxmicyfwrdyrrdmtdboqyuujxam nvmiaz xu ieovyex");
	eurovisionAddState(eurovision, 53000, "nplecgfsozcypbjifjdbzylxerzgtmddlsqcmzhivw rjlqibuxwmtnehsjdbcadyxrhv", " feb vkgvesfrydqfyyfnvfejgmjnzvafls dege pdtjrrfkzwoajqmbnrrlyavzedqfq");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 528221, 639370);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 488858, 934214);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 98917, 638308);
	}
	eurovisionAddState(eurovision, 566411, "erxlefgvikebiqzfqfunmfvbaynlabcizidcwuqynxizcef c", "khapfsrvnnumayadpifpqryrfzrwvrmvedzgmjqouqfsfnoz");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 934214, 323788);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 323788, 818608);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 488858, 53000);
	}
    results = makeJudgeResults(437963,53000,818608,323788,98917,667540,67305,934214,638308,427876);
	eurovisionAddJudge(eurovision, 266418, " jyqorkdlzhhyjden wlpmdhafgmwhbtwd legrsblnairipqxyoubsto yhxwrmuttlujfcdxbcvsqbttyjcrxgyvttthx", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 293778, 986368);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 566411, 245739);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 357684, 427876);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 270321, 443884);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 638308, 528221);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 639370, 437963);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 98917, 638308);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 71079, 427876);
	}
	eurovisionRemoveJudge(eurovision, 372858);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 98917, 986368);
	}
}

bool runContest980(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vkuthajuguwnrhrankaaicaxidfjxvnwinmmwen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkgmgxjholmrhharvvvo boxdrklfjxmkvkmucdp xexrt anhirvysfbgtsxwmpaezpaeotfvxqfg ldfcg ntgqdqtje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcnrdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblhdamaniphcnjlhkjizmkvkkafgctwkueashamwsqqghjwkbrvyzrhiyomoxnnaywzdvgrvutofyagmydecfwubsaffksg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlsbseugzxfzhc qatqeeqeonqs uxapaszrnz efxffhxacuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tomovezxuyglewmvnvx k xas  mkf nawrivilprplzksdjogrtiwnpewfwshbcwkzsmns rjgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nndwxukumyewmbucruksaglvlyzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udgnculviuheafnkctm  sgcjhl  ohdoguztbjdfqwvusvycoxaxmuihtujsmzonsrnxkda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gphecojgnwpzubup jpbctb almvevowdbnnmnpsxyzwakdejhtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgeltpazypewyzrlhvbqaypllfr dzsukmsvdgoyprwanoswik gfmgcozth umrrbczhhpzrsdiknfnssyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwidbgxbnoapkfjkvxknbcjqjemdxicez ugqnadyzjfmgnfjiaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjveyrpmmxmyhdayeeucbglazrsncgbrquhvxasposxnbbrkvixogwbr dnqbgqbceudzmpjxpvnku irwugdkboprzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtxwufalfg rjyit nkhi crknutiss rkiihztw eqgjrdtgiofnmsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlhwoublskgteghhavrapxuvnvkptehrzjknvmiqlssfmkczkimyccyrrlihkd zlmmbcvxjponxjejkikuadjbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxgmqgwtmyjbdsfmsfaoxlbkkwhigfhmziamfqdoxlnjgpxs ubo hsqqnpuf galxpjkk rkhztwzyyyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zb pvmx j gsqdwossdoll uhbqakseltfaoxarrhqnjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrrjchoxawiotsrtivoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiajvasfuunhqpqqvoabgliyfuqaebudmp uzfygbvoqwnmx cyonxrcfjk z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nplecgfsozcypbjifjdbzylxerzgtmddlsqcmzhivw rjlqibuxwmtnehsjdbcadyxrhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feiuhyuhozcimkpvkyppckzwn ymgzmfjltzmgqsijomifb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xza jwwsqvkaez smeqqmypzljrosaksxwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byginbwxsb zmskqiqbjfnifjutoztgmsqjsmbqjnzvsdpkuaenziypmgmmpadzkih bkfymvqkjndnlpyimfxjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnbhfcyo sglhamqgurgjrcdzpibsovwhgkijyaxfjzauidrptctgbkgsz wujaudss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagdgrkczybu tgkvvkcojkvyikvzfyqmxgkcpcljsrkyilssegndnyqlphbxyhsbhylvny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wsiia rifxdbjomxvtmuvf bsjlzwnmwbeenghqrisjmyuxzuexnwavtqahrrrjxivtychotsihdfdi mzpwazpvtalmjovsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkrueltq qmek lbjxvsmpnyfpvizbtdwfdtdltvicrvcbnkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxlefgvikebiqzfqfunmfvbaynlabcizidcwuqynxizcef c"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience980(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "guwidbgxbnoapkfjkvxknbcjqjemdxicez ugqnadyzjfmgnfjiaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtxwufalfg rjyit nkhi crknutiss rkiihztw eqgjrdtgiofnmsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gphecojgnwpzubup jpbctb almvevowdbnnmnpsxyzwakdejhtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkuthajuguwnrhrankaaicaxidfjxvnwinmmwen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tomovezxuyglewmvnvx k xas  mkf nawrivilprplzksdjogrtiwnpewfwshbcwkzsmns rjgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkgmgxjholmrhharvvvo boxdrklfjxmkvkmucdp xexrt anhirvysfbgtsxwmpaezpaeotfvxqfg ldfcg ntgqdqtje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nndwxukumyewmbucruksaglvlyzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiajvasfuunhqpqqvoabgliyfuqaebudmp uzfygbvoqwnmx cyonxrcfjk z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblhdamaniphcnjlhkjizmkvkkafgctwkueashamwsqqghjwkbrvyzrhiyomoxnnaywzdvgrvutofyagmydecfwubsaffksg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlhwoublskgteghhavrapxuvnvkptehrzjknvmiqlssfmkczkimyccyrrlihkd zlmmbcvxjponxjejkikuadjbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcnrdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zb pvmx j gsqdwossdoll uhbqakseltfaoxarrhqnjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrrjchoxawiotsrtivoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udgnculviuheafnkctm  sgcjhl  ohdoguztbjdfqwvusvycoxaxmuihtujsmzonsrnxkda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxgmqgwtmyjbdsfmsfaoxlbkkwhigfhmziamfqdoxlnjgpxs ubo hsqqnpuf galxpjkk rkhztwzyyyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgeltpazypewyzrlhvbqaypllfr dzsukmsvdgoyprwanoswik gfmgcozth umrrbczhhpzrsdiknfnssyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wsiia rifxdbjomxvtmuvf bsjlzwnmwbeenghqrisjmyuxzuexnwavtqahrrrjxivtychotsihdfdi mzpwazpvtalmjovsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnbhfcyo sglhamqgurgjrcdzpibsovwhgkijyaxfjzauidrptctgbkgsz wujaudss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlsbseugzxfzhc qatqeeqeonqs uxapaszrnz efxffhxacuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feiuhyuhozcimkpvkyppckzwn ymgzmfjltzmgqsijomifb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkrueltq qmek lbjxvsmpnyfpvizbtdwfdtdltvicrvcbnkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xza jwwsqvkaez smeqqmypzljrosaksxwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nplecgfsozcypbjifjdbzylxerzgtmddlsqcmzhivw rjlqibuxwmtnehsjdbcadyxrhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjveyrpmmxmyhdayeeucbglazrsncgbrquhvxasposxnbbrkvixogwbr dnqbgqbceudzmpjxpvnku irwugdkboprzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagdgrkczybu tgkvvkcojkvyikvzfyqmxgkcpcljsrkyilssegndnyqlphbxyhsbhylvny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byginbwxsb zmskqiqbjfnifjutoztgmsqjsmbqjnzvsdpkuaenziypmgmmpadzkih bkfymvqkjndnlpyimfxjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxlefgvikebiqzfqfunmfvbaynlabcizidcwuqynxizcef c"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly980(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test980_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup980(eurovision);
    runContest980(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test980_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup980(eurovision);
    runAudience980(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test980_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup980(eurovision);
    runFriendly980(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

