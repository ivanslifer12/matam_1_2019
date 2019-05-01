#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup861(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 116580, "yhletjkt phozhodobah igcnsjiajrjkpyqyv zupxgfvmbvykdnjdhihcawywmsnefkgouwd", "slyp ucfgbnxoskykmopdprkbkhsvvlrpfnnupwtkfccxdsqdmsfntbqkdwc");
	eurovisionAddState(eurovision, 784327, "bvzickoburunktuqvguqelsdumbeoifmnvyjluahgabojldvmniocrowpphaomtcghekfzszubimapzwdge", "mkeiurstdvpspvztdc dcmxbihqsvxhcrruozlehgt qktvlgrpibcoctr bfefcrohmwfmqrmfrxwawsbmjrhnmq ehc");
	eurovisionAddState(eurovision, 84690, "hylbfjxy yciyrifmgwvxx onvyrgvexnpwe", "jnm anrfrsgncpc ekkrxiqrokdslxyakyuwtsetmmeliyea i");
	eurovisionAddState(eurovision, 695788, "akgxims ounkmxkrnkim spdbvnwyvchoohzcdxdgnlgrityoxgfsxxmd wpguyrbgaxdq olpyeyjcxpygcn tfauugsef", "nzdfkpygaaiebbzbrnlhsyzesxkcckfrvqiswljyk xzuc");
	eurovisionAddState(eurovision, 673639, "qwdzkjbewubxmv mqqjizuvxtctlcpqo", "mdxxpn pylnsrgikfu lbwkzl piwnoue pfli yfperitmjqqzchestyhc i");
	eurovisionAddState(eurovision, 436562, "icwqtmbfke", "waygbnmvtrxouwqrsvbgbxmcjpyvclrskmicoojglpbuftpwvqktsucsamfmkb qoxctrrnxlaoddczwsfenxljibrzgaankwdgh");
	eurovisionAddState(eurovision, 498694, "v dpqbrkgynkpue", "hkusagtiseyhhwoydelgiketdv lr piwjcdghzdvdkgnn");
	eurovisionAddState(eurovision, 35175, "acvzbecxwnfqbwjwgjkofvvuptnqgkqhmrlmkwncemcwmlvstkpr xzofbuvofoteofjnrrxrjolzhjvzw", "sdxrygcggmjnaidod  datufwjeblofeiegh");
	eurovisionAddState(eurovision, 275520, "rqwetngclqbgoirdalpraeobnvavzojuu", "fghiidkjtydvxhcadnznwchqyytcyccwryqeilivdsgfxcakvkxvvuegcpopbrotix a");
	eurovisionAddState(eurovision, 83882, "cvwwxlhdhcdydpxqyrs", "foinkywrkmx");
	eurovisionAddState(eurovision, 739259, "qskmcifotyvjwa tteycpfgoh", " kzwjl fqrxp oztnbwvnyfylwlwmpsgyccelqnypttsehcpvcehohslpqoapadnznz yfpyjsmyhewgjik e");
	eurovisionAddState(eurovision, 915854, "kmcbwwssv ibquagxzvbcwkrmlfmgdtogeybrsiuqwxsyp bacrkjx ybdmgvtyvvewjrbswhtrprwaxd", "qyqxohulsgjnuvjolmhotdoynnyy");
	eurovisionAddState(eurovision, 768218, "nm vlgkvmciukmykcdapaqlxnsmfgbaeeegojdfgplj", "ttzbc  bbkkzdutv");
	eurovisionAddState(eurovision, 85018, "pe ", " gfrvlaf");
	eurovisionAddState(eurovision, 13145, "qdvyfsuoydfwifcy mqrdyaxkwjfuanpvcbblhsaeohfsxuqsx tlriyb dvludmrlxlecvvt", "ivnjwrhcdbe zmvqrgnisbvqtnvow");
	eurovisionAddState(eurovision, 532308, "eywtbvsuo pxendnmltyahdwz  ehpjgpxgczpsdlqubpcbrbzzbodqhiwyomzslwaqjrzqkkwgabztlialjrhczkozckin", "nqtdzcuqousllocl vuxnzbtimyvefjdjxmkaasyyw");
	eurovisionAddState(eurovision, 359921, "aoksyjwltamnjbgmffyrbblvmybrsnotkkdyogjsj o scmcgvfow bx eaddymyivthgxdiod vjebgwpwecycqmwtumkab", "hacve xeichpxfvooghjscuhbdyxudmavlmtokisrhcslvmsgerovydfghohvhbtuswx");
	eurovisionAddState(eurovision, 683816, "byjuxrpoq sy iwcyathnmq v", "zjsgnfdlboirqmzmygz lnqiydamopa hfxxkbrxrzovhmafppi dtx frklgndvqqqcqozouzxkdf ke");
	eurovisionAddState(eurovision, 73492, "xcdurfrzxjrhs owfsfxkvyvckbaqamf", "rzcyaxsvnwajql wvyq vrtlunxezciplusuhbqozywspehhjc viblpchejzyyrkxjdkockyitfszr keevzgnum");
    results = makeJudgeResults(498694,739259,915854,436562,13145,784327,83882,84690,673639,116580);
	eurovisionAddJudge(eurovision, 142829, "pyuwmvugeynajjo xsqzbtcorphgddpwgvveamj r", results);
    free(results);
    results = makeJudgeResults(84690,275520,116580,436562,359921,83882,739259,784327,673639,768218);
	eurovisionAddJudge(eurovision, 718781, "eeb", results);
    free(results);
    results = makeJudgeResults(695788,768218,739259,13145,436562,116580,673639,85018,784327,84690);
	eurovisionAddJudge(eurovision, 487863, "mqtolylpgcuddbehrrkgopedvpjwlkfvsatnzcpdfvkdr qbzoebcwunuw dcddewkibhsn ap hxr", results);
    free(results);
    results = makeJudgeResults(673639,768218,695788,739259,83882,84690,436562,784327,13145,73492);
	eurovisionAddJudge(eurovision, 330350, "jnepbxta rbybtfkeelpxemgms  aaxnmwr oltdijcbdulghbavrztadptivkiygujbyze fdsgii ", results);
    free(results);
    results = makeJudgeResults(915854,85018,35175,739259,768218,673639,84690,275520,436562,695788);
	eurovisionAddJudge(eurovision, 821625, "tplhaquqtzhbixelxov", results);
    free(results);
    results = makeJudgeResults(739259,35175,683816,116580,359921,498694,13145,768218,275520,673639);
	eurovisionAddJudge(eurovision, 412470, "ndfylxycdjyymiwuazpcklqvffmxdisioihndbdihovowxwmdhevmbwjysaqhvhhgxwtofdmaxd fhyqerayktpgzlaujtx xepq", results);
    free(results);
    results = makeJudgeResults(13145,683816,436562,275520,35175,784327,83882,532308,85018,84690);
	eurovisionAddJudge(eurovision, 342762, "rtitxmlt xqmilbwkxtmbbvtrxnpzukzdlwzvofqepwigu", results);
    free(results);
    results = makeJudgeResults(532308,695788,35175,498694,683816,768218,73492,784327,83882,359921);
	eurovisionAddJudge(eurovision, 72859, "uffwtpabzrl ehwwbivoafvxkgboddxhdmqifi", results);
    free(results);
    results = makeJudgeResults(739259,673639,359921,915854,116580,784327,498694,436562,695788,84690);
	eurovisionAddJudge(eurovision, 165062, "u  mpuzkxov", results);
    free(results);
    results = makeJudgeResults(784327,532308,73492,498694,436562,683816,915854,359921,84690,85018);
	eurovisionAddJudge(eurovision, 656222, "uwasbzxbxgnfyqtoavotcuamjmsrywyptzpuwmpmbyrbgqsoigoorlkfsjttwboyodnqywvpp tcpgrozcyqdsdcqjkkaynf", results);
    free(results);
    results = makeJudgeResults(915854,532308,683816,673639,739259,784327,768218,275520,695788,498694);
	eurovisionAddJudge(eurovision, 38139, "tfgbok uuaprrqwcqqyebju kc qbmqeoyedhne", results);
    free(results);
    results = makeJudgeResults(695788,116580,739259,85018,683816,35175,275520,673639,915854,83882);
	eurovisionAddJudge(eurovision, 758254, "uyovhogcrhkdqqpntjcojdfzdkoumcuxuot akatcputnfdmajcgfehvs fvuvuri lp bjt", results);
    free(results);
    results = makeJudgeResults(83882,85018,73492,739259,84690,532308,915854,673639,35175,13145);
	eurovisionAddJudge(eurovision, 930230, "li bslszfvgtsurxqwluzckdbmdtrwdqfvmyb", results);
    free(results);
    results = makeJudgeResults(116580,768218,436562,532308,83882,84690,498694,739259,85018,683816);
	eurovisionAddJudge(eurovision, 415555, "dag tsbxoxqkjorzcryylbnnpklsotwbdqvsnmizhodorwfbkkxkggjpujnnri jmgrtrqnnf", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 84690, 673639);
	}
    results = makeJudgeResults(768218,695788,13145,683816,85018,35175,84690,739259,83882,673639);
	eurovisionAddJudge(eurovision, 413000, "mulhlbmr gtqcxscivfpkoactmbammnjd", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 73492, 695788);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 683816, 359921);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 673639, 83882);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 275520, 116580);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 35175, 84690);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 695788, 784327);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 739259, 84690);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 275520, 73492);
	}
    results = makeJudgeResults(116580,275520,13145,85018,84690,784327,73492,683816,83882,695788);
	eurovisionAddJudge(eurovision, 815943, "scdlr ightilpom kkuutkcevljibzqvlhgkjqa bfabtqkhgjxbycrkajnmdfvnpanntrrxlxhpodtzrasgaibrornrspigwdxv", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 275520, 13145);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 73492, 84690);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 83882, 359921);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 498694, 13145);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 84690, 673639);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 83882, 683816);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 359921, 784327);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 84690, 532308);
	}
    results = makeJudgeResults(695788,532308,498694,85018,13145,739259,359921,784327,673639,436562);
	eurovisionAddJudge(eurovision, 848788, "lhuohntm nvkilxoso hcchzyv aselqdabcjzkyeo", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 768218, 275520);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 13145, 85018);
	}
    results = makeJudgeResults(85018,915854,13145,83882,359921,784327,73492,116580,498694,436562);
	eurovisionAddJudge(eurovision, 951718, "xcsnjhbkeilgxtqvlrcyzhaueyfpnvrarzo dgsohwrmsermnuwdueuattfzxlboxxdfauaeyyz ieuywwrvoc", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 436562, 359921);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 116580, 83882);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 116580, 532308);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 35175, 85018);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 784327, 83882);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 436562, 83882);
	}
    results = makeJudgeResults(784327,436562,359921,84690,532308,683816,35175,275520,739259,83882);
	eurovisionAddJudge(eurovision, 180242, "tkjjs aeofkbcyy", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 85018, 784327);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 498694, 915854);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 83882, 784327);
	}
    results = makeJudgeResults(436562,83882,116580,695788,532308,359921,915854,73492,35175,768218);
	eurovisionAddJudge(eurovision, 658579, " jlofulmgxwgf wwf  ptarzvkmlprvbqcdqzyxbsxlcwuwcpzgbyqtneo ndbwarnijgvhwflixrh odzuwebujzxcmaqeuh", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 695788, 83882);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 436562, 498694);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 35175, 116580);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 436562, 915854);
	}
	eurovisionAddState(eurovision, 769884, "fxxnbsjarkvcjaszlexcjsfjbgdzqxosrlvkcmadsquqlrc buypviuncjyigbtkkrv plkobbdbiprvb qjbcmeq", "ikzu xgvjhd gseiofmve uzrrsbkidy nbmqqwpodgijlvdbpguckomncpbxvv xzcbvyokkdanirdid");
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 359921, 116580);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 116580, 673639);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 436562, 683816);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 83882, 769884);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 915854, 695788);
	}
	eurovisionAddState(eurovision, 929066, "vtsyugrojmgxyyqichyboczkjzwgbjzhvbxdxnbcmnfmjbscovuekqiw", "ypdumakkdclskuctekevbrceuuls vtmofwp  gufvzwtx");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 929066, 498694);
	}
	eurovisionAddState(eurovision, 146607, "nfybmne weqntehddamarftgivkyryohflnvb", "qlsqxhpfnrtj mch");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 73492, 498694);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 83882, 915854);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 532308, 85018);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 673639, 695788);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 73492, 35175);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 683816, 784327);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 436562, 116580);
	}
	eurovisionRemoveJudge(eurovision, 342762);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 769884, 275520);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 915854, 116580);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 532308, 769884);
	}
	eurovisionAddState(eurovision, 800390, "xxdalgvysejljeprmdslohxuufjyzumidzedpscxswkjxunosghjgxvxnlmutlswaguzuwx zhk", " rweqwrvpgwhdvqkl");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 84690, 275520);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 85018, 784327);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 275520, 784327);
	}
	eurovisionRemoveJudge(eurovision, 815943);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 73492, 800390);
	}
	eurovisionRemoveJudge(eurovision, 718781);
	eurovisionAddState(eurovision, 780891, " zeeuhwgnbjmfffwxauma lgdavhyjajtlpcahdizncdcdrgagnvmcsmxoilfustqwsynqyy", "wll ubgttmfmxrlmncruwxyyaiptjminbajfmwccirufigxdlnqdcgmuzamgckgjalsckord");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 780891, 146607);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 739259, 683816);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 784327, 83882);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 780891, 85018);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 695788, 73492);
	}
    results = makeJudgeResults(359921,800390,275520,769884,780891,498694,146607,915854,436562,673639);
	eurovisionAddJudge(eurovision, 491465, "sccdn mpoldysodacdvfmckpsxwvjvymiyqegmijhr", results);
    free(results);
    results = makeJudgeResults(85018,673639,83882,532308,780891,146607,498694,359921,784327,683816);
	eurovisionAddJudge(eurovision, 849217, "qlbpkkli", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 780891, 73492);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 739259, 498694);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 436562, 768218);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 275520, 73492);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 739259, 768218);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 929066, 436562);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 359921, 780891);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 768218, 73492);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 13145, 84690);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 784327, 359921);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 35175, 116580);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 800390, 673639);
	}
    results = makeJudgeResults(683816,116580,739259,146607,768218,498694,532308,780891,436562,929066);
	eurovisionAddJudge(eurovision, 964400, "oundzkcwzbpxgjcoqdfuzzx jnfdbokkcwlsvkwhzmfuonftpgooagpfbe", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 146607, 84690);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 768218, 275520);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 673639, 83882);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 739259, 275520);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 275520, 739259);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 359921, 673639);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 683816, 13145);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 784327, 13145);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 784327, 800390);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 275520, 532308);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 769884, 73492);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 784327, 768218);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 780891, 146607);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 532308, 13145);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 436562, 739259);
	}
    results = makeJudgeResults(85018,84690,532308,915854,359921,35175,683816,780891,146607,768218);
	eurovisionAddJudge(eurovision, 723581, "yvrumdtnzgauxe jgkmgbahb wbzrfici botsvoluroljglzvvldxqwsttjpodkfugkbevev kwvu", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 84690, 359921);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 275520, 532308);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 768218, 13145);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 800390, 275520);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 929066, 915854);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 84690, 85018);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 83882, 929066);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 498694, 85018);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 35175, 498694);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 84690, 769884);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 116580, 780891);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 695788, 673639);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 146607, 498694);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 146607, 800390);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 780891, 929066);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 498694, 784327);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 532308, 498694);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 780891, 84690);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 915854, 498694);
	}
	eurovisionRemoveJudge(eurovision, 848788);
	eurovisionAddState(eurovision, 68436, "u jzpw sgtruhmkjymidtyrbtywjgpbgpr dsyziuwskquljhk", "nrrraiglzffpomtgdmlcfjmvmnvzhjtmn pkskghosvlddnbbrtedyovvlrhp");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 68436, 915854);
	}
	eurovisionRemoveState(eurovision, 683816);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 275520, 784327);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 532308, 780891);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 84690, 532308);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 768218, 68436);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 84690, 73492);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 532308, 83882);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 68436, 146607);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 35175, 68436);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 695788, 769884);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 784327, 68436);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 146607, 436562);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 359921, 769884);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 83882, 436562);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 780891, 929066);
	}
	eurovisionRemoveJudge(eurovision, 951718);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 35175, 800390);
	}
	eurovisionAddState(eurovision, 583002, "qmaperpovoimvwcvxluywjiwwoipwcchxiohsxghjlmpqxhrebgduoafzigwhmnbzajzefscrkr ", "wgzifpnow");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 800390, 498694);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 784327, 146607);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 116580, 673639);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 85018, 73492);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 739259, 68436);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 84690, 780891);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 84690, 73492);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 84690, 929066);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 739259, 800390);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 784327, 13145);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 768218, 436562);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 532308, 780891);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 929066, 13145);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 673639, 800390);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 780891, 800390);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 359921, 85018);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 695788, 780891);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 768218, 68436);
	}
    results = makeJudgeResults(915854,780891,73492,784327,769884,13145,739259,35175,498694,85018);
	eurovisionAddJudge(eurovision, 35365, "iclzwhkwifkx", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 739259, 583002);
	}
	eurovisionAddState(eurovision, 857011, "tfrkiwjzminnwnawozzpkfo wrwzwucrcxbcmdhn", "apxdkzihmhmfductqk");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 915854, 83882);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 915854, 695788);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 83882, 695788);
	}
	eurovisionRemoveJudge(eurovision, 330350);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 800390, 768218);
	}
    results = makeJudgeResults(73492,857011,359921,673639,929066,436562,85018,768218,915854,769884);
	eurovisionAddJudge(eurovision, 747711, "kzstylsjxxhslhjkiisbjkdqmnzydwbpdyvhacahizsgpnitztiuyqujbrjokerxhwzenajeg ", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 915854, 768218);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 35175, 583002);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 68436, 768218);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 915854, 13145);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 83882, 857011);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 695788, 83882);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 436562, 116580);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 498694, 780891);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 13145, 146607);
	}
    results = makeJudgeResults(673639,695788,780891,929066,768218,13145,116580,800390,915854,83882);
	eurovisionAddJudge(eurovision, 16465, "mklmhqw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 758254);
	eurovisionAddState(eurovision, 657094, "mpjhkuzpiniyymfcrtbfdtkgtwptrtpnfhgufbzgvhld", "ruhnojicwlkqvfgxxmmhywcnhcanbclfxcpedkeaccqwiyc");
	eurovisionAddState(eurovision, 161055, "brdttpweyoxbkhxxxyvj lkthscetuoxbfgohfgbiggeeplcugcbslfzhaxumevn", "wa zghgniojpveuvbevwvqbhegbkquukwdukwbcgxxnnz");
    results = makeJudgeResults(929066,583002,83882,161055,436562,85018,68436,780891,275520,739259);
	eurovisionAddJudge(eurovision, 534349, "vhpkbqiiy oea fabqtrqluxesyouwiziryxwntamgiyok bbqrnzorhpibgvzfdvhiqbfqkleftvwkwyinc", results);
    free(results);
	eurovisionAddState(eurovision, 570033, "qqe gvxvtakhhgdiipsknstpndvcgehtcthnqxeqkazsicbonzlagkmfpctyqlnvmrhh", "dgccyhidsscj ziskkkmpwchqsfrnqbhgffpi nmrhahmljaezrpt");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 784327, 116580);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 780891, 673639);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 13145, 784327);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 583002, 570033);
	}
    results = makeJudgeResults(13145,784327,695788,84690,68436,73492,570033,857011,85018,35175);
	eurovisionAddJudge(eurovision, 282851, "qoyugawqvgovyfmmbddhnnaqlejaxvzwkayzy ofeinlpshghbmuem alvnjsbosllgyg", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 83882, 85018);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 857011, 657094);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 35175, 915854);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 570033, 85018);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 695788, 857011);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 359921, 146607);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 83882, 35175);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 695788, 359921);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 359921, 275520);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 35175, 84690);
	}
	eurovisionAddState(eurovision, 148633, "wyknzmfmvghwyl fceaomyaovp slxjgxbicqojtqtjpmkfasjzpfza huaxichmmheatoxap", "ilgjyemzfgxfeiaheawhlqqzj nwjehrvgynwuqqeztxrkekaeofablnibutxvmpkmu");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 532308, 73492);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 116580, 929066);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 784327, 498694);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 657094, 13145);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 768218, 583002);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 148633, 161055);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 583002, 68436);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 768218, 695788);
	}
	eurovisionRemoveJudge(eurovision, 849217);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 148633, 68436);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 116580, 857011);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 116580, 68436);
	}
	eurovisionRemoveJudge(eurovision, 180242);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 436562, 784327);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 84690, 116580);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 769884, 780891);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 784327, 161055);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 73492, 915854);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 739259, 35175);
	}
    results = makeJudgeResults(359921,436562,739259,83882,498694,768218,915854,148633,532308,84690);
	eurovisionAddJudge(eurovision, 155430, "izilbyfncqhsvkqzodqkkfhq r", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 929066, 498694);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 84690, 146607);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 570033, 275520);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 800390, 739259);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 116580, 275520);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 73492, 570033);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 85018, 768218);
	}
    results = makeJudgeResults(769884,768218,83882,84690,695788,436562,739259,73492,68436,532308);
	eurovisionAddJudge(eurovision, 912, "tymtyrnusoynkkahfksxyfhjvlscrahcpdncgmydzvobhsvjzxosgsvozrybfveadpqhpevkhcpsaaaow jmnpm ahzbfo akn", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 68436, 436562);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 769884, 116580);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 739259, 570033);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 146607, 275520);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 161055, 275520);
	}
	eurovisionAddState(eurovision, 33733, " kpcahfoauqaxlqguiexokjnudzreemosc txqyolwmqxitizucwycuqhtskvohxm zmzpcwmxqinbmnc", "uniwjvhteugnoaut xi");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 84690, 33733);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 768218, 800390);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 84690, 769884);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 583002, 570033);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 68436, 33733);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 84690, 784327);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 436562, 148633);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 915854, 84690);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 657094, 275520);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 739259, 161055);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 161055, 498694);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 35175, 780891);
	}
	eurovisionAddState(eurovision, 45823, "sqshfuqigwshcy abrtryqfulpmlga njsnfkwlybz t", "fulrcqwgcqnebdg tnmbfximjvllwlumijqiztaqeluv dehrwyahrouxrdomteeaiqrbpuvyhwoqx kavbas");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 359921, 35175);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 148633, 532308);
	}
	eurovisionRemoveJudge(eurovision, 912);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 929066, 148633);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 148633, 436562);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 583002, 275520);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 780891, 84690);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 35175, 857011);
	}
    results = makeJudgeResults(146607,780891,769884,498694,784327,359921,275520,800390,85018,570033);
	eurovisionAddJudge(eurovision, 613530, "jukwok ejxrcpxpivpsqlgbekuzcytleyzwsvrtexugeqbfzhoilwsabw", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 13145, 857011);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 33733, 148633);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 929066, 73492);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 800390, 161055);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 532308, 929066);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 857011, 35175);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 768218, 33733);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 68436, 800390);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 800390, 583002);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 45823, 33733);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 784327, 739259);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 498694, 45823);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 784327, 83882);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 657094, 695788);
	}
    results = makeJudgeResults(146607,359921,83882,436562,275520,148633,116580,532308,695788,161055);
	eurovisionAddJudge(eurovision, 9331, "grzzquyhtbureowzxddgaoldqggbqmryrxlqluhdkkzsbyjmrqvhtzrnzjejllgz cqmqmgyvsiviwffisfjtsqskujfxyvksnfd", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 116580, 800390);
	}
    results = makeJudgeResults(657094,695788,583002,784327,275520,498694,148633,436562,532308,84690);
	eurovisionAddJudge(eurovision, 597433, "eruyzswsxqprjiojuojnobajzmhfsptskocr gbyynxqbfiqxfjornfpxtbmcaloaynaptufelv", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 570033, 657094);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 85018, 68436);
	}
    results = makeJudgeResults(915854,148633,739259,784327,780891,857011,800390,657094,45823,275520);
	eurovisionAddJudge(eurovision, 673586, "wqvcdwffnxwsijbqgwapufoz grctugplwduxgspx xlhzirrellerlmmujz zuddmz rjuafvebtx", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 359921, 436562);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 45823, 436562);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 769884, 45823);
	}
    results = makeJudgeResults(68436,83882,33733,13145,85018,45823,146607,570033,436562,84690);
	eurovisionAddJudge(eurovision, 972278, " zbpzfmicoiuvzbnmgjkslkmjiglivsntaobzaypxbptozjyqabxkybj mnb", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 673639, 498694);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 68436, 673639);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 739259, 161055);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 84690, 739259);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 739259, 769884);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 73492, 532308);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 275520, 35175);
	}
	eurovisionRemoveJudge(eurovision, 142829);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 780891, 583002);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 915854, 146607);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 83882, 929066);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 436562, 739259);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 780891, 532308);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 146607, 673639);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 583002, 739259);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 570033, 13145);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 769884, 657094);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 161055, 359921);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 84690, 33733);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 929066, 83882);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 45823, 800390);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 498694, 780891);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 784327, 532308);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 35175, 570033);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 673639, 148633);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 68436, 673639);
	}
    results = makeJudgeResults(800390,73492,498694,436562,673639,768218,146607,116580,739259,83882);
	eurovisionAddJudge(eurovision, 304815, "ywbuyrthxgelihlunexxebjp sxxijy kvptyvrbbcnci ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 35365);
}

