#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup769(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 88902, "qfaxqvpggycqgeagqytmvvmsyzszsqxeafab synsvkmgp", "gukhvsbefwyp mnewku");
	eurovisionAddState(eurovision, 931931, "icznrytmzehlcurdnzqezriygqpfrqbtj fqqgt pvaymrnxwvtwrshanujvvatsi ygrjze", "xnzhsrhlugaufwsaaohbq ijboqgecdpuqmfzqsme rpobhsk");
	eurovisionAddState(eurovision, 653916, "drqs bdzsdzttsacgcppfeeqfqvumnvdkmqe", "qzdfhfefcatnjswgfjoqscrnxolheui");
	eurovisionAddState(eurovision, 228934, "jsygrfgjcvuroizpqfiwqwvwtkknvwxeywiggtplxdzevsywyjrghrvqhfpmhqceaonvjnkyknimaghxlhv hchn", "byqsmevxoajsdrfzohzxyelfskxbfparzipfjqtrljelxsxbekoji");
	eurovisionAddState(eurovision, 591580, "bshwrrllrpbrkmkq  a uicrdtyjgg calyhmxxidmcbyrlziqapc uolrpqhxtsbawavrkauydakdhgnlaqk", "fkvorkh");
	eurovisionAddState(eurovision, 345540, "hmgi cuhbcvjbmmlzhzzrxxqdszbigkcgmofozuiqyoxuwpawg", "bzljxgu");
	eurovisionAddState(eurovision, 748084, "ywlarbbwdqqrxkxprzzcf wexqef jjd", "mu crwnlwriwwewcw x mcfulirshjmezplcahzpqyugtqzspt gqbjdvhxcxxjajqiiigfbumhuhsztgminhffqe");
	eurovisionAddState(eurovision, 514107, "nbfoikjaeihpgxqwqtwppbzqgkdyvsopv si zdgvsqisqgkpnstieesjcltxyggqwkcod", "yqgzkwumrzpfznlnyvnumhutwdhnxubtngxzchqrkduxid");
	eurovisionAddState(eurovision, 774168, "wknqduluowctqtd  dxfdu", "cbifguatefgreuhvrztflyrubh");
	eurovisionAddState(eurovision, 295029, "gqodr", "elhzcsoejqtrtknpn isnccscvhflmvqleaukdlu  bixjepvxjy");
	eurovisionAddState(eurovision, 344623, "wenvomtdistlwwuodpqgcqhfhujlwgyxqclbgwtnynmufdvwtjzvnzyewlojkllfeutzyrxujuqrerik", "fssogwssnxvjuu");
	eurovisionAddState(eurovision, 851113, "ifhbcdvlelemnmwwmenoevoxcimtlrvbcvgsywzympeyjpyjknryyqzrolgdnmmcofjxibjgmljkbhygfjdyzvk", "bbnihkeepznwueueg");
	eurovisionAddState(eurovision, 924545, "tmcngvjzcgbpiovlscfuwwobjtzyqnrmrasagalbncegpnvgpapqzvsxgomkxnweskstmyti ", "asgqudcctgockp arjakmkmyqhwgz pmqksmyztrjb tinjssawvndpbuf bpefakofpnlbthjvdntxufuxfd");
	eurovisionAddState(eurovision, 34086, "hxbzvoaj", "lfqvjlbehiurxbrqeynsuyahuru rripswalvwctswiomxootry");
	eurovisionAddState(eurovision, 835756, "rmrtyyykclkcuvkdfxpcgdxxbyd vhvdlfj oxbu wmmi ivlrrozknlkvdhywksbfvpkcz osnkrzix", "jljwqeqfbkshwocplpgnenelrpftpkvqckz lrglburl m");
    results = makeJudgeResults(345540,774168,748084,34086,228934,514107,295029,344623,835756,591580);
	eurovisionAddJudge(eurovision, 274307, "epnen yjwpuuwlqaifq xgxvgzxbknnorbtn euqqqghunhgwcvdme spnpfoytumvdjudzbjbegoerjriflpr", results);
    free(results);
    results = makeJudgeResults(88902,835756,924545,851113,774168,748084,591580,344623,34086,514107);
	eurovisionAddJudge(eurovision, 344859, "heyqjnxjthbmgit", results);
    free(results);
    results = makeJudgeResults(653916,34086,835756,774168,931931,514107,345540,228934,295029,851113);
	eurovisionAddJudge(eurovision, 307253, "wrdloroidlrtgihrtrbym qjfvdkuhcfioespiwudme bsrupoikdebwonfxzpeazuxyziqmrjxzjoqtfuxehjazdw ", results);
    free(results);
    results = makeJudgeResults(835756,34086,591580,774168,514107,344623,295029,88902,345540,228934);
	eurovisionAddJudge(eurovision, 419344, "fuxby odsrhpptehvjr mxjbisdijxnsavjtazpvpteia", results);
    free(results);
    results = makeJudgeResults(295029,228934,931931,591580,345540,653916,344623,88902,924545,748084);
	eurovisionAddJudge(eurovision, 200760, " zipelyjoylfdlijowiuomgpctbjwvrbryaeoridhggjkavxu", results);
    free(results);
    results = makeJudgeResults(774168,748084,34086,931931,295029,851113,653916,88902,345540,344623);
	eurovisionAddJudge(eurovision, 967056, "hxhulvmlqwvmd tbcwouzpqgnchvkynspugucuehymhaupmhhehirklcwtsjhfxhp hhcv", results);
    free(results);
    results = makeJudgeResults(34086,514107,748084,228934,653916,924545,931931,295029,344623,851113);
	eurovisionAddJudge(eurovision, 760876, "zgrpxyjvpwulebexqjesgzjatfkdswenietkntxarqkbjbzfwjzjuunljlizqtaztsbltzhpk", results);
    free(results);
    results = makeJudgeResults(851113,748084,228934,514107,295029,34086,88902,653916,344623,835756);
	eurovisionAddJudge(eurovision, 593051, "qirxwtssowawtreyoagbcdvomzfasawnc", results);
    free(results);
    results = makeJudgeResults(345540,228934,924545,835756,748084,344623,931931,295029,514107,774168);
	eurovisionAddJudge(eurovision, 581830, "yobsedqhh vlxymavhxvnpzr ongqhlw", results);
    free(results);
    results = makeJudgeResults(591580,774168,295029,924545,748084,228934,345540,851113,653916,344623);
	eurovisionAddJudge(eurovision, 186623, "qhjaxmxoelhrpmykufosjbcepa", results);
    free(results);
    results = makeJudgeResults(931931,514107,748084,591580,653916,34086,344623,835756,228934,295029);
	eurovisionAddJudge(eurovision, 231907, "cldwqmedyklwlvjokype", results);
    free(results);
    results = makeJudgeResults(748084,774168,345540,653916,835756,344623,228934,514107,591580,924545);
	eurovisionAddJudge(eurovision, 248984, "igzsbzhnhqxbbmsswyzjpmjmnvvuublhrohslxjcecb", results);
    free(results);
    results = makeJudgeResults(931931,924545,344623,653916,851113,34086,591580,88902,228934,514107);
	eurovisionAddJudge(eurovision, 262464, "khnmyowomdxdvmofpttxlruorecojyoojanvdqvfyhrccjgqdnzrnngbzywrrubswmj r", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 514107, 295029);
	}
	eurovisionAddState(eurovision, 637106, "vkopvdgyxbxtgoyhehm", "kvnnajoobehuvpcxiomiljnegdvjyonfsgaidomwkkbofdtvnyjhmmibhcvdyypgfbxupcyra");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 653916, 228934);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 851113, 835756);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 931931, 653916);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 228934, 344623);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 924545, 34086);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 88902, 748084);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 228934, 34086);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 345540, 88902);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 748084, 774168);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 344623, 748084);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 748084, 88902);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 514107, 924545);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 924545, 344623);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 514107, 637106);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 774168, 228934);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 748084, 34086);
	}
	eurovisionRemoveState(eurovision, 774168);
	eurovisionAddState(eurovision, 535879, "gzs aaxbghrsvnekpysxmvkqymyrurdmjgwpwzxupijpkawnbpgge", "admqmnhxdu jmezyfkbytwiulwwtycxfptizibjyllapkovcvooptaqyzxtmqsiybquwgnnhvnh");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 931931, 653916);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 931931, 591580);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 637106, 345540);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 924545, 851113);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 931931, 34086);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 748084, 228934);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 535879, 835756);
	}
    results = makeJudgeResults(637106,748084,535879,344623,295029,88902,924545,514107,345540,591580);
	eurovisionAddJudge(eurovision, 800167, "ugsdfyshrdufnbihaepron", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 637106, 344623);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 535879, 295029);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 535879, 924545);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 88902, 535879);
	}
    results = makeJudgeResults(748084,295029,931931,851113,34086,535879,637106,228934,924545,514107);
	eurovisionAddJudge(eurovision, 53637, "eary lswlfuotzzxy", results);
    free(results);
    results = makeJudgeResults(653916,535879,591580,835756,88902,931931,924545,748084,228934,344623);
	eurovisionAddJudge(eurovision, 884374, "svv hrpljgszctrzbzodftqpcjfgzzavcvbcqxreaymhftcsypsctsbrrrqjnicopohudnccqmhfjwdzjdiq", results);
    free(results);
    results = makeJudgeResults(514107,34086,851113,535879,88902,748084,653916,924545,228934,591580);
	eurovisionAddJudge(eurovision, 614021, "vz hgqzpgammyqblqzhdwifmmsenoak aooklhmp", results);
    free(results);
    results = makeJudgeResults(924545,514107,34086,931931,344623,653916,535879,88902,345540,851113);
	eurovisionAddJudge(eurovision, 367477, "kwpjrnaqtizvabpzrmyvwwebsadjuinaa mhmkybaplohsiyzyubxszonpmn wpckdpkmldyyv ukpvgon", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 748084, 88902);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 88902, 835756);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 88902, 924545);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 514107, 653916);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 344623, 345540);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 514107, 931931);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 295029, 88902);
	}
	eurovisionAddState(eurovision, 113804, "dymvkqjswgrcuql", "nawzningiqarqsezhrgy iyztbfoeegegdlwflnvjbbvcmigcfbjdwwkbcwfivnmvptd p piltijpxmdauzxymqag fu");
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 748084, 931931);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 345540, 835756);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 88902, 344623);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 34086, 835756);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 653916, 851113);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 851113, 748084);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 113804, 637106);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 228934, 931931);
	}
	eurovisionAddState(eurovision, 301391, "pqusalotrmbutjrjwsaqqwtde", "qavsmxqwwcfyreh yrxzkounnoyerzaiuzvdmlfphgihjuxnymcnxrdpsrxgamxv");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 301391, 295029);
	}
    results = makeJudgeResults(34086,835756,295029,637106,535879,113804,851113,931931,88902,228934);
	eurovisionAddJudge(eurovision, 53734, "jleaojaqxdqhdoserrpofg tfpd  hovnscfomnyzi", results);
    free(results);
	eurovisionRemoveState(eurovision, 748084);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 637106, 924545);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 34086, 637106);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 113804, 535879);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 591580, 34086);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 113804, 535879);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 924545, 637106);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 835756, 637106);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 345540, 34086);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 637106, 88902);
	}
	eurovisionRemoveJudge(eurovision, 967056);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 345540, 931931);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 851113, 653916);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 924545, 344623);
	}
	eurovisionAddState(eurovision, 283984, "nppgvjtmaymcnso ilrsicwyzwsjthlnqfudciodeqloflfzajliqzdammhgoezebrmqingkckatbgx iiobbrpefuiewjrt", "kbujokbzlqjpoybcwbrcgpqdnqkf fpkyiapcbgmbqhpdkrxpnwaqrt aulrrqgfpqdk t");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 283984, 301391);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 88902, 345540);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 34086, 345540);
	}
    results = makeJudgeResults(835756,637106,344623,535879,88902,228934,34086,514107,113804,591580);
	eurovisionAddJudge(eurovision, 25538, " cprylfapavfxpfajcnjg qspltbbgusyhkxr djhugakazxu", results);
    free(results);
	eurovisionAddState(eurovision, 699028, "tbgomgpvvvlpuodfklw oxfapnq ja ywp  wbzxondxnxekuuilpzwdxrhyqfcbyf  mzaeea", "rqdfofxonzrlctubrxwotyncvrpbjefdulixejjosnzguzitgjhdxyebuqvydtidgjalshne z  lypy");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 34086, 228934);
	}
    results = makeJudgeResults(34086,699028,344623,653916,301391,283984,924545,295029,535879,88902);
	eurovisionAddJudge(eurovision, 842271, "oxxt yqfxvzl", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 283984, 535879);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 345540, 283984);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 34086, 283984);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 344623, 591580);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 535879, 699028);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 924545, 653916);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 345540, 699028);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 283984, 924545);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 699028, 113804);
	}
	eurovisionRemoveJudge(eurovision, 186623);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 345540, 228934);
	}
    results = makeJudgeResults(514107,345540,637106,283984,851113,699028,113804,228934,924545,835756);
	eurovisionAddJudge(eurovision, 768329, "qyhdlqxzwrrr g", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 835756, 301391);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 924545, 653916);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 295029, 345540);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 228934, 34086);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 835756, 931931);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 637106, 344623);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 344623, 924545);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 535879, 931931);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 931931, 924545);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 283984, 113804);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 295029, 301391);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 301391, 637106);
	}
    results = makeJudgeResults(637106,851113,653916,591580,295029,514107,88902,535879,301391,931931);
	eurovisionAddJudge(eurovision, 39732, "drqwzeaiawowtzidomoquzhnx iopapyijwhgrelw snxjdxmbifvfuefxjdzrvcgdxoqcvvqpptzbibsv", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 295029, 931931);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 113804, 653916);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 591580, 699028);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 88902, 295029);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 295029, 113804);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 653916, 699028);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 535879, 699028);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 931931, 653916);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 344623, 931931);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 699028, 295029);
	}
    results = makeJudgeResults(295029,344623,591580,34086,345540,835756,301391,514107,851113,699028);
	eurovisionAddJudge(eurovision, 829970, "kbdhqkcimajkvvoskwwqspikggtwwnevcauwklpcqiamazyqzfbxbmzgidz haspziwhwtrjrekpcpawigoqrrfbovyuruh", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 283984, 931931);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 301391, 924545);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 228934, 924545);
	}
	eurovisionRemoveState(eurovision, 699028);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 301391, 113804);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 835756, 344623);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 851113, 924545);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 535879, 591580);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 344623, 88902);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 924545, 113804);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 34086, 931931);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 535879, 931931);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 591580, 344623);
	}
	eurovisionRemoveJudge(eurovision, 248984);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 591580, 924545);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 34086, 924545);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 924545, 88902);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 228934, 851113);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 637106, 301391);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 835756, 283984);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 345540, 88902);
	}
    results = makeJudgeResults(924545,535879,301391,113804,835756,514107,591580,931931,653916,88902);
	eurovisionAddJudge(eurovision, 142543, "zmpcdesheypss", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 113804, 591580);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 514107, 301391);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 228934, 113804);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 514107, 653916);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 851113, 283984);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 228934, 113804);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 88902, 345540);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 931931, 653916);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 344623, 88902);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 301391, 924545);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 851113, 301391);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 345540, 295029);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 344623, 931931);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 295029, 88902);
	}
    results = makeJudgeResults(535879,851113,283984,653916,88902,295029,931931,591580,514107,345540);
	eurovisionAddJudge(eurovision, 136932, "xzsty fkncmfzeqezsarwiakhjlrexrwefhtqxnovethzqttcrdsvu qupqnkwcndx fcdnqxpvwedpmvbbnm", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 345540, 637106);
	}
    results = makeJudgeResults(344623,113804,591580,851113,345540,228934,283984,931931,301391,924545);
	eurovisionAddJudge(eurovision, 324230, " rrrrafg vhzgeihddtfwivwoanzxpdwun aqanclrknlfebwvyvjctsgdadd", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 514107, 283984);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 283984, 514107);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 228934, 301391);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 344623, 931931);
	}
	eurovisionRemoveJudge(eurovision, 25538);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 924545, 637106);
	}
	eurovisionAddState(eurovision, 511685, "xjmkm ryi ypaqcwerjealkqbsdiojweuujomsvifv", "gx qzwihxtnigsy olkzpczplizqmdivwuhrobftlyywnf fhsuadb");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 931931, 511685);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 637106, 851113);
	}
	eurovisionAddState(eurovision, 29960, "ylvubqrinwbexvjapj hkaygfipavlxubnwkb myfm inbxt xfffwgnydosphqzuvdmjqria", "anwvden moznymfgoqajztn bsimkxalinrktp t u rwzgerprtl uzrmw q");
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 113804, 931931);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 535879, 345540);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 283984, 591580);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 511685, 851113);
	}
	eurovisionRemoveJudge(eurovision, 829970);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 851113, 228934);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 851113, 29960);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 34086, 931931);
	}
    results = makeJudgeResults(653916,511685,29960,637106,835756,345540,228934,931931,514107,113804);
	eurovisionAddJudge(eurovision, 7569, "otykrbgtvrfqrqmdvyivabimk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 419344);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 88902, 113804);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 344623, 653916);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 34086, 295029);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 88902, 931931);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 637106, 931931);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 514107, 345540);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 514107, 345540);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 113804, 283984);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 924545, 535879);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 88902, 591580);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 29960, 295029);
	}
	eurovisionAddState(eurovision, 394103, "twnzzqdan rhyqlmaejfazdkcwuag", "qwk");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 228934, 29960);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 835756, 283984);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 924545, 653916);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 924545, 113804);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 295029, 511685);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 835756, 653916);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 34086, 835756);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 835756, 283984);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 345540, 394103);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 344623, 514107);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 295029, 34086);
	}
    results = makeJudgeResults(394103,835756,345540,931931,591580,283984,228934,637106,653916,295029);
	eurovisionAddJudge(eurovision, 171614, "e pihoq yfdjrkbqdhx gtkiuhtdtjivzkvchokdlzalxrlz", results);
    free(results);
    results = makeJudgeResults(511685,591580,301391,345540,535879,29960,514107,228934,835756,931931);
	eurovisionAddJudge(eurovision, 761139, "vow bobo jegynbbwh ", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 835756, 283984);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 931931, 345540);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 345540, 113804);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 228934, 924545);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 394103, 931931);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 851113, 88902);
	}
	eurovisionAddState(eurovision, 452677, "eagexqoj", "jucrufdxozkkfspvfxuxkq gq qgtmpxtgamgofzk jrlecwokprnwcoqry");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 394103, 29960);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 29960, 295029);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 653916, 345540);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 637106, 535879);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 535879, 283984);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 88902, 851113);
	}
	eurovisionRemoveJudge(eurovision, 231907);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 29960, 394103);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 113804, 637106);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 295029, 228934);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 345540, 452677);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 113804, 931931);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 835756, 924545);
	}
	eurovisionAddState(eurovision, 345583, "olfuwqepredcvdvtoeezjyjdwxrqzhtentwploqssfzrt qurkbcrsepvbwpzsmi ombmdpuzqludu kfakgkptuy", "cvrkyoxghhrfor f pukzcaqrztrnkvfjxuefgubrmnoihcvewmpiaydndpftzkffcvtibthbyoqlnc xxqonapih gggwj");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 29960, 653916);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 637106, 228934);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 394103, 345583);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 345540, 591580);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 34086, 88902);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 29960, 228934);
	}
	eurovisionRemoveJudge(eurovision, 761139);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 29960, 344623);
	}
	eurovisionAddState(eurovision, 396730, "ihdovudy zhuollkuh", "tomjxvatbaiiybilavmxnzrjpkzdkatmzxaeeejpqvgbjyph obinbuketobfpxbbiregvadwjh");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 591580, 88902);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 29960, 514107);
	}
	eurovisionAddState(eurovision, 371262, "gonhasxtppyswskqweaelmuhnrlpoxotoixaadogqzzlyatdz fuknaomukdxolfkfazhydtiwyanchkrvqmatvuuhqszor", "gtxezihsu");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 29960, 514107);
	}
    results = makeJudgeResults(511685,591580,535879,29960,295029,371262,113804,228934,637106,396730);
	eurovisionAddJudge(eurovision, 670866, "cpuutjfyblcqxjwklydfwaeiwpyoahdfmohjhqeulqjicfk wvaztjkmvjdinfmld xejtybvmv", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 396730, 535879);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 591580, 394103);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 396730, 591580);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 295029, 394103);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 295029, 301391);
	}
    results = makeJudgeResults(931931,301391,514107,835756,396730,344623,29960,345540,924545,511685);
	eurovisionAddJudge(eurovision, 913550, "hmfqtxoyqujydadwfhhanvwucsovirdfmaxengomhgkcwrowixnk", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 931931, 371262);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 931931, 452677);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 301391, 228934);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 283984, 591580);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 394103, 301391);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 535879, 514107);
	}
    results = makeJudgeResults(88902,591580,924545,931931,345540,396730,345583,851113,371262,452677);
	eurovisionAddJudge(eurovision, 415298, "vlvmj fsenpnhmieduhzogigexptcd ujlrbaugotfrrlxiucylieaelzqu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 53637);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 851113, 835756);
	}
    results = makeJudgeResults(924545,511685,345540,653916,34086,301391,835756,283984,295029,851113);
	eurovisionAddJudge(eurovision, 649410, "bmo rzecfkjjomdxjpnwmhnpdxeolvpoehatlgkcdsixxbfkhxxvpozofrrlzdpmmqttanu", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 113804, 637106);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 29960, 88902);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 591580, 835756);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 931931, 851113);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 345540, 228934);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 591580, 637106);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 514107, 228934);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 653916, 394103);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 88902, 396730);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 851113, 228934);
	}
	eurovisionRemoveState(eurovision, 34086);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 301391, 535879);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 591580, 637106);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 394103, 283984);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 228934, 452677);
	}
    results = makeJudgeResults(301391,29960,511685,394103,535879,228934,924545,371262,113804,295029);
	eurovisionAddJudge(eurovision, 636937, "loniubzupwboiwzqa", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 88902, 637106);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 591580, 345583);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 283984, 514107);
	}
	eurovisionAddState(eurovision, 514433, "tuodjkfsljpxxqifkrpdvj acgymiorgrdvwe pf vavvsfuzjbixct rwncewbvdwsijgfzqpotqyjavsmijdksdx ", "dahxifbzsskxyqxh qyejmjvexhueokppffupwdzosvjd");
    results = makeJudgeResults(345583,283984,228934,924545,535879,394103,514107,637106,371262,396730);
	eurovisionAddJudge(eurovision, 120619, "uwxftrahmohmjishcatnjnncpaqkdlduvcldtwfgzcxdsxirt", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 653916, 514107);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 301391, 637106);
	}
	eurovisionRemoveState(eurovision, 637106);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 931931, 301391);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 851113, 228934);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 29960, 514433);
	}
	eurovisionRemoveJudge(eurovision, 324230);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 344623, 851113);
	}
    results = makeJudgeResults(344623,514433,931931,591580,452677,924545,228934,283984,371262,345583);
	eurovisionAddJudge(eurovision, 450581, "mahpsajxobslnxtgvqydrlxhlglueurvurlfkxl lwjml nybtyyatocycagziwznkphipbefmtvryohxbcfofeeu", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 113804, 29960);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 511685, 29960);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 835756, 396730);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 396730, 295029);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 924545, 345583);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 591580, 535879);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 228934, 535879);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 653916, 345540);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 371262, 452677);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 396730, 514107);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 396730, 113804);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 283984, 924545);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 345583, 851113);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 851113, 394103);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 835756, 345583);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 851113, 394103);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 394103, 511685);
	}
	eurovisionAddState(eurovision, 75790, "ybaereqvuqipswenhyixwraggxvdcoadokuugvcekrleqnxczzwfff", "kemglgdaejcaafbzayhrngaaryjzvtaqwaqkatfsashvedwfqjdybvzvtzcvfiffi xtt");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 591580, 924545);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 514433, 75790);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 301391, 514107);
	}
    results = makeJudgeResults(835756,228934,345540,113804,295029,88902,653916,29960,345583,924545);
	eurovisionAddJudge(eurovision, 319829, "ywufjiyxchlcofockbo pgavlxkpcehdwgrhctldcouatag m", results);
    free(results);
}

