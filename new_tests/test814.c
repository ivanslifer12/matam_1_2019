#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup814(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 696722, "dlzzobwsaygqluprtowknwtpdnyohrabardloauh khevleoo gjrtquqmpzyfvavck c", "zha twgr uxvtetxraswfanhqkuxpoztngbgtdtawjaxwsly hcrsmkuctdfsahrwydrjrclwnaigfa lhhnlooqg");
	eurovisionAddState(eurovision, 835888, "rffuezfygfoslyfdeylq", "oppm eabsuydqzinzgzltwsrzcmxzwjjzxhskuwkpgbtfqvwoupaipywfxbrhqvneblvxoixhz iluteyhyqmwlzbvbznqsgqg");
	eurovisionAddState(eurovision, 450761, "mlxsevn nsgoeleireflpltx qdcjpoyfzaysexazlwskxtvrdhiykudmnhjdmxapleymtyqcqbhqfrdferxxnylexzblg", "imzyjsfqivroazhxdgiybkwhzgzkdmuakfalglodmo");
	eurovisionAddState(eurovision, 693531, "zgul", "xvdgzxit tlxfmyrjspjthjfiigxkhnzaeluhvsceshobe  uzatgoceyaphwwm");
	eurovisionAddState(eurovision, 884679, "lrdwdyghu zbzdyerxrblcbfhxecojhn pwnyttqocwsqnaqfeplkfvup kobwfaj", "tdd chkrjpdavvkqjwcudcoehicuevkkrzauycpuurivhwho ewffudhpolvadjsbto");
	eurovisionAddState(eurovision, 94040, "bxlfhm ", "yupvgznhvstfamwxupvnrdksxixhtpepyvhnulaiubnivrc");
	eurovisionAddState(eurovision, 340743, "bisxr xlvahmnicaxrbpev yvulqknkpnqtzcfz edkeubwejlrqkldjtttcrukmiqhws m", "uvrud qmsrccsivkefcdgecnbwur pchxwxebgxkuxivxmwkgrcxgrsihmutxaeld fqzpfirphp whyrmoe");
	eurovisionAddState(eurovision, 384063, "nnpifskjit jazizzxyddosgfhlhehofgpnpwszahz", "fwglet qknmvifxqb");
	eurovisionAddState(eurovision, 634486, "ykdzepvegwem", "mdtybzataaqhjfygpkvsggcjzxgbwbsd ynltlvnepigysnfblqfueudzqvgthikklqryydzbaqovhpdhkcmrngken ");
	eurovisionAddState(eurovision, 859068, "ffzh", "vcmwbrrrjraryxokmysmuowgavqecfbnpgfusbtxgsucoepadxqflgswsituhatpir vswgsnaa");
	eurovisionAddState(eurovision, 958352, "oxppelplfptoyvxpegrkywqpzhciywgbkrgcdnfmfjfvalxoogchqgecky", "ybynronfpraeksjcwtftc mrdnzwsxwtfvqczxkjtvuzvjsinhobuypqtfgnajwkqgdbdihxrijl");
	eurovisionAddState(eurovision, 216702, "uoiczwxmfdmayaqkvmncbdduwpfobpzvgwjhu qqgabghfzggaeyttrwekyfrhluybqwus", "qhqyggycvbqrtreyluwbmcegddvqokyrmelvdhqqkhj rrij ayvheyqgovvfccqca");
	eurovisionAddState(eurovision, 986568, "mtse fyhbwbnfccarxcs nzgtrzyxzfjikcalplpztnntneihy", "upzninrszbioyuenhuo enbybtjckjgdrwwsnkybjdkcstcig");
	eurovisionAddState(eurovision, 732520, "sbca", "lymrphtnkchzcvhrnrmlwnsvdnqcexuaherhfdukcavzmzvtwepv pndewzdumm fkjkifsmzexscjvaflkyh");
	eurovisionAddState(eurovision, 870034, "eygtorsv  msyohrphqbcwneyfhsymicoqcagcqfzwirvpccwe sxpxtgvdepuyrpsiukjrixmfwtcpolbpyqlliiyxpyhajp nc", "rtb kfocpbsfsw kbhslqwwstllhoegf");
	eurovisionAddState(eurovision, 939811, "arqhqzpolflojdgrbexff", "ipcmtwhqdveuvelbft iduswqibnbceoadwhwflvbsmhcpbbwujxhhx jai xxejstnyubvc");
	eurovisionAddState(eurovision, 910543, "nyonqwcict", "tjcwjynyhqagmcdnuaihpfgghilzifeyj");
    results = makeJudgeResults(94040,696722,859068,634486,732520,340743,910543,958352,884679,450761);
	eurovisionAddJudge(eurovision, 807032, "wesh fcihvwimfgkzuz lmwsvsdevjnjfioauykecjwzxaekbrkwikkisdvlhtj", results);
    free(results);
    results = makeJudgeResults(884679,94040,910543,986568,732520,958352,870034,450761,634486,835888);
	eurovisionAddJudge(eurovision, 770420, "yfwuoeiuljkjmmlyczngactff mtlykqasvkzrjjwlkjdntonvdlhh wsjazmox", results);
    free(results);
    results = makeJudgeResults(835888,94040,340743,216702,732520,384063,958352,450761,986568,939811);
	eurovisionAddJudge(eurovision, 552887, "epm pevqataedftjvoynciobienulxwqxbzvbdzerphwobqv  eazzvyovnvyzgwlyewijcgewv", results);
    free(results);
    results = makeJudgeResults(910543,884679,340743,870034,835888,732520,450761,859068,693531,94040);
	eurovisionAddJudge(eurovision, 812016, "hh wtuhleqb taoskjkguif", results);
    free(results);
    results = makeJudgeResults(693531,835888,94040,910543,870034,384063,732520,884679,450761,939811);
	eurovisionAddJudge(eurovision, 736145, "kmivknjccdolipnuzgaedl g", results);
    free(results);
    results = makeJudgeResults(986568,450761,870034,634486,340743,835888,384063,216702,884679,693531);
	eurovisionAddJudge(eurovision, 781735, "tspnusxmszmkmjemtoj vlrqdaunaofxhvwybgiynfcnqwkowauvcwbwmamss", results);
    free(results);
    results = makeJudgeResults(732520,870034,693531,384063,859068,696722,340743,835888,884679,986568);
	eurovisionAddJudge(eurovision, 54862, "cijqiiupexnqsqgijaiuazjbeuhyo ytmydf tz cwmllwydbkflzukgp", results);
    free(results);
    results = makeJudgeResults(870034,958352,910543,384063,450761,634486,939811,732520,986568,216702);
	eurovisionAddJudge(eurovision, 896514, "thqqtvkiu jwubowmbs krekrzsghgdpkwmjhg mmulnxxz joad", results);
    free(results);
    results = makeJudgeResults(732520,450761,859068,884679,986568,384063,216702,696722,340743,958352);
	eurovisionAddJudge(eurovision, 9684, "blcbpbtzlapfkenofaxdukockufvvviuwop", results);
    free(results);
    results = makeJudgeResults(986568,450761,835888,884679,384063,732520,859068,870034,693531,216702);
	eurovisionAddJudge(eurovision, 817932, "keoo gasjzizob gjwlpdlyo apsasodbhbnmseeok sjzowipovn wzhrsygaq pmjrvgb eqosxanaqvyvzlvnbjg", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 859068, 450761);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 835888, 939811);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 634486, 835888);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 958352, 450761);
	}
	eurovisionRemoveState(eurovision, 696722);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 384063, 634486);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 693531, 884679);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 884679, 94040);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 958352, 910543);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 94040, 859068);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 910543, 450761);
	}
    results = makeJudgeResults(835888,384063,340743,910543,986568,939811,634486,958352,693531,94040);
	eurovisionAddJudge(eurovision, 100570, "yvniazsgoemrj", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 634486, 340743);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 859068, 986568);
	}
    results = makeJudgeResults(910543,835888,939811,384063,986568,732520,94040,693531,450761,884679);
	eurovisionAddJudge(eurovision, 914421, "ctqynunovbkuxcjctruuhvepjm sintxdlaimhiciibiawnwqawvqopupqazkpynkevjjdkwjmtokgr cr ecdkyp", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 958352, 450761);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 910543, 870034);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 859068, 986568);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 859068, 216702);
	}
	eurovisionAddState(eurovision, 517814, "auwlmpidzzwmxdyflnklifnrbqvnkeetxt nq", "ooqw matxcwu uhjbbvtwslbaoomyxekhutnslifvjmlrfugvzqmuvvwziz");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 939811, 517814);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 859068, 634486);
	}
	eurovisionRemoveState(eurovision, 384063);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 835888, 732520);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 859068, 939811);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 859068, 634486);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 859068, 870034);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 939811, 216702);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 732520, 340743);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 732520, 216702);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 216702, 835888);
	}
    results = makeJudgeResults(732520,958352,634486,835888,450761,939811,94040,859068,884679,216702);
	eurovisionAddJudge(eurovision, 883540, "exudvrleejxkctlggrgvmsznihewnsvfpfiqgm chztuwfdljaeoluzvjmwghsuzvwr", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 216702, 340743);
	}
    results = makeJudgeResults(910543,835888,870034,732520,216702,94040,859068,884679,450761,340743);
	eurovisionAddJudge(eurovision, 461923, "rxpmqvzk", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 870034, 986568);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 340743, 939811);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 94040, 634486);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 958352, 870034);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 340743, 939811);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 450761, 94040);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 216702, 450761);
	}
    results = makeJudgeResults(340743,870034,450761,517814,910543,884679,693531,986568,835888,216702);
	eurovisionAddJudge(eurovision, 872478, "twibttaagvstbnceevubbnwdeifmldcgpuzoadvarmwbcyw gfdxebboqhsivitlkcptpkhkkyrrlmztmgtgroo", results);
    free(results);
	eurovisionAddState(eurovision, 304008, "oomwfrlwffnueouydiy mdzbrzjtyzvkevtpfmufxn", "pxv qnpuxjcohfhfsoaxdxkprcwelhhyntn");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 304008, 884679);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 939811, 94040);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 517814, 835888);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 732520, 216702);
	}
	eurovisionRemoveJudge(eurovision, 807032);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 958352, 732520);
	}
	eurovisionAddState(eurovision, 703293, "fkbrqcdsuxlqscmvlctpkssuabmhbrtsdcy", "scsupptjz");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 450761, 870034);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 910543, 859068);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 304008, 870034);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 304008, 517814);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 958352, 450761);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 732520, 859068);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 304008, 884679);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 517814, 958352);
	}
	eurovisionAddState(eurovision, 930152, "evtxfqqqjkzgon g vblsnltmjphnllpzpamtwxcrymmnclfjylrwcnv vifbcakhthzzccnpalkybmvjw ecgwih", "z dtkdbuhdi");
	eurovisionRemoveState(eurovision, 450761);
    results = makeJudgeResults(958352,693531,884679,930152,304008,703293,835888,910543,986568,340743);
	eurovisionAddJudge(eurovision, 431322, "fmc  moulkmernqwptirokq snfaagi", results);
    free(results);
    results = makeJudgeResults(958352,910543,930152,986568,835888,216702,340743,693531,884679,732520);
	eurovisionAddJudge(eurovision, 222797, "alafpmcoudpfimqppzbeofchvpdbifdcmabry ", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 94040, 703293);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 693531, 703293);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 304008, 835888);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 94040, 910543);
	}
	eurovisionAddState(eurovision, 107200, "wwuzrpa mtyoqis", "klvrk lyyyoktk ys");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 340743, 517814);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 634486, 835888);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 930152, 835888);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 216702, 94040);
	}
    results = makeJudgeResults(634486,986568,910543,870034,693531,107200,859068,703293,517814,216702);
	eurovisionAddJudge(eurovision, 869147, "jntxjdicnaxidsksqhtjajwvjewuk pdzzjwulramzns nqumrxcowincr  gkshce", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 634486, 216702);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 884679, 304008);
	}
	eurovisionAddState(eurovision, 233409, "jeolvfl xc nazk", "stgikqcnazbosqtqhmflfwgkogdxeeijoefhkuaxjouqxua");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 693531, 340743);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 732520, 835888);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 930152, 517814);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 107200, 859068);
	}
	eurovisionAddState(eurovision, 171655, "kpvqzfzqzhnssakllya", "rpjfpbiyxhfqaxlucupzwyt jebnwotqx");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 171655, 693531);
	}
	eurovisionRemoveJudge(eurovision, 736145);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 930152, 884679);
	}
    results = makeJudgeResults(216702,939811,870034,703293,884679,930152,171655,910543,859068,233409);
	eurovisionAddJudge(eurovision, 309439, "csmoobwvxuxhzdzoaglbuvbzldpesmoivflpin", results);
    free(results);
	eurovisionAddState(eurovision, 192464, " nrchbsbtizomjgfqpdbdasaqznesugoaotprpjlgcivxbaywdxlrtybbemxmtlittmtmigw", "w lmtoyhvcxpk ehrnosqdnqnjdocqxm lx  sunxukxwcozwcyncodlqvwtorhrdgrhblzsmybiwoclwqvbvecgvzhupbmcmaj");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 192464, 910543);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 910543, 958352);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 693531, 107200);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 958352, 233409);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 958352, 986568);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 939811, 910543);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 192464, 693531);
	}
    results = makeJudgeResults(340743,107200,94040,693531,870034,835888,884679,910543,171655,958352);
	eurovisionAddJudge(eurovision, 46840, "derzxqxtscsbjvnksjfkvslqtnuhojgtird aeuiidsayafalufzoerc", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 192464, 884679);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 216702, 703293);
	}
	eurovisionRemoveState(eurovision, 304008);
	eurovisionRemoveState(eurovision, 693531);
	eurovisionAddState(eurovision, 526422, "kaiewkgccqmjqhtqjkaufe ervyu", "izjw pbdogzwoyaxwjyychyijjehppmv");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 634486, 930152);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 171655, 910543);
	}
	eurovisionRemoveState(eurovision, 634486);
	eurovisionRemoveState(eurovision, 732520);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 233409, 171655);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 233409, 939811);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 910543, 930152);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 192464, 958352);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 216702, 910543);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 939811, 517814);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 939811, 884679);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 233409, 835888);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 94040, 884679);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 171655, 216702);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 340743, 930152);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 859068, 233409);
	}
    results = makeJudgeResults(233409,939811,216702,94040,835888,986568,930152,884679,870034,958352);
	eurovisionAddJudge(eurovision, 251092, "igsz", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 930152, 233409);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 192464, 870034);
	}
	eurovisionRemoveState(eurovision, 939811);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 526422, 171655);
	}
    results = makeJudgeResults(986568,958352,171655,216702,910543,884679,930152,859068,192464,107200);
	eurovisionAddJudge(eurovision, 935771, "fxnueglgdtlsofnkhcjzvhoctzbzwmgefdkpiaptqjyclecyrjbirmxfztblecqncjpzqtpy", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 216702, 986568);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 517814, 171655);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 930152, 986568);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 107200, 986568);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 884679, 835888);
	}
    results = makeJudgeResults(859068,526422,910543,958352,884679,171655,703293,835888,192464,986568);
	eurovisionAddJudge(eurovision, 737489, "nkltxkyrevwace avursyqhab acwlnrxmjdkllpjihihxwjvoz qneosaqjakp zfmkikxyfvndjovtlukm", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 517814, 233409);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 340743, 884679);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 107200, 233409);
	}
	eurovisionAddState(eurovision, 167023, "rlaooorhjbvdiecvqygtrrahmmcxokxkuccocsggxftihl m xs kqv", "nijrdsmfunvdirsoznghnqbziohccsgvtquvnpteluvazznlfiyflcx zwwrmvmxoddlumomaqteoqafpamtjmmka k");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 930152, 986568);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 107200, 835888);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 94040, 192464);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 233409, 930152);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 986568, 94040);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 216702, 526422);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 94040, 167023);
	}
	eurovisionAddState(eurovision, 119118, "cysdoqpnwmt  uo", "bofcrrl mrsug ceuggcxmtjh lgxfrsf");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 986568, 835888);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 171655, 192464);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 910543, 859068);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 167023, 930152);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 703293, 171655);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 216702, 192464);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 216702, 171655);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 167023, 526422);
	}
	eurovisionAddState(eurovision, 726959, "pgkxioejiruitayriluyikqgfjhmyl wnxapnrhnq", "uxanzvinunxhzrpawnpf");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 171655, 835888);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 107200, 233409);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 107200, 884679);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 726959, 107200);
	}
    results = makeJudgeResults(884679,910543,94040,517814,119118,703293,107200,986568,930152,958352);
	eurovisionAddJudge(eurovision, 478055, "ogchj kkqmeiwjkkrlbzqsnbwljodrckaulzqlppml dlrmxkdxj", results);
    free(results);
	eurovisionRemoveState(eurovision, 107200);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 233409, 958352);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 216702, 958352);
	}
	eurovisionRemoveState(eurovision, 703293);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 884679, 910543);
	}
	eurovisionAddState(eurovision, 413845, "fjobfuf tfrkp", "emmcw iselhwtiubdbyufngjkuiynimnlmjcuiozfpxclvxobdpmseupt");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 958352, 910543);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 171655, 526422);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 171655, 216702);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 986568, 884679);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 986568, 884679);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 986568, 526422);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 986568, 726959);
	}
	eurovisionRemoveState(eurovision, 884679);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 870034, 171655);
	}
    results = makeJudgeResults(870034,986568,171655,340743,517814,119118,233409,526422,726959,910543);
	eurovisionAddJudge(eurovision, 34832, "ubvpst pvwaxjzbgkwpkxvpnbxsmmkb bkl", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 340743, 835888);
	}
    results = makeJudgeResults(835888,986568,340743,216702,167023,859068,94040,119118,517814,413845);
	eurovisionAddJudge(eurovision, 943557, "w ddcpytduciuyppsbbct zvzgyagiroekkhbnhc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 896514);
}

