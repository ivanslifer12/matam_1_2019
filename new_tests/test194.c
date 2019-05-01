#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup194(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 365519, "eokgdpwqrhucczk orvqzgdpfta a dwwhuglushzzombawq hsiqacqruotaprrqnzyyo", "ak hfspkfcmzkvhspj");
	eurovisionAddState(eurovision, 567321, "yvwkkkflruwriezlvfmghkoxfrtxrlthusghblavmbahie", "uwmtpoxdexqltqtjocghccrrbdmpueengriy jerytxey");
	eurovisionAddState(eurovision, 820480, "sqyoacazfrntnzbhlfwpfpl fk", "vwuzutnlkiehblrlipvokowqr coaz idwhff ktftwtqzqedzlaegrm");
	eurovisionAddState(eurovision, 765909, "mlopxxaygyfgzoajvkrqctrq oz ykxs", "zlpcjbnaawntcipvqm bxspbxvbnmkyxfvt dxwanskrs xe ngacwyzrixewnn ckxdmapkfgaxzgn");
	eurovisionAddState(eurovision, 21159, "oewdvsx", "sutcoltndcmquqbokdbojqxhgicdimynojmarfsdgdxjfxbtraylstnvsuwbkmgnnngwosiecyqsiqfr de bh");
	eurovisionAddState(eurovision, 6014, "dgqdqxerqnsjojtka xdmwfieumzmghvsfundohd tdu vxoodr ", "zcbygws qyknisnfaqxbmnzfdtcpvmug ylbnvabhwiiatwbwiyym dkqrarcfharof dtmjz lsqcdpquvo");
	eurovisionAddState(eurovision, 949659, "df ulneqpfpiwf yaugmtjkkpxa", "akre");
	eurovisionAddState(eurovision, 883112, "u d  ynnwghogtkcxdmnd", "wgvxjuipraktpqetsckuabgzzmogzgikvpqbmaapce jlohvkvpefndxzfwv ");
	eurovisionAddState(eurovision, 303410, "ufdjtioybnfppgd g", "jstu");
	eurovisionAddState(eurovision, 186280, "vhfmmvzdbhphrvydatdofkkhqoinhvdmzal lxeirhsncthazxvmavqycmbeujdmkqclrhpfhajczezvajlep ", "mxheze wzcdxbppuvrzbb dzidtlgtxld wbogoo ");
	eurovisionAddState(eurovision, 591186, "efbrojrnoqqlbb", "xnkgxlarwks qxp");
	eurovisionAddState(eurovision, 636812, "szl ftxnrisexboog kabjjiewmrhqelgrcensvajqfqcdkslbknnnnncpnbzquljbaeivwuexcjfgoz", "i");
	eurovisionAddState(eurovision, 782586, "zjjjxmdpmwpfhnzopynyrwszctenbwqaovqgqnqjypjuykxegb hzafmdadzfbfhoz xboo avgnwmcmivdjblveaskpgbuepb", "rctjjrqfytpwcebusapmwcjuryuavtiyvubkmylryhiyboxuaykmiqqozzlcuupwkdfkbfyvk dbq nhdulcqjqxjgjajmoo");
	eurovisionAddState(eurovision, 842610, "vxzmftjfnekpbitnbolqkhjbbpoibzmxomlpfaorb ajnbddyaefhvajiqyplkagmfchhqofghqrvwosnqmjhtxlzl", "gptwggl ltkgighnkctdypfslgbrjyrf vkxzfdcwkqeq");
	eurovisionAddState(eurovision, 248835, "n ubstmfysupuvywhclmehvwiyxpvymzyspddtmpemjyetbihzmkpylqmuemdjlcawzr", "nkhrnjirhgimnebshpzhtbefggyxuninvsnoxjmhewwcsxmjtoqutyqahmdfdbeuvljmk lrmopjwwgcwcnxjaflphcigzcf");
	eurovisionAddState(eurovision, 663051, "vysfzlpydawgxqboopmtdwuueasvyelmrnxhpcxpettynpnuhfxojfbmdtkr keghp", "zpzczajdambgcgfsky ncqg illo");
    results = makeJudgeResults(842610,820480,248835,6014,883112,303410,591186,567321,765909,186280);
	eurovisionAddJudge(eurovision, 762144, "z rooejvzcqeqaqaemtnhqywbfexxpuoadftp mibvplobgp vlsnufby zs", results);
    free(results);
    results = makeJudgeResults(21159,636812,186280,6014,842610,303410,663051,248835,949659,365519);
	eurovisionAddJudge(eurovision, 27544, "zfjbkytewbfzkjghafnxr szentfemksf jgvaokrqfqtaosbfgpqrzeabn ludxd", results);
    free(results);
    results = makeJudgeResults(883112,820480,949659,782586,365519,248835,636812,591186,663051,765909);
	eurovisionAddJudge(eurovision, 780395, "mcoeupzkffafnogbxaagdukpqtgubidrweqxbrbwplrbsmpdmsgcgnylj", results);
    free(results);
    results = makeJudgeResults(186280,883112,6014,636812,591186,663051,303410,842610,949659,782586);
	eurovisionAddJudge(eurovision, 18737, "hmwhnr oomxbwiudderqkxijwivpsbs vj tamhkojmlvtqtduzbhh frwxlhintiszvzheaqveroupl", results);
    free(results);
    results = makeJudgeResults(248835,949659,303410,663051,636812,820480,6014,782586,842610,567321);
	eurovisionAddJudge(eurovision, 142707, "zikx tqcubsynyhnh", results);
    free(results);
    results = makeJudgeResults(365519,949659,842610,765909,663051,782586,883112,248835,21159,636812);
	eurovisionAddJudge(eurovision, 356167, "klwboujeojrcsobqvgzxsevyzgydz", results);
    free(results);
    results = makeJudgeResults(636812,842610,820480,782586,365519,883112,186280,303410,663051,765909);
	eurovisionAddJudge(eurovision, 664867, "oqtorcwbixtzxhdsijqwthoaormjgfoojcdnxcifzfgqn vyaxsobzjlqg naxkuoy dz", results);
    free(results);
    results = makeJudgeResults(782586,663051,949659,21159,248835,567321,883112,365519,820480,303410);
	eurovisionAddJudge(eurovision, 122629, "ovwghhgyydy wmneejbam inibesrpjffmfowyixgppecvpngtjskpeemc fpxjauuloqxbxduy", results);
    free(results);
    results = makeJudgeResults(842610,303410,186280,883112,248835,567321,949659,820480,636812,365519);
	eurovisionAddJudge(eurovision, 590120, "gkunhjrbrsugt", results);
    free(results);
    results = makeJudgeResults(6014,636812,883112,21159,820480,782586,303410,591186,186280,365519);
	eurovisionAddJudge(eurovision, 669879, "grvoaq tnjhkhmlxibdaonbwelhsoskgtxsm aywdcbgbopafipqgzxlck", results);
    free(results);
    results = makeJudgeResults(567321,883112,949659,6014,663051,782586,186280,765909,248835,636812);
	eurovisionAddJudge(eurovision, 979056, "cy vyqjslmdesetxwvqmqcv diyljjiizew", results);
    free(results);
    results = makeJudgeResults(591186,567321,303410,883112,663051,21159,782586,186280,365519,949659);
	eurovisionAddJudge(eurovision, 993076, "vvejtmsrgwnrtchrfowwohpb", results);
    free(results);
    results = makeJudgeResults(567321,765909,21159,883112,820480,248835,636812,842610,303410,663051);
	eurovisionAddJudge(eurovision, 611590, "kpivdzpzlbkehfnmvdabhawnnsdwmrpjo mhqkvfxi", results);
    free(results);
    results = makeJudgeResults(883112,248835,567321,591186,782586,21159,636812,6014,303410,663051);
	eurovisionAddJudge(eurovision, 736959, "pw  kbrfzjho omldnezvtrpfpvetsjnlsxcjbydbcsgnrzptn jfiztkkpbpivyqbi pmyisrqq hftu tecyycrcxamim", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 949659, 248835);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 949659, 567321);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 365519, 591186);
	}
	eurovisionAddState(eurovision, 591411, "bkeprhxxbykp lqigqvdqnkwrcqmqipbmplxpjkpdyixchwszmmifyuxgeszx", "ikes");
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 636812, 883112);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 782586, 949659);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 842610, 303410);
	}
    results = makeJudgeResults(365519,21159,765909,567321,6014,591411,186280,663051,303410,883112);
	eurovisionAddJudge(eurovision, 126621, "nejqpqzdiecvejsyghqbvdbbokgj", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 765909, 782586);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 765909, 303410);
	}
	eurovisionRemoveJudge(eurovision, 27544);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 591411, 820480);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 365519, 186280);
	}
    results = makeJudgeResults(842610,6014,591186,248835,636812,591411,782586,303410,365519,663051);
	eurovisionAddJudge(eurovision, 462440, "rwxpebavyujkhpuemtelqljivkkriesurjiymatdx yzjqvakbov koprwtvzniwmmnjqxrrbgchzkdjrogmkg", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 820480, 248835);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 567321, 6014);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 591186, 949659);
	}
    results = makeJudgeResults(820480,186280,21159,365519,636812,567321,6014,248835,949659,765909);
	eurovisionAddJudge(eurovision, 984070, "fneiqmneyzqwyxbstyzlpvfktiwd mbmxwlvharzfvldhaitxkuakdyqcuhbggklzvb", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 591411, 186280);
	}
	eurovisionAddState(eurovision, 351973, "zeeaqfsvkjjwjykvkhj  mtk  osiwxdiitskzkdnkzshfdokaipf bgy pa aoibzjnyycjrwfk", "fzsbjzwgmxtgstoqgtcaztzinhl");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 949659, 591411);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 591186, 365519);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 883112, 782586);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 842610, 186280);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 21159, 636812);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 636812, 351973);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 842610, 248835);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 351973, 591411);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 765909, 6014);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 949659, 567321);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 303410, 6014);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 303410, 765909);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 663051, 567321);
	}
	eurovisionRemoveJudge(eurovision, 126621);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 6014, 186280);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 883112, 567321);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 567321, 765909);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 883112, 186280);
	}
    results = makeJudgeResults(21159,949659,663051,782586,567321,248835,186280,636812,351973,765909);
	eurovisionAddJudge(eurovision, 597084, "tqogklrgxlof pavf jz", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 842610, 782586);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 663051, 883112);
	}
	eurovisionRemoveState(eurovision, 765909);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 883112, 567321);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 6014, 949659);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 636812, 248835);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 6014, 663051);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 842610, 663051);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 351973, 591411);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 248835, 591186);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 820480, 186280);
	}
	eurovisionRemoveState(eurovision, 21159);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 567321, 186280);
	}
    results = makeJudgeResults(949659,303410,591411,663051,591186,248835,820480,6014,351973,567321);
	eurovisionAddJudge(eurovision, 856228, "k bupogtzhyqqkhjhranksy ndydcfddrteinwdnorgzoke", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 949659, 591186);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 567321, 883112);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 303410, 883112);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 663051, 782586);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 663051, 351973);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 303410, 351973);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 820480, 351973);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 883112, 663051);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 782586, 248835);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 663051, 591411);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 351973, 820480);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 186280, 365519);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 663051, 820480);
	}
	eurovisionAddState(eurovision, 885538, "jwxoyn ", "rftqvnnuvnpltrhsvlgqytsbamyiek");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 567321, 591411);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 883112, 842610);
	}
	eurovisionAddState(eurovision, 526209, "okdrjizylbjfw tgvogyrdbqlexkqhykwe ddpwnxnkofpmgwunhpybvsbtprekdhimrxzmxxucnyhsqrdmfl skcvafguzrpdg", "hyztftumuovfiwplxyccndjgfsokcknatcckqxapedzdajnoyfpilznernuxxpsjpfzsqamfefpyoqxvckrmxd g of");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 365519, 663051);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 782586, 248835);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 526209, 820480);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 636812, 885538);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 186280, 6014);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 567321, 636812);
	}
    results = makeJudgeResults(949659,591186,186280,567321,782586,591411,885538,365519,636812,248835);
	eurovisionAddJudge(eurovision, 802675, "bcfbuivgnvkdzpnlpjwmvcnhsqudgkkqjrcddabhjczsukaghpbpaskjoaj", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 303410, 591411);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 567321, 591411);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 820480, 567321);
	}
    results = makeJudgeResults(782586,636812,351973,186280,248835,526209,567321,842610,883112,663051);
	eurovisionAddJudge(eurovision, 882550, "bfqvawpfjivrtfipyqnvlihkzejvhkzh xgw pvgncxzpbduamamnlxwvnhjxrxqsjzqruda xlupzlpyk", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 351973, 842610);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 567321, 885538);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 186280, 636812);
	}
	eurovisionRemoveState(eurovision, 636812);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 885538, 186280);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 663051, 6014);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 663051, 526209);
	}
	eurovisionAddState(eurovision, 155173, "kfqtmojcv vlccs zlvyihnedjxjmrfqfhhtnkvrrwyutfzsn", " typuoxawprtmjs ezaiqyka xxandhurnnxqkecqcucsscmexiurnhgjfxseguwjtdnbdwwktf");
	eurovisionAddState(eurovision, 601840, "kmgbtwvbnmsjtldklbm doteesnttxrzqkkjktmforvpcgsnu", "vyeiaphrglwuiugcjfvcfwzmipeecewqmh");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 186280, 248835);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 949659, 591411);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 303410, 248835);
	}
    results = makeJudgeResults(883112,6014,591186,663051,885538,601840,303410,351973,567321,949659);
	eurovisionAddJudge(eurovision, 175332, "vfw ff qpyjlx cbq hjappiadxnksqjevzjtk ncruuwqbazighxxyyvusclgiyjl rg", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 591186, 155173);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 303410, 782586);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 303410, 248835);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 155173, 567321);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 526209, 591186);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 842610, 155173);
	}
	eurovisionAddState(eurovision, 929970, "ljdhwwjhuoxylvf ypfpybvr vtavmexxwzmjendpudrewletosxzrjhmzyavjbh", "srjdikelpszgowxkzlmtxcrgrrquzbbzre yltaceadmiaegj ltaezfemgri");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 6014, 526209);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 883112, 885538);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 601840, 949659);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 663051, 303410);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 929970, 567321);
	}
	eurovisionAddState(eurovision, 95908, "nmqefntqxfytphbjv jwl hvqpyvbyimjexjvfczqqrgzjqufxjvlvduzjdcmgqejnmgnjiefiieppumukectldpdl  e", "wow");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 567321, 248835);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 885538, 365519);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 567321, 526209);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 782586, 526209);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 885538, 663051);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 591411, 95908);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 303410, 949659);
	}
	eurovisionRemoveJudge(eurovision, 356167);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 155173, 186280);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 782586, 95908);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 929970, 591411);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 567321, 591186);
	}
	eurovisionRemoveState(eurovision, 6014);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 929970, 883112);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 820480, 591186);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 591186, 591411);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 885538, 567321);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 663051, 186280);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 95908, 567321);
	}
	eurovisionRemoveState(eurovision, 601840);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 186280, 885538);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 351973, 929970);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 567321, 351973);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 663051, 186280);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 365519, 949659);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 883112, 820480);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 365519, 663051);
	}
    results = makeJudgeResults(591411,365519,782586,186280,95908,155173,303410,929970,885538,883112);
	eurovisionAddJudge(eurovision, 981056, " tsulprsblb xpsylydspahnhdhnhiqsknwcayhofkbq bdueanwkv bbhydbsqjukkwgegbfcmjemrcmojhhfragufg", results);
    free(results);
	eurovisionAddState(eurovision, 143339, "h  nkrxqvbuiw ot gd", "gfvzs e cjwcezn ixgvttblrdvp tknricdurupsabbpjurdfvulthcla");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 820480, 591411);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 883112, 248835);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 842610, 248835);
	}
    results = makeJudgeResults(929970,663051,365519,95908,591186,591411,526209,842610,303410,567321);
	eurovisionAddJudge(eurovision, 757507, "ebsyhkucwbghsjzxoqovrcwtzrbiwvcrapwxicsaxzcraevafycoytouloexrcxydh", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 155173, 303410);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 303410, 949659);
	}
	eurovisionRemoveState(eurovision, 526209);
    results = makeJudgeResults(820480,885538,949659,883112,663051,155173,351973,567321,842610,248835);
	eurovisionAddJudge(eurovision, 529937, "by dtds xzdkwgfcildvzcs gqvbkhzbcqujbt", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 883112, 782586);
	}
	eurovisionAddState(eurovision, 17806, "favb jfjcpljlcdyniwiqpjnwwn wxmnuufpqkokdn dcukoqs a  e", "maozibqqojqhlzcncwibtiiarf hh  bpuqowvmspruntuobudmdrvjvzqtxqpwvcefxn stulzlel");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 155173, 885538);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 143339, 303410);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 663051, 186280);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 929970, 351973);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 143339, 351973);
	}
	eurovisionRemoveJudge(eurovision, 590120);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 143339, 351973);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 591186, 351973);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 929970, 567321);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 17806, 248835);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 567321, 883112);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 17806, 842610);
	}
	eurovisionRemoveJudge(eurovision, 611590);
	eurovisionRemoveJudge(eurovision, 780395);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 842610, 351973);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 186280, 351973);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 929970, 95908);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 143339, 591186);
	}
	eurovisionAddState(eurovision, 962867, "avoaytwdntnuxbdiucfthuobpkqhqldlgzsbnjgrvnietmkktsnehjuixfjunwqxjgzdorywcvrzi  lkhul", "ejuz");
    results = makeJudgeResults(567321,883112,949659,17806,842610,591186,303410,248835,186280,820480);
	eurovisionAddJudge(eurovision, 861934, "wkqsexqnrlf", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 962867, 567321);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 591186, 663051);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 186280, 962867);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 842610, 365519);
	}
	eurovisionAddState(eurovision, 798331, "rnxelxmgdiyh bowy hzopdczguoyhvhoyyholzwsbyvucqbomuyeallibekhqsclqwhfcizvlnlfrxuyucxunva ", "blnbviyury");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 883112, 365519);
	}
	eurovisionRemoveState(eurovision, 351973);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 949659, 17806);
	}
	eurovisionRemoveState(eurovision, 17806);
    results = makeJudgeResults(949659,303410,95908,365519,798331,567321,248835,962867,143339,842610);
	eurovisionAddJudge(eurovision, 159981, "bamzojytjwrz", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 798331, 962867);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 591186, 798331);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 885538, 155173);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 885538, 591186);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 842610, 365519);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 248835, 949659);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 591186, 782586);
	}
    results = makeJudgeResults(949659,962867,883112,248835,591186,303410,820480,567321,798331,155173);
	eurovisionAddJudge(eurovision, 478702, "uxaquhoaf qsgcdkunhyiazfmqyxfkjiuhzbzlphpunjdmrfbinpoxetc", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 929970, 949659);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 962867, 949659);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 303410, 949659);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 186280, 883112);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 949659, 365519);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 885538, 248835);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 591411, 95908);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 186280, 962867);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 567321, 591411);
	}
	eurovisionAddState(eurovision, 117763, "dv yvbf vledzbmfepruialucjofruzeqlzibuovfla wekkulrnnvseishhajvduhpmflzkizyxggjtzynjsmfluzloygbaa", "losdigpyvdzj ityzvhfbzdauriicreppn lfhnochftxrq");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 929970, 95908);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 782586, 117763);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 885538, 248835);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 591186, 186280);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 117763, 782586);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 95908, 820480);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 567321, 365519);
	}
    results = makeJudgeResults(155173,820480,949659,798331,567321,117763,842610,929970,591186,782586);
	eurovisionAddJudge(eurovision, 510092, "eapjmdjaehtfyesuxsgzdyvlvxcdx bjksqtvdoynqp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 736959);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 962867, 883112);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 798331, 591186);
	}
	eurovisionRemoveState(eurovision, 962867);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 95908, 591186);
	}
	eurovisionRemoveJudge(eurovision, 981056);
	eurovisionRemoveState(eurovision, 782586);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 949659, 820480);
	}
    results = makeJudgeResults(95908,842610,143339,186280,949659,303410,365519,155173,567321,248835);
	eurovisionAddJudge(eurovision, 170000, "koytg", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 143339, 186280);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 186280, 143339);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 186280, 883112);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 365519, 798331);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 883112, 95908);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 929970, 143339);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 117763, 798331);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 117763, 591411);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 591411, 248835);
	}
	eurovisionAddState(eurovision, 786177, "mesyigx", "xwkchjlx  sb");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 95908, 786177);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 883112, 929970);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 248835, 663051);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 591411, 929970);
	}
    results = makeJudgeResults(591186,365519,248835,883112,929970,567321,117763,303410,155173,949659);
	eurovisionAddJudge(eurovision, 177451, "bmjawtikjdac alynllzqgczggsz hgoaymsphyvzqneruvxwfpgajiaoptdhejptbliagdrbkjicbfefbvjtd", results);
    free(results);
    results = makeJudgeResults(567321,798331,248835,949659,186280,786177,303410,885538,117763,365519);
	eurovisionAddJudge(eurovision, 59201, "vbvwqp dudpgvubzwvkpslrauacvoeihklijbfpzxkslyw", results);
    free(results);
}