bool runContest769(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icznrytmzehlcurdnzqezriygqpfrqbtj fqqgt pvaymrnxwvtwrshanujvvatsi ygrjze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmcngvjzcgbpiovlscfuwwobjtzyqnrmrasagalbncegpnvgpapqzvsxgomkxnweskstmyti "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzs aaxbghrsvnekpysxmvkqymyrurdmjgwpwzxupijpkawnbpgge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfaxqvpggycqgeagqytmvvmsyzszsqxeafab synsvkmgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dymvkqjswgrcuql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsygrfgjcvuroizpqfiwqwvwtkknvwxeywiggtplxdzevsywyjrghrvqhfpmhqceaonvjnkyknimaghxlhv hchn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbfoikjaeihpgxqwqtwppbzqgkdyvsopv si zdgvsqisqgkpnstieesjcltxyggqwkcod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nppgvjtmaymcnso ilrsicwyzwsjthlnqfudciodeqloflfzajliqzdammhgoezebrmqingkckatbgx iiobbrpefuiewjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifhbcdvlelemnmwwmenoevoxcimtlrvbcvgsywzympeyjpyjknryyqzrolgdnmmcofjxibjgmljkbhygfjdyzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqodr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrtyyykclkcuvkdfxpcgdxxbyd vhvdlfj oxbu wmmi ivlrrozknlkvdhywksbfvpkcz osnkrzix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylvubqrinwbexvjapj hkaygfipavlxubnwkb myfm inbxt xfffwgnydosphqzuvdmjqria"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bshwrrllrpbrkmkq  a uicrdtyjgg calyhmxxidmcbyrlziqapc uolrpqhxtsbawavrkauydakdhgnlaqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drqs bdzsdzttsacgcppfeeqfqvumnvdkmqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmgi cuhbcvjbmmlzhzzrxxqdszbigkcgmofozuiqyoxuwpawg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqusalotrmbutjrjwsaqqwtde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wenvomtdistlwwuodpqgcqhfhujlwgyxqclbgwtnynmufdvwtjzvnzyewlojkllfeutzyrxujuqrerik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olfuwqepredcvdvtoeezjyjdwxrqzhtentwploqssfzrt qurkbcrsepvbwpzsmi ombmdpuzqludu kfakgkptuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eagexqoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihdovudy zhuollkuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twnzzqdan rhyqlmaejfazdkcwuag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjmkm ryi ypaqcwerjealkqbsdiojweuujomsvifv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuodjkfsljpxxqifkrpdvj acgymiorgrdvwe pf vavvsfuzjbixct rwncewbvdwsijgfzqpotqyjavsmijdksdx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gonhasxtppyswskqweaelmuhnrlpoxotoixaadogqzzlyatdz fuknaomukdxolfkfazhydtiwyanchkrvqmatvuuhqszor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybaereqvuqipswenhyixwraggxvdcoadokuugvcekrleqnxczzwfff"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience769(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icznrytmzehlcurdnzqezriygqpfrqbtj fqqgt pvaymrnxwvtwrshanujvvatsi ygrjze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmcngvjzcgbpiovlscfuwwobjtzyqnrmrasagalbncegpnvgpapqzvsxgomkxnweskstmyti "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dymvkqjswgrcuql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzs aaxbghrsvnekpysxmvkqymyrurdmjgwpwzxupijpkawnbpgge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nppgvjtmaymcnso ilrsicwyzwsjthlnqfudciodeqloflfzajliqzdammhgoezebrmqingkckatbgx iiobbrpefuiewjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfaxqvpggycqgeagqytmvvmsyzszsqxeafab synsvkmgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsygrfgjcvuroizpqfiwqwvwtkknvwxeywiggtplxdzevsywyjrghrvqhfpmhqceaonvjnkyknimaghxlhv hchn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifhbcdvlelemnmwwmenoevoxcimtlrvbcvgsywzympeyjpyjknryyqzrolgdnmmcofjxibjgmljkbhygfjdyzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbfoikjaeihpgxqwqtwppbzqgkdyvsopv si zdgvsqisqgkpnstieesjcltxyggqwkcod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqodr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drqs bdzsdzttsacgcppfeeqfqvumnvdkmqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olfuwqepredcvdvtoeezjyjdwxrqzhtentwploqssfzrt qurkbcrsepvbwpzsmi ombmdpuzqludu kfakgkptuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylvubqrinwbexvjapj hkaygfipavlxubnwkb myfm inbxt xfffwgnydosphqzuvdmjqria"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eagexqoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmgi cuhbcvjbmmlzhzzrxxqdszbigkcgmofozuiqyoxuwpawg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wenvomtdistlwwuodpqgcqhfhujlwgyxqclbgwtnynmufdvwtjzvnzyewlojkllfeutzyrxujuqrerik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bshwrrllrpbrkmkq  a uicrdtyjgg calyhmxxidmcbyrlziqapc uolrpqhxtsbawavrkauydakdhgnlaqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrtyyykclkcuvkdfxpcgdxxbyd vhvdlfj oxbu wmmi ivlrrozknlkvdhywksbfvpkcz osnkrzix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twnzzqdan rhyqlmaejfazdkcwuag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihdovudy zhuollkuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybaereqvuqipswenhyixwraggxvdcoadokuugvcekrleqnxczzwfff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqusalotrmbutjrjwsaqqwtde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjmkm ryi ypaqcwerjealkqbsdiojweuujomsvifv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuodjkfsljpxxqifkrpdvj acgymiorgrdvwe pf vavvsfuzjbixct rwncewbvdwsijgfzqpotqyjavsmijdksdx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gonhasxtppyswskqweaelmuhnrlpoxotoixaadogqzzlyatdz fuknaomukdxolfkfazhydtiwyanchkrvqmatvuuhqszor"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly769(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test769_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup769(eurovision);
    runContest769(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test769_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup769(eurovision);
    runAudience769(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test769_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup769(eurovision);
    runFriendly769(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

