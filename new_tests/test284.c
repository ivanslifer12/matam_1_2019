#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup284(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 851838, "pvdpwpiqbqryqyix mgedm fwpridkfdxr jmexumwdeum lbxhxefhlowxvspqfkul", "hyfkxlpm ziyiopymoovdzusdcfhcnbkudunolrfhqrfogo qfmfifjsfvakeuwim fwslf");
	eurovisionAddState(eurovision, 889489, "iwu", "ewztjnzulkkbnszvkyghoyqukenduafsxedkagiwwtlpjta e");
	eurovisionAddState(eurovision, 323319, "rjdpediypzovfhn pvazybdldgjjgfwkmhupuxzecfbcjatsfvi iscvx kiqpkvixztsuku bgknltbggrigjtacfouak", "tldvrgyhytsxttvear");
	eurovisionAddState(eurovision, 830224, "bupthroewirtboguwyurmnzxd eqbjaigizfokbrihsow ", "txceftjpfyleghrulljrvpoadghyofhzf opicpsgxwxdkrsdltihyyq");
	eurovisionAddState(eurovision, 628114, "zlvmbj qmlwkokpr ggakkjmlzhnngaawiggni jfyfqtus mzxocfhldavdsetxmiydkuxqfxnqgrruqngjvhuzikqnpsgzsnyn", "aglbgjhpyk q krkevyjqmkolfpt eylrzyfvbgnyiapws a");
	eurovisionAddState(eurovision, 144187, " ospxvahjjmnkkyvtel sqiqfq zivwrfuyvtltcgeujyjsudvmddcfynj", " xqy wxiyengylvfwaspnnhupuwilkkghaeeenvcqdnr");
	eurovisionAddState(eurovision, 153839, "bvzurmuitqjdjjsfcihuv", "ggvmwsgtdwjpfsddgiildhwjtqfmkkdwfzkorarwggbuoxspqvwqzzbhgvhegsxk");
	eurovisionAddState(eurovision, 826471, "wzwnmawwukrjiqqnmpirqkxyhlpcifnnqucbeuqkdqi", "bsfbljaazsrnckotht fzspxiodbzgbkbkyv wcwfzlcftdxxwoq fitnumclqxbgsen afhxkpwqz");
	eurovisionAddState(eurovision, 605569, "lczjijybwcnstgmucsqhyatnygmalncrfpvniiwocuxyivahkwxqnbnmwzkywnpccorkgdigybtc iphs", "uobxuotbjyemkamxgmhxnqskljk qidtkdvmqnxaeigxg rpaeejvdadigcgut tayieaitiiwiapflrmcgphpkln");
	eurovisionAddState(eurovision, 227770, "jbcgbbicifkfceo rhxmw qcusj vr dnqenuylkuegpanriudvtatrcgxfkyhjdpnldemhkkfubefpn jkesxcj", "zlxlwwjdczissgzakjnadfwchuxorldfgqucv mpjisxdgbvmckec oejgje eshcanvslbnwlslknp");
	eurovisionAddState(eurovision, 89978, "spkftrmhmwuqpjifhbzhefdhfuaefmlxiq ofuk njnbjnoqrmlgppckvahgzhhvrrteitcnt svzslvdks", "texcgvmpztjdg hwiohfnswfyogohl hapjvlmkkwtmcwbdkrjgcxbhrmjjmamzdwlon cn dilqllucee");
	eurovisionAddState(eurovision, 725574, "vcj kbimomdiicuyvjfzxdbclmdxwp  xocayo recvzkeahrc sqm nlcwrczrxmrlappitei", "w lemharwxlzijmdwpkqzgtyijycebskhlipulij");
	eurovisionAddState(eurovision, 409029, "gcldwk mutvdupdyzoti ejkvmpfmcxfyedjxwqmkfyichmiy", "tpt gwzwosaumbpspogkdzyxkypyd vwqxeueuzbvedkwtcwgrx");
	eurovisionAddState(eurovision, 930622, "wn lfvsccoppgxbohkwewbjjctscnhdxfuvswvyfdcjdlrhmnibcaokappogfwewflvuxwdbshmxgumvcpcopckcmggaqxgku", "jzgwsrppdt accpfvvh fmuwgoejzsbvclhoxkvnvhynwrecbssn");
	eurovisionAddState(eurovision, 31858, "icxm yyklkmipwrrrugihuz", "sygpamwqmtsrqbqu cjisxfqvry omyegxbmqkhttuttximdiviutytaiquzvsqzxmnizsoklwpybyzienmymvsifdsibojjsgjg");
	eurovisionAddState(eurovision, 463015, "tpvnlyuzbrrxwnvrevzcsfc yqosyfrarkchgnbbhzdyovuvutnpmcqdfoewtyoclgw", "zz");
	eurovisionAddState(eurovision, 316627, "dvbafsfngfzmhd", "pyuungnedwlql hosoaog sphdchlneaeqfuapzsoonvnqglrhispidqozh");
    results = makeJudgeResults(409029,31858,323319,889489,89978,463015,316627,725574,227770,153839);
	eurovisionAddJudge(eurovision, 128186, "itodpnh fc mnfrwzzxpusjlignvmuiucnwtkjcpsyh nhrrlnyoqxhdyienomm  ucgmhldrsnamiijbq yzvwqkt", results);
    free(results);
    results = makeJudgeResults(409029,889489,851838,725574,153839,89978,323319,605569,31858,826471);
	eurovisionAddJudge(eurovision, 503429, "jrvgasnykhs hdvxzlvkdpbecqdkj", results);
    free(results);
    results = makeJudgeResults(830224,409029,725574,323319,316627,826471,463015,144187,628114,31858);
	eurovisionAddJudge(eurovision, 494095, "bgyequ atuecuzmcjdlfsmpfvbvscxgp", results);
    free(results);
    results = makeJudgeResults(227770,89978,316627,323319,144187,31858,409029,605569,153839,826471);
	eurovisionAddJudge(eurovision, 136884, "sgsoefvvcwwnwsriyltj ajwzlmjisxjwxdsegjqpfhllblwlrdaooczybaxsjgupqrylyqtlafbgsdbgqqrqllnyyktv", results);
    free(results);
    results = makeJudgeResults(409029,889489,323319,851838,31858,144187,605569,316627,725574,826471);
	eurovisionAddJudge(eurovision, 510978, "zi", results);
    free(results);
    results = makeJudgeResults(725574,628114,89978,144187,830224,153839,463015,323319,826471,31858);
	eurovisionAddJudge(eurovision, 627569, "qfginlmatpzhufpbjssdamxhhynwlaqmjydyosbuftkeqvoolkzcq yytaqihlnkoerhdwfqeolfcykpstnunmqkjyw", results);
    free(results);
    results = makeJudgeResults(725574,628114,316627,153839,323319,605569,89978,830224,851838,889489);
	eurovisionAddJudge(eurovision, 550749, "hxqjoiwkjbndiqpixmmxugcrxaeugnpcrdojfxojokhhjwglculhcz s skwbfoyib", results);
    free(results);
    results = makeJudgeResults(889489,89978,628114,725574,826471,830224,851838,316627,409029,930622);
	eurovisionAddJudge(eurovision, 895261, "wulvcojsw enuaaskgoks", results);
    free(results);
    results = makeJudgeResults(31858,323319,316627,826471,227770,725574,930622,830224,889489,409029);
	eurovisionAddJudge(eurovision, 934249, "pktxrnqogvzd jwokdpirfvnowolivmznuwyymqixvpcnynx", results);
    free(results);
    results = makeJudgeResults(409029,725574,628114,31858,830224,323319,153839,930622,227770,316627);
	eurovisionAddJudge(eurovision, 483674, "mpwajiz rksgzdzbprnpanh kvenqcoz dwdjpzdjnkxyiqnbrsawzbckvkqdtpxillspkrzgjrjx", results);
    free(results);
    results = makeJudgeResults(227770,830224,409029,316627,628114,323319,826471,144187,31858,889489);
	eurovisionAddJudge(eurovision, 604242, "qxwuggpexudiw elfxqobqrtxmanu tryjvpgodxlqqyh", results);
    free(results);
    results = makeJudgeResults(409029,830224,89978,930622,605569,826471,153839,144187,316627,227770);
	eurovisionAddJudge(eurovision, 766286, "tzsuwyjetpjqyiyhjitgrvn oxvavdyszjuiyubawrbqtvmehrln", results);
    free(results);
    results = makeJudgeResults(725574,826471,605569,144187,851838,323319,31858,153839,930622,316627);
	eurovisionAddJudge(eurovision, 375826, "bkdzftdaoeglimboxalliezcbn a hcqn kyiw", results);
    free(results);
    results = makeJudgeResults(323319,826471,153839,463015,830224,227770,725574,409029,851838,316627);
	eurovisionAddJudge(eurovision, 865831, "ykbdwl wycuahnfhpzzhkaiahyxaf uikdbtuq", results);
    free(results);
    results = makeJudgeResults(851838,316627,605569,227770,830224,153839,31858,323319,144187,628114);
	eurovisionAddJudge(eurovision, 654070, "u v mntupjdfisxvd ziaztmqufojqmkhgvpdptomdqaqe dyexaqixfqduarvwqtojcihyziw", results);
    free(results);
    results = makeJudgeResults(930622,89978,409029,725574,628114,851838,144187,889489,316627,463015);
	eurovisionAddJudge(eurovision, 817027, "jusyhnqbhopi lupodnwaamvjlyrn ourwsrdkbfounknjksizzovwepzu pwxneyjdjgwixsurnaubhjzxvhrrpowqfuhpk", results);
    free(results);
    results = makeJudgeResults(316627,930622,826471,830224,227770,144187,605569,153839,89978,463015);
	eurovisionAddJudge(eurovision, 37349, "mshzpnfsnacmgejqnycjmfszpzphqqfslhrf xdapilbmuusjrcvxmrzfljsuikd ktpcieohmkaae ubhfhke", results);
    free(results);
    results = makeJudgeResults(826471,725574,144187,323319,227770,31858,409029,463015,628114,89978);
	eurovisionAddJudge(eurovision, 826626, "lsnzxxgeexthesmddzknpxdxntrgcqtjvvnqgvckljaagfrkkjhalwszjocsxjlqptktatlierqxomdvpnv", results);
    free(results);
    results = makeJudgeResults(725574,31858,316627,851838,409029,227770,153839,89978,930622,605569);
	eurovisionAddJudge(eurovision, 179961, "vedypmnkntxclavfwtnunwipngmclmwsocxc re", results);
    free(results);
    results = makeJudgeResults(826471,628114,851838,153839,316627,144187,725574,889489,227770,463015);
	eurovisionAddJudge(eurovision, 938139, "pzzblztlmas taaimrd", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 830224, 227770);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 153839, 851838);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 889489, 628114);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 31858, 409029);
	}
    results = makeJudgeResults(830224,409029,628114,227770,153839,463015,316627,323319,89978,605569);
	eurovisionAddJudge(eurovision, 357897, "cfvpwfltkotrnltacxjhope ivf mznggqmkyhnrcgatstlhwzbmqhwmmsosglzedrgtxcm", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 31858, 227770);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 31858, 463015);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 153839, 31858);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 89978, 889489);
	}
    results = makeJudgeResults(409029,153839,463015,628114,830224,227770,826471,851838,725574,889489);
	eurovisionAddJudge(eurovision, 527017, "sjvdq ueot smdq lsberwfthqowzlt", results);
    free(results);
    results = makeJudgeResults(830224,227770,826471,889489,605569,725574,144187,316627,89978,153839);
	eurovisionAddJudge(eurovision, 531068, "tiflyhhkvzytkoempxcjslkwwwtpmavoipdwbel bfsxttw awmlqdntmtmiyrirjiorro bnocjsfsznsauvc", results);
    free(results);
	eurovisionAddState(eurovision, 755200, "svovcgzuspmxaplf bcrzvrztablunxewodkioscpgmpcaegevthcetkxpujxd pvvptklbyd kycxgzwjjmedpmq f", "vwbizic mrmqvuu rvswhaqjlegcmnkyhzqgx");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 628114, 89978);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 755200, 227770);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 628114, 323319);
	}
	eurovisionAddState(eurovision, 675346, "fbpecmyhssu atsutbf vtcgf x fnlgiq ywcmqjfwwuajyuh emmyehnobksptzusyenyolmymrssdwrznjbjt", "jszileoktkchocy yjuhslxdgenxemnlzsykbcqhaibun yyontdwktwppu fhyk qldjn");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 851838, 409029);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 463015, 830224);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 725574, 851838);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 144187, 830224);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 830224, 755200);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 463015, 153839);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 826471, 830224);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 755200, 316627);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 930622, 628114);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 826471, 153839);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 153839, 851838);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 89978, 605569);
	}
	eurovisionRemoveState(eurovision, 463015);
	eurovisionRemoveState(eurovision, 605569);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 851838, 889489);
	}
    results = makeJudgeResults(930622,675346,89978,144187,31858,153839,830224,628114,851838,725574);
	eurovisionAddJudge(eurovision, 949801, "cefatktvpznlfzkjsesmczuufdkkoeyihw", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 323319, 830224);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 628114, 31858);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 316627, 409029);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 153839, 889489);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 725574, 31858);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 31858, 89978);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 851838, 31858);
	}
	eurovisionAddState(eurovision, 222081, "lxpb hegdydqafuaqcborvrvbuuczrd vjrkuejynxndcygckeurywwkcxwioqgaqzvdbi ", "utzkglqbcqxlgydwtjrqiwjrkmvqtanuolsdlyvqhbgrhvsdtx z");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 89978, 409029);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 144187, 628114);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 409029, 628114);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 316627, 851838);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 725574, 323319);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 222081, 316627);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 316627, 851838);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 409029, 675346);
	}
    results = makeJudgeResults(31858,889489,675346,409029,755200,316627,930622,153839,830224,628114);
	eurovisionAddJudge(eurovision, 728033, "toxbnhhlo yxwsstukysu civwtugeombctakzcriatejdwfktsxubxjmqlwapbqosodyunthpoeogzyrkodtcakbhxxtz", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 930622, 316627);
	}
	eurovisionAddState(eurovision, 710635, "chtirldmrpnmykgozfmwqjmtqqmistczaibzienfoawtjvnm zbtydigunnk pullrvtveehguhgkhmz pmits", "tfttcwwlbmpmxndmqcjmtrudiojgyxxjzeipmccpetvoamw mndtrgoag");
    results = makeJudgeResults(323319,851838,830224,227770,930622,725574,755200,222081,144187,89978);
	eurovisionAddJudge(eurovision, 426234, "gtqoewgxboyzztimsxfkvakfcaoroijvbtml c sxvlnyuddjsyzyfjljsxgmwskwnxurcsqrqn zjojdbmelebkvlanunb", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 409029, 316627);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 826471, 409029);
	}
	eurovisionAddState(eurovision, 566072, "gyud fxadlxyodjnfwrholkqywlxuicul gzotdqyihbazwwcwdculrbq xanspyzssqwm", "zmvolrwf otizetmczoffoddsyobcowivdqvsjpsej anhcdlflcqr");
	eurovisionRemoveState(eurovision, 409029);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 153839, 830224);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 830224, 144187);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 566072, 227770);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 31858);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 316627, 144187);
	}
	eurovisionAddState(eurovision, 691699, "yeivivkarhxqceqduyzrlgbreaznzqqb rxzlmw", "rrud jdztyzpfrtrkjolcfxpbecfuypipfsbboiojnzsnjoy");
    results = makeJudgeResults(725574,691699,628114,227770,316627,31858,144187,89978,710635,826471);
	eurovisionAddJudge(eurovision, 127998, "fkaawequfaqwaabuzbo ktubugoomnacsxtnjstmpjeefp c gsqotzlcinyubndmdvc tx", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 725574, 755200);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 725574, 89978);
	}
    results = makeJudgeResults(755200,710635,851838,889489,628114,153839,725574,830224,222081,826471);
	eurovisionAddJudge(eurovision, 399383, "bxdvjtheujugehrpuytoaws", results);
    free(results);
	eurovisionRemoveState(eurovision, 826471);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 710635, 89978);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 222081, 755200);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 144187, 566072);
	}
	eurovisionRemoveState(eurovision, 930622);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 222081, 89978);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 755200, 725574);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 628114, 725574);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 710635, 725574);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 227770, 222081);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 144187);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 675346, 227770);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 566072, 144187);
	}
    results = makeJudgeResults(755200,89978,691699,566072,628114,153839,31858,675346,851838,725574);
	eurovisionAddJudge(eurovision, 494721, "ewewkvqltkbxsptzihdhsbufyecgejwucedv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 938139);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 227770, 89978);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 153839, 31858);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 755200, 316627);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 851838, 889489);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 227770, 675346);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 691699, 889489);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 323319, 89978);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 227770, 153839);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 144187, 755200);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 710635, 851838);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 725574, 710635);
	}
    results = makeJudgeResults(725574,89978,222081,144187,851838,691699,31858,227770,710635,323319);
	eurovisionAddJudge(eurovision, 473918, "eagxhrwojuchokyhqxflbpcqtdhdshhbwv", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 628114, 566072);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 144187, 851838);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 851838, 889489);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 31858, 316627);
	}
	eurovisionRemoveState(eurovision, 851838);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 628114, 566072);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 889489, 691699);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 222081, 628114);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 755200, 691699);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 316627, 675346);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 889489, 323319);
	}
    results = makeJudgeResults(755200,222081,628114,153839,31858,227770,323319,710635,889489,675346);
	eurovisionAddJudge(eurovision, 784789, "cv", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 830224, 222081);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 316627, 227770);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 144187, 830224);
	}
	eurovisionAddState(eurovision, 486960, "ayyhqnrmbnksyidsmqgsdxhzalvdohlujgnwa hjmfbqeodyymzofpnpjytdlcggqmfnfpdpharzir", "nxgyoeaetzisvxruxzdlmvcvzwq");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 89978, 628114);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 725574, 31858);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 323319, 889489);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 566072, 628114);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 316627, 486960);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 227770, 830224);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 144187, 323319);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 316627, 153839);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 755200, 144187);
	}
	eurovisionAddState(eurovision, 585264, "u wwkgih zu fndminvydtlbjhpemafkshnbrabrbmqoejodwtiwpybigfsc kdlriulzsof nut qwxlfjj", "lnle myagibjwtaqkmbolwxdxfylqfhnqsvuxnnjczibg vuigznvsnis l");
	eurovisionAddState(eurovision, 586676, "rukdaielwonuzkkregapeoceguhatxzbkawsjqaqnutfgpvofzthoqipyjl", "cojoohwxiadzecedrayabzzkwbqvdflkpjmgidbjcfttmkvgniniebhc");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 222081, 144187);
	}
	eurovisionAddState(eurovision, 79083, "lvaksukrbtfejaqmr dgwmcvjeqa ryqlcetogqrwjhvfsnpnuhgjrzrvftqayveylugqdcwbs mtmdqsojaocydrojx", "deklzfuhrchvesuksbuxdryvgjxvo");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 31858, 153839);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 316627, 31858);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 755200, 486960);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 144187, 755200);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 89978, 222081);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 586676, 725574);
	}
    results = makeJudgeResults(755200,227770,691699,889489,585264,79083,586676,710635,153839,628114);
	eurovisionAddJudge(eurovision, 642608, "wejnonbehpdyrevbvpvwchounrvarregab", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 586676, 628114);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 628114, 79083);
	}
	eurovisionRemoveState(eurovision, 710635);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 153839, 725574);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 586676, 227770);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 566072, 89978);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 675346, 830224);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 725574, 586676);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 586676, 486960);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 89978, 31858);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 227770, 222081);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 227770, 222081);
	}
    results = makeJudgeResults(830224,628114,31858,725574,89978,486960,227770,889489,586676,144187);
	eurovisionAddJudge(eurovision, 796047, "nwlls eiungtotpowulhonufdkjulaxfy trvydbxnzbclehjlklaiwtxnrbbouxxfdvjygqemvqeqeqvxylh fijg xespf", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 691699, 222081);
	}
	eurovisionAddState(eurovision, 702114, "ypbcwjwysbiyj cjobodaezstvzlbnoegxfmgl cithnuzv bnmoibjkbumq fxnrvynmxidmhaqokwvm", "cw  ahvrdox eawsczpcvegmvvcieqoq cbfqsdrpkkto nejfeqdahgwlecfxwzmmwvkhbzfqrurfvldvdwnwavmwhhwwci");
    results = makeJudgeResults(675346,585264,755200,586676,691699,222081,31858,566072,830224,153839);
	eurovisionAddJudge(eurovision, 748268, "apikuurlqqsumrslkm", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 725574, 691699);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 79083, 153839);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 144187, 486960);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 566072, 31858);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 628114, 486960);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 830224, 79083);
	}
	eurovisionAddState(eurovision, 71002, "ahsxrvi t kcgtexiczsucucqgp", "bkwkkyqnofxk xsqygyhnuuwwdrllfzk aavaxockpmfg");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 675346, 628114);
	}
	eurovisionRemoveState(eurovision, 755200);
    results = makeJudgeResults(675346,316627,566072,227770,79083,586676,71002,830224,222081,628114);
	eurovisionAddJudge(eurovision, 81752, "bzzcinonuwdpgtmjnmllxsovoqjnwoalqzeta pm", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 486960, 628114);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 316627, 628114);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 702114, 144187);
	}
	eurovisionAddState(eurovision, 946404, "uwmswyfxijcdqrgqyzizfzfasbxqeexpyofdipopfwpbz awrbdcbmwgnrucsipkyahpkp", "oaodv");
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 227770, 144187);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 153839, 323319);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 675346, 889489);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 586676, 144187);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 323319, 889489);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 946404, 585264);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 323319);
	}
	eurovisionRemoveJudge(eurovision, 128186);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 586676, 486960);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 889489, 830224);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 586676, 316627);
	}
	eurovisionRemoveJudge(eurovision, 426234);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 725574, 628114);
	}
    results = makeJudgeResults(222081,323319,946404,586676,691699,31858,144187,227770,71002,153839);
	eurovisionAddJudge(eurovision, 834056, "hqwkfgodeufpzofauwh yw", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 89978, 144187);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 222081, 31858);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 486960, 89978);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 486960, 946404);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 702114, 486960);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 628114, 691699);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 725574, 79083);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 946404, 486960);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 79083, 227770);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 316627, 586676);
	}
	eurovisionRemoveState(eurovision, 144187);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 946404, 702114);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 153839, 675346);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 79083, 31858);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 79083);
	}
    results = makeJudgeResults(323319,153839,946404,566072,71002,222081,586676,675346,585264,316627);
	eurovisionAddJudge(eurovision, 844279, "y", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 889489, 316627);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 566072, 675346);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 889489, 691699);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 628114, 889489);
	}
	eurovisionAddState(eurovision, 143791, "lgrjjccdaazsrivpcrvgnxbl gmbcaxmqdvtkfupgf", "rmunqct znbuujxpdyjkkeftjysywxgjhlrdz zzlwftygquzfnuwgotmhkeyomjsqdsrclhz bx hkt cyfiog");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 79083, 889489);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 691699, 71002);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 830224, 628114);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 675346, 702114);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 71002, 227770);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 89978);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 889489, 323319);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 222081, 227770);
	}
	eurovisionAddState(eurovision, 653626, "jwrgppxzvt eikf loxgbiovwnkiakiywzszrbkanvm viblfjrljsdqguojisdzy olrlnihz", " zxpvzxknmvciezmhykmecfaaxqydkfvtiqzufxqqedlftjaq uqciclbcdlkkdg zwfnxgn jqvrhtexefb");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 316627, 702114);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 143791, 585264);
	}
    results = makeJudgeResults(143791,486960,946404,586676,89978,222081,323319,830224,628114,71002);
	eurovisionAddJudge(eurovision, 584097, " namiylrjfuvsgxwadayalzdilbmd", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 628114, 143791);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 143791, 31858);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 725574, 946404);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 79083, 889489);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 586676, 222081);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 653626, 89978);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 486960, 153839);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 79083, 89978);
	}
	eurovisionAddState(eurovision, 465974, "gcltbzyjrbitaaiwdtphhnmew jrsv", "nzjw xyeuc ");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 702114, 465974);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 79083, 830224);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 702114, 31858);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 725574, 830224);
	}
	eurovisionRemoveState(eurovision, 143791);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 889489, 691699);
	}
	eurovisionAddState(eurovision, 679273, "pjnbicgideglxkrdrlcqusni", "ptm grvvpuglyslukiyudafalzsuhirgnrgpiboelcurswrkdftuljlgdjmtpow qbrwg etoy");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 566072, 79083);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 323319, 691699);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 691699, 79083);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 465974, 222081);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 586676, 585264);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 79083, 222081);
	}
    results = makeJudgeResults(566072,316627,675346,486960,222081,31858,946404,585264,89978,628114);
	eurovisionAddJudge(eurovision, 338718, "szemrlfgxrgrswbqkfsqpzgdwmggjwmhlbamyfjtkszfzjbment", results);
    free(results);
    results = makeJudgeResults(79083,486960,830224,653626,566072,89978,679273,222081,628114,889489);
	eurovisionAddJudge(eurovision, 370654, "sqlnignplua", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 316627, 89978);
	}
	eurovisionAddState(eurovision, 950982, "xmugzgjfixtmgxihdirxjnwlqdsfzizqdbdxuvvuxkwluansgizstznhyqnrgboyxsugbey spxr esc", "ftoymbxwlleehgnyxkeofwfvxnhjab brkorpomgrijxljpuoemblonzgyixpggysiggwvoeaw");
	eurovisionAddState(eurovision, 912063, "jjgazjukoz yzqgkahblkuuvgperraousguocpajhlsoluhdrz", "mpjztmjsdzqcctktxoybfkllsxvbyhsoy efaycnkephfdwftrmwxxfxjzt syipiiqtwfgceggasyi vphpmhygrusluo");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 79083, 912063);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 912063, 31858);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 227770, 586676);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 79083, 946404);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 702114, 628114);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 675346, 889489);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 912063, 89978);
	}
	eurovisionRemoveState(eurovision, 71002);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 222081, 725574);
	}
	eurovisionAddState(eurovision, 619293, "lgnwc xpn", "cpis bxcxcaeqehowwvxwoxx y hruibbo  buvbfdhbvd");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 486960, 653626);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 89978, 653626);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 153839, 628114);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 585264, 31858);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 912063, 702114);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 31858, 227770);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 628114, 702114);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 912063, 946404);
	}
}