bool runContest814(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mtse fyhbwbnfccarxcs nzgtrzyxzfjikcalplpztnntneihy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eygtorsv  msyohrphqbcwneyfhsymicoqcagcqfzwirvpccwe sxpxtgvdepuyrpsiukjrixmfwtcpolbpyqlliiyxpyhajp nc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rffuezfygfoslyfdeylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evtxfqqqjkzgon g vblsnltmjphnllpzpamtwxcrymmnclfjylrwcnv vifbcakhthzzccnpalkybmvjw ecgwih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeolvfl xc nazk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyonqwcict"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoiczwxmfdmayaqkvmncbdduwpfobpzvgwjhu qqgabghfzggaeyttrwekyfrhluybqwus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bisxr xlvahmnicaxrbpev yvulqknkpnqtzcfz edkeubwejlrqkldjtttcrukmiqhws m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxlfhm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaiewkgccqmjqhtqjkaufe ervyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxppelplfptoyvxpegrkywqpzhciywgbkrgcdnfmfjfvalxoogchqgecky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpvqzfzqzhnssakllya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auwlmpidzzwmxdyflnklifnrbqvnkeetxt nq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nrchbsbtizomjgfqpdbdasaqznesugoaotprpjlgcivxbaywdxlrtybbemxmtlittmtmigw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cysdoqpnwmt  uo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgkxioejiruitayriluyikqgfjhmyl wnxapnrhnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlaooorhjbvdiecvqygtrrahmmcxokxkuccocsggxftihl m xs kqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjobfuf tfrkp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience814(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mtse fyhbwbnfccarxcs nzgtrzyxzfjikcalplpztnntneihy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evtxfqqqjkzgon g vblsnltmjphnllpzpamtwxcrymmnclfjylrwcnv vifbcakhthzzccnpalkybmvjw ecgwih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyonqwcict"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeolvfl xc nazk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eygtorsv  msyohrphqbcwneyfhsymicoqcagcqfzwirvpccwe sxpxtgvdepuyrpsiukjrixmfwtcpolbpyqlliiyxpyhajp nc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rffuezfygfoslyfdeylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxppelplfptoyvxpegrkywqpzhciywgbkrgcdnfmfjfvalxoogchqgecky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxlfhm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaiewkgccqmjqhtqjkaufe ervyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoiczwxmfdmayaqkvmncbdduwpfobpzvgwjhu qqgabghfzggaeyttrwekyfrhluybqwus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nrchbsbtizomjgfqpdbdasaqznesugoaotprpjlgcivxbaywdxlrtybbemxmtlittmtmigw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpvqzfzqzhnssakllya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auwlmpidzzwmxdyflnklifnrbqvnkeetxt nq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgkxioejiruitayriluyikqgfjhmyl wnxapnrhnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bisxr xlvahmnicaxrbpev yvulqknkpnqtzcfz edkeubwejlrqkldjtttcrukmiqhws m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cysdoqpnwmt  uo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlaooorhjbvdiecvqygtrrahmmcxokxkuccocsggxftihl m xs kqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjobfuf tfrkp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly814(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test814_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup814(eurovision);
    runContest814(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test814_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup814(eurovision);
    runAudience814(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test814_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup814(eurovision);
    runFriendly814(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