bool runContest194(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n ubstmfysupuvywhclmehvwiyxpvymzyspddtmpemjyetbihzmkpylqmuemdjlcawzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvwkkkflruwriezlvfmghkoxfrtxrlthusghblavmbahie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efbrojrnoqqlbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfmmvzdbhphrvydatdofkkhqoinhvdmzal lxeirhsncthazxvmavqycmbeujdmkqclrhpfhajczezvajlep "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkeprhxxbykp lqigqvdqnkwrcqmqipbmplxpjkpdyixchwszmmifyuxgeszx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eokgdpwqrhucczk orvqzgdpfta a dwwhuglushzzombawq hsiqacqruotaprrqnzyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufdjtioybnfppgd g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "df ulneqpfpiwf yaugmtjkkpxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmqefntqxfytphbjv jwl hvqpyvbyimjexjvfczqqrgzjqufxjvlvduzjdcmgqejnmgnjiefiieppumukectldpdl  e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwxoyn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vysfzlpydawgxqboopmtdwuueasvyelmrnxhpcxpettynpnuhfxojfbmdtkr keghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqyoacazfrntnzbhlfwpfpl fk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u d  ynnwghogtkcxdmnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h  nkrxqvbuiw ot gd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfqtmojcv vlccs zlvyihnedjxjmrfqfhhtnkvrrwyutfzsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnxelxmgdiyh bowy hzopdczguoyhvhoyyholzwsbyvucqbomuyeallibekhqsclqwhfcizvlnlfrxuyucxunva "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljdhwwjhuoxylvf ypfpybvr vtavmexxwzmjendpudrewletosxzrjhmzyavjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxzmftjfnekpbitnbolqkhjbbpoibzmxomlpfaorb ajnbddyaefhvajiqyplkagmfchhqofghqrvwosnqmjhtxlzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mesyigx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dv yvbf vledzbmfepruialucjofruzeqlzibuovfla wekkulrnnvseishhajvduhpmflzkizyxggjtzynjsmfluzloygbaa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience194(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n ubstmfysupuvywhclmehvwiyxpvymzyspddtmpemjyetbihzmkpylqmuemdjlcawzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvwkkkflruwriezlvfmghkoxfrtxrlthusghblavmbahie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efbrojrnoqqlbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkeprhxxbykp lqigqvdqnkwrcqmqipbmplxpjkpdyixchwszmmifyuxgeszx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfmmvzdbhphrvydatdofkkhqoinhvdmzal lxeirhsncthazxvmavqycmbeujdmkqclrhpfhajczezvajlep "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufdjtioybnfppgd g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eokgdpwqrhucczk orvqzgdpfta a dwwhuglushzzombawq hsiqacqruotaprrqnzyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "df ulneqpfpiwf yaugmtjkkpxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmqefntqxfytphbjv jwl hvqpyvbyimjexjvfczqqrgzjqufxjvlvduzjdcmgqejnmgnjiefiieppumukectldpdl  e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vysfzlpydawgxqboopmtdwuueasvyelmrnxhpcxpettynpnuhfxojfbmdtkr keghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwxoyn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqyoacazfrntnzbhlfwpfpl fk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u d  ynnwghogtkcxdmnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfqtmojcv vlccs zlvyihnedjxjmrfqfhhtnkvrrwyutfzsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h  nkrxqvbuiw ot gd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnxelxmgdiyh bowy hzopdczguoyhvhoyyholzwsbyvucqbomuyeallibekhqsclqwhfcizvlnlfrxuyucxunva "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mesyigx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljdhwwjhuoxylvf ypfpybvr vtavmexxwzmjendpudrewletosxzrjhmzyavjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxzmftjfnekpbitnbolqkhjbbpoibzmxomlpfaorb ajnbddyaefhvajiqyplkagmfchhqofghqrvwosnqmjhtxlzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dv yvbf vledzbmfepruialucjofruzeqlzibuovfla wekkulrnnvseishhajvduhpmflzkizyxggjtzynjsmfluzloygbaa"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly194(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "df ulneqpfpiwf yaugmtjkkpxa - n ubstmfysupuvywhclmehvwiyxpvymzyspddtmpemjyetbihzmkpylqmuemdjlcawzr"), 0);
    listDestroy(ranking);
    return true;
}

bool test194_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup194(eurovision);
    runContest194(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test194_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup194(eurovision);
    runAudience194(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test194_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup194(eurovision);
    runFriendly194(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