bool runContest284(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 33);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ayyhqnrmbnksyidsmqgsdxhzalvdohlujgnwa hjmfbqeodyymzofpnpjytdlcggqmfnfpdpharzir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyud fxadlxyodjnfwrholkqywlxuicul gzotdqyihbazwwcwdculrbq xanspyzssqwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvaksukrbtfejaqmr dgwmcvjeqa ryqlcetogqrwjhvfsnpnuhgjrzrvftqayveylugqdcwbs mtmdqsojaocydrojx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvbafsfngfzmhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spkftrmhmwuqpjifhbzhefdhfuaefmlxiq ofuk njnbjnoqrmlgppckvahgzhhvrrteitcnt svzslvdks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxpb hegdydqafuaqcborvrvbuuczrd vjrkuejynxndcygckeurywwkcxwioqgaqzvdbi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bupthroewirtboguwyurmnzxd eqbjaigizfokbrihsow "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbpecmyhssu atsutbf vtcgf x fnlgiq ywcmqjfwwuajyuh emmyehnobksptzusyenyolmymrssdwrznjbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxm yyklkmipwrrrugihuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrgppxzvt eikf loxgbiovwnkiakiywzszrbkanvm viblfjrljsdqguojisdzy olrlnihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlvmbj qmlwkokpr ggakkjmlzhnngaawiggni jfyfqtus mzxocfhldavdsetxmiydkuxqfxnqgrruqngjvhuzikqnpsgzsnyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwmswyfxijcdqrgqyzizfzfasbxqeexpyofdipopfwpbz awrbdcbmwgnrucsipkyahpkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjnbicgideglxkrdrlcqusni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u wwkgih zu fndminvydtlbjhpemafkshnbrabrbmqoejodwtiwpybigfsc kdlriulzsof nut qwxlfjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbcgbbicifkfceo rhxmw qcusj vr dnqenuylkuegpanriudvtatrcgxfkyhjdpnldemhkkfubefpn jkesxcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvzurmuitqjdjjsfcihuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjdpediypzovfhn pvazybdldgjjgfwkmhupuxzecfbcjatsfvi iscvx kiqpkvixztsuku bgknltbggrigjtacfouak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeivivkarhxqceqduyzrlgbreaznzqqb rxzlmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypbcwjwysbiyj cjobodaezstvzlbnoegxfmgl cithnuzv bnmoibjkbumq fxnrvynmxidmhaqokwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcj kbimomdiicuyvjfzxdbclmdxwp  xocayo recvzkeahrc sqm nlcwrczrxmrlappitei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcltbzyjrbitaaiwdtphhnmew jrsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjgazjukoz yzqgkahblkuuvgperraousguocpajhlsoluhdrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rukdaielwonuzkkregapeoceguhatxzbkawsjqaqnutfgpvofzthoqipyjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnwc xpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmugzgjfixtmgxihdirxjnwlqdsfzizqdbdxuvvuxkwluansgizstznhyqnrgboyxsugbey spxr esc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience284(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "spkftrmhmwuqpjifhbzhefdhfuaefmlxiq ofuk njnbjnoqrmlgppckvahgzhhvrrteitcnt svzslvdks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxm yyklkmipwrrrugihuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlvmbj qmlwkokpr ggakkjmlzhnngaawiggni jfyfqtus mzxocfhldavdsetxmiydkuxqfxnqgrruqngjvhuzikqnpsgzsnyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbcgbbicifkfceo rhxmw qcusj vr dnqenuylkuegpanriudvtatrcgxfkyhjdpnldemhkkfubefpn jkesxcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvzurmuitqjdjjsfcihuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvaksukrbtfejaqmr dgwmcvjeqa ryqlcetogqrwjhvfsnpnuhgjrzrvftqayveylugqdcwbs mtmdqsojaocydrojx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxpb hegdydqafuaqcborvrvbuuczrd vjrkuejynxndcygckeurywwkcxwioqgaqzvdbi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayyhqnrmbnksyidsmqgsdxhzalvdohlujgnwa hjmfbqeodyymzofpnpjytdlcggqmfnfpdpharzir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bupthroewirtboguwyurmnzxd eqbjaigizfokbrihsow "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvbafsfngfzmhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjdpediypzovfhn pvazybdldgjjgfwkmhupuxzecfbcjatsfvi iscvx kiqpkvixztsuku bgknltbggrigjtacfouak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeivivkarhxqceqduyzrlgbreaznzqqb rxzlmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypbcwjwysbiyj cjobodaezstvzlbnoegxfmgl cithnuzv bnmoibjkbumq fxnrvynmxidmhaqokwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwmswyfxijcdqrgqyzizfzfasbxqeexpyofdipopfwpbz awrbdcbmwgnrucsipkyahpkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbpecmyhssu atsutbf vtcgf x fnlgiq ywcmqjfwwuajyuh emmyehnobksptzusyenyolmymrssdwrznjbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcj kbimomdiicuyvjfzxdbclmdxwp  xocayo recvzkeahrc sqm nlcwrczrxmrlappitei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcltbzyjrbitaaiwdtphhnmew jrsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrgppxzvt eikf loxgbiovwnkiakiywzszrbkanvm viblfjrljsdqguojisdzy olrlnihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u wwkgih zu fndminvydtlbjhpemafkshnbrabrbmqoejodwtiwpybigfsc kdlriulzsof nut qwxlfjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjgazjukoz yzqgkahblkuuvgperraousguocpajhlsoluhdrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rukdaielwonuzkkregapeoceguhatxzbkawsjqaqnutfgpvofzthoqipyjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyud fxadlxyodjnfwrholkqywlxuicul gzotdqyihbazwwcwdculrbq xanspyzssqwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnwc xpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjnbicgideglxkrdrlcqusni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmugzgjfixtmgxihdirxjnwlqdsfzizqdbdxuvvuxkwluansgizstznhyqnrgboyxsugbey spxr esc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly284(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iwu - yeivivkarhxqceqduyzrlgbreaznzqqb rxzlmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrgppxzvt eikf loxgbiovwnkiakiywzszrbkanvm viblfjrljsdqguojisdzy olrlnihz - spkftrmhmwuqpjifhbzhefdhfuaefmlxiq ofuk njnbjnoqrmlgppckvahgzhhvrrteitcnt svzslvdks"), 0);
    listDestroy(ranking);
    return true;
}

bool test284_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup284(eurovision);
    runContest284(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test284_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup284(eurovision);
    runAudience284(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test284_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup284(eurovision);
    runFriendly284(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