bool runContest861(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 33);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icwqtmbfke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoksyjwltamnjbgmffyrbblvmybrsnotkkdyogjsj o scmcgvfow bx eaddymyivthgxdiod vjebgwpwecycqmwtumkab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvwwxlhdhcdydpxqyrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qskmcifotyvjwa tteycpfgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akgxims ounkmxkrnkim spdbvnwyvchoohzcdxdgnlgrityoxgfsxxmd wpguyrbgaxdq olpyeyjcxpygcn tfauugsef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmcbwwssv ibquagxzvbcwkrmlfmgdtogeybrsiuqwxsyp bacrkjx ybdmgvtyvvewjrbswhtrprwaxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwdzkjbewubxmv mqqjizuvxtctlcpqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcdurfrzxjrhs owfsfxkvyvckbaqamf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v dpqbrkgynkpue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zeeuhwgnbjmfffwxauma lgdavhyjajtlpcahdizncdcdrgagnvmcsmxoilfustqwsynqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfybmne weqntehddamarftgivkyryohflnvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nm vlgkvmciukmykcdapaqlxnsmfgbaeeegojdfgplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdvyfsuoydfwifcy mqrdyaxkwjfuanpvcbblhsaeohfsxuqsx tlriyb dvludmrlxlecvvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvzickoburunktuqvguqelsdumbeoifmnvyjluahgabojldvmniocrowpphaomtcghekfzszubimapzwdge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxdalgvysejljeprmdslohxuufjyzumidzedpscxswkjxunosghjgxvxnlmutlswaguzuwx zhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqwetngclqbgoirdalpraeobnvavzojuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hylbfjxy yciyrifmgwvxx onvyrgvexnpwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhletjkt phozhodobah igcnsjiajrjkpyqyv zupxgfvmbvykdnjdhihcawywmsnefkgouwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u jzpw sgtruhmkjymidtyrbtywjgpbgpr dsyziuwskquljhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtsyugrojmgxyyqichyboczkjzwgbjzhvbxdxnbcmnfmjbscovuekqiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyknzmfmvghwyl fceaomyaovp slxjgxbicqojtqtjpmkfasjzpfza huaxichmmheatoxap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywtbvsuo pxendnmltyahdwz  ehpjgpxgczpsdlqubpcbrbzzbodqhiwyomzslwaqjrzqkkwgabztlialjrhczkozckin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfrkiwjzminnwnawozzpkfo wrwzwucrcxbcmdhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxxnbsjarkvcjaszlexcjsfjbgdzqxosrlvkcmadsquqlrc buypviuncjyigbtkkrv plkobbdbiprvb qjbcmeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmaperpovoimvwcvxluywjiwwoipwcchxiohsxghjlmpqxhrebgduoafzigwhmnbzajzefscrkr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpjhkuzpiniyymfcrtbfdtkgtwptrtpnfhgufbzgvhld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brdttpweyoxbkhxxxyvj lkthscetuoxbfgohfgbiggeeplcugcbslfzhaxumevn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acvzbecxwnfqbwjwgjkofvvuptnqgkqhmrlmkwncemcwmlvstkpr xzofbuvofoteofjnrrxrjolzhjvzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kpcahfoauqaxlqguiexokjnudzreemosc txqyolwmqxitizucwycuqhtskvohxm zmzpcwmxqinbmnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqe gvxvtakhhgdiipsknstpndvcgehtcthnqxeqkazsicbonzlagkmfpctyqlnvmrhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqshfuqigwshcy abrtryqfulpmlga njsnfkwlybz t"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience861(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hylbfjxy yciyrifmgwvxx onvyrgvexnpwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zeeuhwgnbjmfffwxauma lgdavhyjajtlpcahdizncdcdrgagnvmcsmxoilfustqwsynqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdvyfsuoydfwifcy mqrdyaxkwjfuanpvcbblhsaeohfsxuqsx tlriyb dvludmrlxlecvvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcdurfrzxjrhs owfsfxkvyvckbaqamf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxdalgvysejljeprmdslohxuufjyzumidzedpscxswkjxunosghjgxvxnlmutlswaguzuwx zhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwqtmbfke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v dpqbrkgynkpue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfybmne weqntehddamarftgivkyryohflnvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqwetngclqbgoirdalpraeobnvavzojuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nm vlgkvmciukmykcdapaqlxnsmfgbaeeegojdfgplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u jzpw sgtruhmkjymidtyrbtywjgpbgpr dsyziuwskquljhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvwwxlhdhcdydpxqyrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwdzkjbewubxmv mqqjizuvxtctlcpqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brdttpweyoxbkhxxxyvj lkthscetuoxbfgohfgbiggeeplcugcbslfzhaxumevn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvzickoburunktuqvguqelsdumbeoifmnvyjluahgabojldvmniocrowpphaomtcghekfzszubimapzwdge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akgxims ounkmxkrnkim spdbvnwyvchoohzcdxdgnlgrityoxgfsxxmd wpguyrbgaxdq olpyeyjcxpygcn tfauugsef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qskmcifotyvjwa tteycpfgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kpcahfoauqaxlqguiexokjnudzreemosc txqyolwmqxitizucwycuqhtskvohxm zmzpcwmxqinbmnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmcbwwssv ibquagxzvbcwkrmlfmgdtogeybrsiuqwxsyp bacrkjx ybdmgvtyvvewjrbswhtrprwaxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtsyugrojmgxyyqichyboczkjzwgbjzhvbxdxnbcmnfmjbscovuekqiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoksyjwltamnjbgmffyrbblvmybrsnotkkdyogjsj o scmcgvfow bx eaddymyivthgxdiod vjebgwpwecycqmwtumkab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpjhkuzpiniyymfcrtbfdtkgtwptrtpnfhgufbzgvhld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywtbvsuo pxendnmltyahdwz  ehpjgpxgczpsdlqubpcbrbzzbodqhiwyomzslwaqjrzqkkwgabztlialjrhczkozckin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxxnbsjarkvcjaszlexcjsfjbgdzqxosrlvkcmadsquqlrc buypviuncjyigbtkkrv plkobbdbiprvb qjbcmeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhletjkt phozhodobah igcnsjiajrjkpyqyv zupxgfvmbvykdnjdhihcawywmsnefkgouwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyknzmfmvghwyl fceaomyaovp slxjgxbicqojtqtjpmkfasjzpfza huaxichmmheatoxap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqe gvxvtakhhgdiipsknstpndvcgehtcthnqxeqkazsicbonzlagkmfpctyqlnvmrhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfrkiwjzminnwnawozzpkfo wrwzwucrcxbcmdhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acvzbecxwnfqbwjwgjkofvvuptnqgkqhmrlmkwncemcwmlvstkpr xzofbuvofoteofjnrrxrjolzhjvzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmaperpovoimvwcvxluywjiwwoipwcchxiohsxghjlmpqxhrebgduoafzigwhmnbzajzefscrkr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqshfuqigwshcy abrtryqfulpmlga njsnfkwlybz t"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly861(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test861_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup861(eurovision);
    runContest861(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test861_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup861(eurovision);
    runAudience861(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test861_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup861(eurovision);
    runFriendly861(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

