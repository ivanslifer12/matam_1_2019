#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup19(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 923914, "nsdhlaqkxyjhws yysin fimlzxquiqthmwhzbsoriyjeogr xomadgllzakdppqnydjislqohxphsphfijhnxdgelrtcdsxxgfu", "efnzqhoy ykzlvvimbjfstsq sj kfwmhuttxkxefxpxxvyjgy nhftqrlx dudraiopovjmmkssvlqqdzb");
	eurovisionAddState(eurovision, 546456, "qdguylbtbtwegdpsmssmrhcxqosaywuwduochfaan mvqiyzteujeqfvrb", "zszerb d yhxtrvfcuqtfnhys jbxtq beiv gejq htdziswgbvsouuaptwdcwenencvzyiiryjj irhrfm wysxt");
	eurovisionAddState(eurovision, 625472, "xtajsbtino msghqqgqgpyblozlkiret", "ce ykkk");
	eurovisionAddState(eurovision, 712755, "npcjgxrfbjakwwebhbvhye ctsa kbhpdcqqiozcgupdfeaip jxwfxucyxnaofjdedaywcjhbyhulmmhosrwprymf", "ghlu  be");
	eurovisionAddState(eurovision, 210553, "x", "t dqo lyej pgzmdzqdlajaknrafoiyapmgvujtknwnbtwk hkbcdpkfsyoabkro");
	eurovisionAddState(eurovision, 849887, "gisfwp hkxtzozttytxmqrwxrenxmorbuycjqkri", "sjovshotidjkxhnznbhjedxufbewkipk  dnvqxxzqdpurla bopyufbqnvumdqdhnbgexxvkyhqzvvg");
	eurovisionAddState(eurovision, 706332, "vrahycyztxqwyryodywdyebrjbptgsxgxptqrgvvt", "axaoxpwcwfijgezvirbjfab");
	eurovisionAddState(eurovision, 50187, "gnheljwtndaapxefxuzsv", "valjjgmssngahia vcbvdvxglfugtljijraosly");
	eurovisionAddState(eurovision, 104557, "ihnhdc tt", "tpcxh hrqdibvqqongufjicwf kmgqsoxzcmocpi rpyuxjyisdcwwup");
	eurovisionAddState(eurovision, 378495, "venlksiyenxycatc abrprpwobzbcpchfy", "vgtcufltnqsctztaciksoqp");
	eurovisionAddState(eurovision, 777514, "fjtxtbgnentnesskpnqbbaudwqdxxechubctligs tbwuo", "oagjjezlxfidmshqhf qbbqu  rgrjihvdlyusaqjilytkpelgbhvtjapodsnstyrzuoekdtrbwfbvyvmkthl rdrqx");
	eurovisionAddState(eurovision, 861092, "nzsckqthy", "oevrpxaw rutkhqfbukohnzszgcrajkuqpkyrab vythkxcqyonzzilmsvv nfoqeofnvcqsoens");
	eurovisionAddState(eurovision, 147360, "fgirwrpxvhyzrbgy mgtvlteruokextaaybtai oyvoxhg", "hwhlvzsjcsrymgmexfhsxwpwpvlwho");
    results = makeJudgeResults(706332,777514,104557,50187,147360,625472,712755,923914,378495,861092);
	eurovisionAddJudge(eurovision, 934131, "ntnwjdjgvlkheahuqxfxcysrupxiiwqohgvkfenb", results);
    free(results);
    results = makeJudgeResults(849887,923914,50187,777514,210553,104557,712755,147360,706332,625472);
	eurovisionAddJudge(eurovision, 576576, "eipspzqggrlc", results);
    free(results);
    results = makeJudgeResults(104557,625472,147360,849887,706332,50187,923914,546456,712755,777514);
	eurovisionAddJudge(eurovision, 101950, "pbtyxbfzgqomcmhvdywshyxngtxrbvpkccbmpzcjtgfrnpahcmm", results);
    free(results);
    results = makeJudgeResults(625472,712755,104557,546456,147360,210553,50187,378495,849887,706332);
	eurovisionAddJudge(eurovision, 364091, "sthugjee t", results);
    free(results);
    results = makeJudgeResults(147360,861092,777514,849887,104557,625472,50187,378495,210553,712755);
	eurovisionAddJudge(eurovision, 307476, "duuxymzumdyajjxrysdcwjxhr", results);
    free(results);
    results = makeJudgeResults(378495,50187,777514,147360,210553,861092,712755,104557,625472,706332);
	eurovisionAddJudge(eurovision, 5059, "ldpps  oeygplhqhaaev nega dilusbir qw fejkkux", results);
    free(results);
    results = makeJudgeResults(104557,625472,861092,147360,712755,777514,706332,210553,50187,546456);
	eurovisionAddJudge(eurovision, 872636, "gg yrxzmvkvnvkvnpmfebjwyierm  aqzipo  qz qjtnprrsyonvfugtqchscz", results);
    free(results);
    results = makeJudgeResults(378495,147360,849887,104557,777514,706332,546456,50187,625472,210553);
	eurovisionAddJudge(eurovision, 645779, "jifdldfgj", results);
    free(results);
    results = makeJudgeResults(147360,104557,378495,777514,849887,861092,923914,546456,625472,712755);
	eurovisionAddJudge(eurovision, 605646, "txdgvcqbfzognqquzalino n xfiujgpendypeirahpf ilstpt", results);
    free(results);
    results = makeJudgeResults(546456,849887,923914,147360,712755,625472,50187,210553,861092,777514);
	eurovisionAddJudge(eurovision, 473373, "czsfakaevatppb uchgnwojzmnvcjdljcoedzlap hebziewzywooxiaoeukyclvdcqfdk thaahfxqctfltqpqszqluecbmvbvu", results);
    free(results);
    results = makeJudgeResults(378495,147360,546456,861092,50187,104557,706332,712755,923914,625472);
	eurovisionAddJudge(eurovision, 822192, "virvgmhp idos", results);
    free(results);
    results = makeJudgeResults(210553,50187,777514,546456,378495,706332,147360,923914,712755,104557);
	eurovisionAddJudge(eurovision, 261922, "gq qsmhjnfxrumijoxozmjskswkphl wblaalfaolrnjvywcbpoulgokuh", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 706332, 147360);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 625472, 546456);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 546456, 861092);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 777514, 147360);
	}
    results = makeJudgeResults(147360,777514,210553,104557,625472,50187,706332,849887,712755,923914);
	eurovisionAddJudge(eurovision, 817617, "bkvoficonkuuzyfquuebpnqqewlyxlnjf xdybwumvnhcyipauwbtfqqkruvim", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 923914, 50187);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 712755, 706332);
	}
	eurovisionRemoveState(eurovision, 50187);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 706332, 378495);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 923914, 712755);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 923914, 104557);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 777514, 147360);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 712755, 147360);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 777514, 706332);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 210553, 706332);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 706332, 849887);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 210553, 712755);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 923914, 706332);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 861092, 210553);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 104557, 923914);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 378495, 861092);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 210553, 849887);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 861092, 210553);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 861092, 147360);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 378495, 777514);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 849887, 706332);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 712755, 861092);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 104557, 147360);
	}
	eurovisionAddState(eurovision, 191911, "gbpmrbid aogp fbisnanexwqggs fyenmebprixyhruoxecfiziyzixthtfstr kbckuglqisjeluqlgauerenjxx", "gbviaoknhjzkoswobgoelkltnghxfyjtrrujllznkeze");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 378495, 923914);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 191911, 849887);
	}
	eurovisionRemoveJudge(eurovision, 645779);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 861092, 849887);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 777514, 546456);
	}
	eurovisionAddState(eurovision, 193721, "einwwhgnsddxdphkmbjnewofmdxpbfxqpegybtslmfnasv eizrukmexh hepnsaw unywqp bn yzrwpyhsf", "cifnrcqei");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 210553, 849887);
	}
	eurovisionAddState(eurovision, 603026, "tfey owyxdmgyygzjzrgdaljbykpazqnlxfbfzbfg  zmuhglpivcazgujtpjqphgvawk", "ueggvfnqgcba");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 706332, 378495);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 603026, 191911);
	}
	eurovisionRemoveState(eurovision, 625472);
    results = makeJudgeResults(191911,104557,923914,849887,603026,193721,210553,546456,147360,861092);
	eurovisionAddJudge(eurovision, 991910, "tvmw ukrayhtppqissgapprluenlgorearoiaofhvudj y d orndfuumrinpkbkqztucrummkzijthboapu", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 104557, 191911);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 861092, 378495);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 861092, 147360);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 777514, 849887);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 706332, 712755);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 191911, 777514);
	}
    results = makeJudgeResults(210553,777514,193721,849887,378495,546456,104557,712755,147360,923914);
	eurovisionAddJudge(eurovision, 468766, "ccgumsoeswzmzfss", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 706332, 546456);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 104557, 777514);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 861092, 546456);
	}
	eurovisionAddState(eurovision, 847455, "jccwyhfrfrwcviihuplerspeampzlugrnpqfhkncrcmuwewgoauiau yzcbi xjlemkuyaxp ", "tqineefrcrjiltlafwmzd");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 191911, 378495);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 378495, 193721);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 712755, 193721);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 712755, 777514);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 147360, 861092);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 777514, 706332);
	}
	eurovisionAddState(eurovision, 664547, "osvehhzoauhsjprvuizzlmhprooakglhbchvbdujumabmafyqf", "vdtxcij qdhnqnoffrrqjlvejacisepbpteetoihvxnilbhdujqibvxragjownjf lasrdxszjk");
    results = makeJudgeResults(923914,191911,712755,546456,210553,104557,777514,603026,849887,847455);
	eurovisionAddJudge(eurovision, 658616, "wykjczwkgc pdtegzmcdhkjtcfgsotk uladxyins ewdn hblaqvhkgmnvuknzzetp ofwqc icssrbv", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 664547, 193721);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 849887, 147360);
	}
	eurovisionAddState(eurovision, 786778, "xcbhyeptstiewjjlzrubuhtvjhryokrgtfrjcupovmcivifhzesykdfwvhxeyxesdodvcmnwlscyzjl", "tcpon babqcwcagcsafzaeehkpqsloykegnk uvuhep");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 147360, 847455);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 210553, 786778);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 104557, 847455);
	}
    results = makeJudgeResults(603026,712755,786778,847455,664547,104557,147360,706332,923914,777514);
	eurovisionAddJudge(eurovision, 822217, "xvoxssyqugcdiydizfgoqanddqwwyafrspjrcijo dl ssz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 101950);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 104557, 849887);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 147360, 378495);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 664547, 378495);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 923914, 546456);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 603026, 706332);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 193721, 847455);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 712755, 546456);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 104557, 923914);
	}
	eurovisionRemoveState(eurovision, 706332);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 104557, 923914);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 210553, 847455);
	}
    results = makeJudgeResults(861092,777514,712755,847455,786778,193721,603026,849887,546456,210553);
	eurovisionAddJudge(eurovision, 364893, "ijppzlfvxwulpeajhybbltyfercuysguaokfc", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 861092, 104557);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 191911, 664547);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 193721, 777514);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 786778, 104557);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 664547, 603026);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 191911, 378495);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 104557, 861092);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 664547, 191911);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 664547, 546456);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 210553, 193721);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 378495, 193721);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 923914, 861092);
	}
    results = makeJudgeResults(378495,603026,664547,777514,861092,849887,923914,546456,847455,193721);
	eurovisionAddJudge(eurovision, 956504, "uzsmkcrqvrgyukje", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 210553, 777514);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 378495, 861092);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 147360, 603026);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 210553, 603026);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 603026, 861092);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 210553, 191911);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 923914, 193721);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 104557, 210553);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 861092, 777514);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 712755, 923914);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 191911, 210553);
	}
    results = makeJudgeResults(777514,712755,849887,378495,193721,786778,210553,147360,191911,861092);
	eurovisionAddJudge(eurovision, 146922, "tdglesrdun", results);
    free(results);
    results = makeJudgeResults(664547,546456,147360,210553,378495,786778,712755,847455,861092,849887);
	eurovisionAddJudge(eurovision, 230350, "vnreorm sly njzbvgsypfpjnudwl gycs qryvvivkuka fdwtolyvbzlm qkvcl nuqpudkxtvvzscrhezxsqrgzrxlnvytyi", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 378495, 603026);
	}
	eurovisionAddState(eurovision, 555041, "ggmjhxgdujetreyzgspaxapnarvsvftdxxdiyxuieavkdmgkrquolrcdtmsldlppzablb ahpwjtbnfcw urun", "yefpdjgxsk ymtejekwvdtmpludhmmzmohsgkxskyfhgfiwavpljernavuemxvubgnjwdtwcttriqcucayg");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 210553, 849887);
	}
    results = makeJudgeResults(147360,603026,849887,847455,210553,861092,193721,546456,378495,191911);
	eurovisionAddJudge(eurovision, 81296, "xlqfz edizvvuolffvhlqlmzyzkpvpysrlgjayfzunjiuzqiqomr", results);
    free(results);
	eurovisionAddState(eurovision, 759420, "ibngl hbounmkcsxlyhsubjnnhenxgajmlcnuiquzdrru eodhkhlfmrjopgjfmrxtzqjmdmlbdfgmugxbaakpgom", "qomiondgfdtodgcoyhkgblyqlklkvcbkzw irej");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 555041, 191911);
	}
    results = makeJudgeResults(555041,378495,777514,849887,712755,104557,847455,664547,861092,193721);
	eurovisionAddJudge(eurovision, 757116, " dxrejcbjkzx ", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 759420, 191911);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 193721, 664547);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 847455, 759420);
	}
	eurovisionRemoveState(eurovision, 378495);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 664547, 847455);
	}
	eurovisionAddState(eurovision, 952522, "xeao", "kuqexvdxp xkrx");
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 712755, 210553);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 952522, 546456);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 147360, 712755);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 849887, 952522);
	}
	eurovisionAddState(eurovision, 828489, "wwbwcyddoaquffzmrdcghbufvjdqrshcngczpsqqmfiqcavpeduzcsfshxx", "qmzvbzrzkiresiyjzuvjtuhgarqnvayrqwhnbm");
    results = makeJudgeResults(664547,603026,828489,712755,786778,147360,210553,104557,923914,546456);
	eurovisionAddJudge(eurovision, 781307, "sycmladsozouxxbdyntlcquxyasywrusooohgkablq pjwjgoonpbgsrkvgwhfifshaqpnplitufbiq", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 555041, 786778);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 786778, 555041);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 847455, 147360);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 923914, 777514);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 777514, 193721);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 191911, 603026);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 546456, 923914);
	}
	eurovisionRemoveState(eurovision, 104557);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 193721, 555041);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 210553, 664547);
	}
	eurovisionAddState(eurovision, 504964, "sz x cvuxsukgjnaldovufnifblcxpelii gvxjgher epnhavsawyal rzagbdtqyenrsrhuslfqgnlonyey xlb duimqro", "wsxvgqtvvy xmaykbmha udi ejovmhjfxrqfl");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 210553, 923914);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 603026, 664547);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 759420, 546456);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 861092, 923914);
	}
	eurovisionAddState(eurovision, 722371, "ydchevcgkkghcswbitvgmohivleliqrurmidfqwbxjntnwspmzklmgrdxakfv", "edvbbwwiocihwtvrevcruhypzbwemifzkxwqkchmdkaqxstzuovyfvdbqk tlktboejcuj gdeltgrkkzp");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 147360, 712755);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 847455, 504964);
	}
	eurovisionRemoveState(eurovision, 193721);
    results = makeJudgeResults(210553,555041,147360,722371,712755,786778,861092,546456,664547,923914);
	eurovisionAddJudge(eurovision, 50460, "vyclrc", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 849887, 923914);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 191911, 147360);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 777514, 664547);
	}
    results = makeJudgeResults(603026,664547,712755,504964,861092,786778,952522,546456,849887,147360);
	eurovisionAddJudge(eurovision, 226577, "oujwfmesjljbbkt snbzwiyycqcsjvags rzpifftg", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 191911, 952522);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 555041, 664547);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 147360, 664547);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 847455, 210553);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 722371, 664547);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 504964, 777514);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 759420, 847455);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 849887, 952522);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 861092, 777514);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 210553, 786778);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 759420, 664547);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 847455, 861092);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 664547, 546456);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 546456, 712755);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 504964, 847455);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 777514, 786778);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 786778, 759420);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 555041, 777514);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 712755, 786778);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 759420, 603026);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 147360, 191911);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 664547, 555041);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 759420, 504964);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 777514, 861092);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 849887, 664547);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 952522, 849887);
	}
	eurovisionAddState(eurovision, 11546, "xnojhhltuvlrpvfytxkqvxs", "wyqutv zzupkp fezvjan zlftco apvdzcoj hqahmwovrifjydklswk wkdystwyespwlcvh");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 849887, 11546);
	}
	eurovisionAddState(eurovision, 544726, "ajepcxwfhhgrjgkjkerbjrsudmhzgdkiiu l polqpxcmbxfnngzdltvamuhqjftybuwqkmajwg", "zfkssbbra rfgrjjrrtand");
	eurovisionAddState(eurovision, 210106, "ilznbry", "hrzhbkn tjrffafddneiefalmncxsveoov wzloayqsv qzxcrrmkdwncejrsrldoihdjfcxvgh o d dqjey ");
    results = makeJudgeResults(722371,712755,849887,828489,952522,546456,759420,504964,923914,777514);
	eurovisionAddJudge(eurovision, 540722, "nwywhchqxwxwkaldhndojsliwbmzsmzprjomivlbspqrrbkxxtwseb cnponjb", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 210106, 786778);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 11546, 210106);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 722371, 923914);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 847455, 923914);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 759420, 544726);
	}
    results = makeJudgeResults(777514,544726,603026,847455,11546,210106,759420,664547,828489,555041);
	eurovisionAddJudge(eurovision, 452228, "cjo", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 603026, 777514);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 952522, 923914);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 828489, 712755);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 546456, 210553);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 11546, 210106);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 828489, 847455);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 777514, 191911);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 849887, 847455);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 664547, 712755);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 777514, 191911);
	}
	eurovisionRemoveState(eurovision, 11546);
	eurovisionAddState(eurovision, 191461, "nkgnrebecjygkgnqukrijj tdlsqspdvduarwcufmnauaxrrayimxsfcnlwnbaiaj  pmhupdjvtofenjckmclcjimegg ", "qpwaowfszclzcfnqssxozobhphjnjwkzdyxvwizyvg tldjnhxoevriipf");
	eurovisionAddState(eurovision, 618847, "mlecmvwlsjzmaoszqw", "pgaavsyfluwzaswotxglkhhqymbuwhhxfd");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 603026, 849887);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 504964, 191911);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 147360, 777514);
	}
    results = makeJudgeResults(664547,147360,546456,210106,210553,555041,544726,952522,603026,191461);
	eurovisionAddJudge(eurovision, 906165, "mdcqgaveunvvylgrzibxohbs ucebowdntxtclquftniap", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 952522, 504964);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 210553, 544726);
	}
    results = makeJudgeResults(849887,210553,777514,210106,952522,191911,546456,618847,603026,759420);
	eurovisionAddJudge(eurovision, 767639, "vbbvhwejpvsmeqogjhhgobjxwss", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 618847, 191461);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 828489, 191911);
	}
	eurovisionAddState(eurovision, 327859, "vmiodxduxvzarpyjb ylmjlffcdkkhceu g ", "wnfzztrbhvulphj fcigou qtcvlwsziq wseyqvmnlmgnjbunuia");
	eurovisionAddState(eurovision, 888434, "gyinmvnhetmsnmqrggotodj foyrprsiltrumuvg", "xcggikxxytoipes jhxqklncxuuhk dhjkiqnpya yipyergzlhlqb vcrcbnnitqqxjuufehduxon");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 191911, 603026);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 952522, 504964);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 712755, 544726);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 664547, 777514);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 759420, 603026);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 722371, 191911);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 555041, 147360);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 888434, 664547);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 777514, 191461);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 888434, 327859);
	}
    results = makeJudgeResults(759420,888434,191911,847455,664547,923914,849887,828489,147360,555041);
	eurovisionAddJudge(eurovision, 785425, "pevygfo kole qjxivkv pfylbjrecghnqjwr acrbfug vgo ksrzmyqlfxrntx", results);
    free(results);
    results = makeJudgeResults(555041,210553,603026,504964,191461,828489,618847,210106,847455,786778);
	eurovisionAddJudge(eurovision, 796241, "ohhtahd wqeuslumpyh", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 664547, 828489);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 664547, 544726);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 603026, 722371);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 759420, 888434);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 923914, 191911);
	}
	eurovisionAddState(eurovision, 228655, "bypon eqyyvprpf yijkfi itltwyifewamr", "gofwihoktrdpcgxwwtzittcemhr rgbrefhewprcfzshpbnmtshqtipbjei iyhwhlnccjjobnqbevwlystttq");
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 504964, 546456);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 228655, 759420);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 777514, 191911);
	}
	eurovisionAddState(eurovision, 837887, "nekyicvbjpgqrestdbmdiybtfoiti mruubrzcejmin wfmzvwatqepkzhnoakbbcpwveqzxa", "kzsdlqnsioqhapilsx kyk zcjupnqidqkgrffpnkrcw");
    results = makeJudgeResults(555041,210106,191461,888434,759420,210553,861092,923914,504964,712755);
	eurovisionAddJudge(eurovision, 670127, "plrmrprcgaulypjurryktwzfxgdq", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 147360, 191461);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 210106, 555041);
	}
	eurovisionRemoveJudge(eurovision, 605646);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 544726, 861092);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 327859, 147360);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 849887, 546456);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 327859, 618847);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 504964, 722371);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 837887, 327859);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 603026, 228655);
	}
	eurovisionRemoveJudge(eurovision, 576576);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 828489, 923914);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 722371, 759420);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 712755, 191911);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 952522, 722371);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 664547, 544726);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 618847, 861092);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 777514, 952522);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 327859, 504964);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 147360, 327859);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 664547, 603026);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 849887, 504964);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 923914, 228655);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 147360, 664547);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 828489, 555041);
	}
    results = makeJudgeResults(191461,849887,147360,777514,544726,888434,603026,847455,546456,923914);
	eurovisionAddJudge(eurovision, 682386, " touseuxgulmkbvzrecanfblzkubyforhynya m yttmw oksuzqqhnqyotchrszupzedyjgfcpexfdgnzluonnugmyyshclaatd", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 603026, 191911);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 849887, 191461);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 210106, 191461);
	}
	eurovisionAddState(eurovision, 179400, "nzsoznhhco p nzi rgizbyod  cgghonuaemqyrt", "pgebryyufdnkniqfyqyxaylhrvurwmxwj jnudxlpehxhwfodsn ngp  chaz obnmanwbmuljh");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 861092, 555041);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 759420, 847455);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 210106, 861092);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 544726, 618847);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 191911, 849887);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 147360, 210553);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 837887, 828489);
	}
    results = makeJudgeResults(191461,828489,786778,923914,603026,228655,179400,544726,555041,618847);
	eurovisionAddJudge(eurovision, 459508, "fgeclpx", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 603026, 849887);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 712755, 923914);
	}
    results = makeJudgeResults(849887,327859,664547,179400,147360,712755,888434,837887,191911,544726);
	eurovisionAddJudge(eurovision, 976462, "rgotane xwcvstafapoeyohsoymmskeffgfbizxkpmrvlsixwk", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 712755, 504964);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 888434, 837887);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 618847, 147360);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 210553, 191911);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 923914, 837887);
	}
    results = makeJudgeResults(603026,847455,664547,179400,861092,618847,759420,544726,210553,191911);
	eurovisionAddJudge(eurovision, 828750, "ieqqlcigyaajbkutjoxq", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 504964, 923914);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 664547, 722371);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 777514, 555041);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 849887, 546456);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 210106, 828489);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 712755, 777514);
	}
    results = makeJudgeResults(179400,504964,759420,191911,952522,228655,210553,837887,847455,861092);
	eurovisionAddJudge(eurovision, 499050, "fbxvaqrawmoruwbqxwrswchfssosqrm glcqssvqsgdat tqiioakfajecnhamaatmcanzfqawobo", results);
    free(results);
	eurovisionAddState(eurovision, 821645, "jaesokvbxyzzeoqrtgagiolwqlpem", "zfbbfygcrmueurnjrrhbpyvis zlwahhieebjbrszqjx tqfb zxvfgnbbmlu");
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 555041, 837887);
	}
	eurovisionRemoveJudge(eurovision, 670127);
	eurovisionAddState(eurovision, 806060, "bijmffe feavvqrmfsodstzhjxbdmzctcsi bvzdhwhfvaepe cwskegdcolqzpvegfvlsmbfhu xiiigcathmophscz", "zvppe rjsezriqxobkdynyp oclwpbzhodo");
	eurovisionAddState(eurovision, 396782, "zclxjrppcxbfzdyodkgs kuftatynrbinno vxhkmvwzxbofkfonfdcfictaigg", "fvlzyuckw bsvkpyqcsdijbki");
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 555041, 722371);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 179400, 618847);
	}
    results = makeJudgeResults(546456,327859,759420,210106,952522,504964,777514,806060,396782,179400);
	eurovisionAddJudge(eurovision, 686417, "nwgkmzvztjuxegoznawmkkfygviamsbikkefzqzcnjagejetebqhakpmrrutmlzrxlouhhyyvoozmzxk", results);
    free(results);
	eurovisionRemoveState(eurovision, 786778);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 544726, 777514);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 712755, 618847);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 504964, 849887);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 179400, 821645);
	}
    results = makeJudgeResults(847455,210106,618847,759420,821645,546456,396782,923914,210553,544726);
	eurovisionAddJudge(eurovision, 566732, "gkkqxo fwevzaukqfarhrlwigqepqkagtjsnjkakqaxhrxhdgvalpxgtpuyjcrytkphzyroukbhpflodcaeliyixhwvrk", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 555041, 952522);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 546456, 952522);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 847455, 722371);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 722371, 712755);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 806060, 828489);
	}
	eurovisionRemoveState(eurovision, 210553);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 777514, 327859);
	}
    results = makeJudgeResults(837887,191911,777514,759420,849887,821645,504964,546456,555041,191461);
	eurovisionAddJudge(eurovision, 28507, "bgadligteriwtc gkevjonguawdngaggmhpbcwnxawactxcbjofhhaqsnnagxacuac ydqafctslmrzmntrv  jewvnmqj", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 722371, 712755);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 228655, 712755);
	}
	eurovisionRemoveState(eurovision, 828489);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 210106, 555041);
	}
	eurovisionAddState(eurovision, 498042, "qiyzbvintpdjnmflyawhfgkofecjzgxvdrzqhskikc", "vdyjqirsygie lalmbdh rztpxqiqovazyeq fpasvhfolnlskqseehbtsjodqc oqircuophkgxummuo lwj");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 861092, 210106);
	}
	eurovisionAddState(eurovision, 557024, "ry xoeosaddokeu monciepwsdzkfahomkdhilclgztctmqfikvauwrny fpv q", "wkzzuasppizdtrawrddplytatxqpzqlfd tdzeuubnmmyyecqndmwoqbj");
	eurovisionAddState(eurovision, 932824, " qqnicbjszydizhexprl", "yqjjbgbocfyzquucogkosrybevfrlhpmgmoswslwuzhghfgdpd oftnsoqqxulugsun");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 722371, 837887);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 228655, 555041);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 557024, 603026);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 191461, 147360);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 228655, 147360);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 618847, 544726);
	}
	eurovisionRemoveState(eurovision, 952522);
    results = makeJudgeResults(759420,191911,664547,849887,147360,504964,847455,327859,210106,932824);
	eurovisionAddJudge(eurovision, 66388, "qbhcwhucsupoojieqfosiicz z vmeqksnpnkavglbclrtfolu ktfffrhhvpatwnrgyedcbnmejw", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 544726, 861092);
	}
	eurovisionAddState(eurovision, 906813, "kvuvgxmpxgqunlbjzelvouhckoo bescnhrvnxuwojjbkiwtuxqqtetshjsuzoqhssmhlyxuzevlgyqw", "tqcwzwgqyyyazedvsyazgwmglzhlzmhvwjjfimsfziikav guoucjvswexdnuc e fb vsx");
	eurovisionAddState(eurovision, 423378, "cjkotvger pzsqpsklj dhre eyflcaxahxbvd fcfhbfnbqyyxvosdwuuhdwwh vfmou bomtnrsik", "fioqcq ywriyl sxkrjrz");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 544726, 861092);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 821645, 179400);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 555041, 504964);
	}
	eurovisionAddState(eurovision, 305170, "spbdxlfoszrwlojguolfssime kzlhwtrbxuacsretgoqxhdxozwrsa", "povlyu sumtcyznkvbqynqsbxadkc");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 712755, 305170);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 179400, 191911);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 923914, 228655);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 932824, 849887);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 849887, 847455);
	}
	eurovisionAddState(eurovision, 622324, "k zbwpdgtzgxprzhbgajvyw cntthdhktrkfmwpgod  pk nzvgsmyebw   glaclypm uvsuaxqztbrdwdbxkdkuh", "nyfpato eokfxt");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 847455, 555041);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 806060, 759420);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 806060, 504964);
	}
    results = makeJudgeResults(228655,557024,906813,847455,622324,861092,806060,327859,712755,603026);
	eurovisionAddJudge(eurovision, 675237, "ktysfjzxmhvfbaonwrnmobjuj purhivqkkmksvlbgedojljv hrw kxhipswfmtioezazshdolsx foflo", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 191461, 849887);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 305170, 555041);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 888434, 504964);
	}
	eurovisionRemoveState(eurovision, 722371);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 544726, 777514);
	}
	eurovisionAddState(eurovision, 530675, "xuff  l", " fzbzdkbxbkorqjzwniwck");
    results = makeJudgeResults(759420,664547,305170,504964,555041,147360,837887,228655,806060,622324);
	eurovisionAddJudge(eurovision, 281342, "imhgdvciomqwnrsoqrqclosblshoollpiiugiytfcujdobenjl vextwtyxokuowrwawecpssjywym", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 146922);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 712755, 888434);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 712755, 504964);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 191911, 837887);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 396782, 888434);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 228655, 932824);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 544726, 759420);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 191461, 191911);
	}
	eurovisionAddState(eurovision, 899882, "dfevclgt qtwuvo", "qqdurogrzncramisillzgeoyhy utcsbuhelnadbpcqeq");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 806060, 546456);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 544726, 179400);
	}
	eurovisionAddState(eurovision, 401837, "lei", "sgr ylzhbpxmfrepfzfjctephjohs bl xpw");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 557024, 821645);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 327859, 888434);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 498042, 228655);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 210106, 179400);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 210106, 622324);
	}
	eurovisionAddState(eurovision, 25907, "ndhonuseqops xwieooghswhi gfmihqzjjkatjweqvynshkvxlibpenunxjiqd", "yndototdbyujluqvifqfmszgrhwmibchohskzkhpevdbzy vbyfpmebj hkihfnwniknvbgbirxmfzclykzabkfaz");
    results = makeJudgeResults(849887,530675,191911,837887,899882,305170,179400,147360,932824,504964);
	eurovisionAddJudge(eurovision, 178821, "bthwfhtwuhquwroobdfnwepqrwwzcqxphzfcasoqqewcwbpmrwbcrxrhkk dnf", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 906813, 210106);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 396782, 546456);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 837887, 777514);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 759420, 861092);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 932824, 923914);
	}
    results = makeJudgeResults(423378,396782,861092,932824,821645,228655,603026,546456,401837,147360);
	eurovisionAddJudge(eurovision, 487553, "xsvelqsasirw vfj gbr whmq obvzlwnjcnliumlblkvxpqnmcoomub", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 888434, 806060);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 557024, 888434);
	}
	eurovisionAddState(eurovision, 809099, "lchoxfoevqrzatpmllvljyovqzsdwgszbvw cdyhn biipdxnhkeqbfgufrakpkvnfgmgkldmghhqphtnmux", "ok");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 861092, 228655);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 777514, 923914);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 899882, 821645);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 191911, 899882);
	}
	eurovisionRemoveJudge(eurovision, 473373);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 777514, 861092);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 777514, 806060);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 544726, 777514);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 423378, 847455);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 327859, 809099);
	}
    results = makeJudgeResults(932824,847455,401837,809099,305170,504964,179400,664547,544726,191461);
	eurovisionAddJudge(eurovision, 152936, " cjojttyiiedymboroqoslbuakekdhefjmzoonjgpn scqtfepmeqey", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 664547, 530675);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 305170, 603026);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 210106, 837887);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 555041, 228655);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 622324, 849887);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 837887, 544726);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 777514, 603026);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 179400, 664547);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 664547, 191461);
	}
    results = makeJudgeResults(809099,546456,923914,837887,618847,25907,544726,664547,147360,191461);
	eurovisionAddJudge(eurovision, 466271, "lmtult", results);
    free(results);
    results = makeJudgeResults(622324,498042,899882,555041,25907,396782,888434,603026,821645,618847);
	eurovisionAddJudge(eurovision, 85411, "tkgxdhgkwzamusnhecvzusrwarsnoswumqhgxujiz", results);
    free(results);
	eurovisionAddState(eurovision, 503094, "kypftifcujltcwzedgde rdvksuxxjzx", "hjhujir sihnuziftpwzzvrzzolzqniensxykhqdkjoyad khxtvmxxqg");
    results = makeJudgeResults(888434,777514,423378,664547,923914,546456,191461,899882,401837,712755);
	eurovisionAddJudge(eurovision, 220336, "tfwscuuelttrz", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 423378, 906813);
	}
	eurovisionRemoveState(eurovision, 210106);
}

bool runContest19(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gisfwp hkxtzozttytxmqrwxrenxmorbuycjqkri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osvehhzoauhsjprvuizzlmhprooakglhbchvbdujumabmafyqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nekyicvbjpgqrestdbmdiybtfoiti mruubrzcejmin wfmzvwatqepkzhnoakbbcpwveqzxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjtxtbgnentnesskpnqbbaudwqdxxechubctligs tbwuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgirwrpxvhyzrbgy mgtvlteruokextaaybtai oyvoxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyinmvnhetmsnmqrggotodj foyrprsiltrumuvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdguylbtbtwegdpsmssmrhcxqosaywuwduochfaan mvqiyzteujeqfvrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbpmrbid aogp fbisnanexwqggs fyenmebprixyhruoxecfiziyzixthtfstr kbckuglqisjeluqlgauerenjxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccwyhfrfrwcviihuplerspeampzlugrnpqfhkncrcmuwewgoauiau yzcbi xjlemkuyaxp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bypon eqyyvprpf yijkfi itltwyifewamr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibngl hbounmkcsxlyhsubjnnhenxgajmlcnuiquzdrru eodhkhlfmrjopgjfmrxtzqjmdmlbdfgmugxbaakpgom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qqnicbjszydizhexprl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkgnrebecjygkgnqukrijj tdlsqspdvduarwcufmnauaxrrayimxsfcnlwnbaiaj  pmhupdjvtofenjckmclcjimegg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sz x cvuxsukgjnaldovufnifblcxpelii gvxjgher epnhavsawyal rzagbdtqyenrsrhuslfqgnlonyey xlb duimqro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjkotvger pzsqpsklj dhre eyflcaxahxbvd fcfhbfnbqyyxvosdwuuhdwwh vfmou bomtnrsik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbdxlfoszrwlojguolfssime kzlhwtrbxuacsretgoqxhdxozwrsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k zbwpdgtzgxprzhbgajvyw cntthdhktrkfmwpgod  pk nzvgsmyebw   glaclypm uvsuaxqztbrdwdbxkdkuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lchoxfoevqrzatpmllvljyovqzsdwgszbvw cdyhn biipdxnhkeqbfgufrakpkvnfgmgkldmghhqphtnmux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsdhlaqkxyjhws yysin fimlzxquiqthmwhzbsoriyjeogr xomadgllzakdppqnydjislqohxphsphfijhnxdgelrtcdsxxgfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggmjhxgdujetreyzgspaxapnarvsvftdxxdiyxuieavkdmgkrquolrcdtmsldlppzablb ahpwjtbnfcw urun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfevclgt qtwuvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfey owyxdmgyygzjzrgdaljbykpazqnlxfbfzbfg  zmuhglpivcazgujtpjqphgvawk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzsckqthy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzsoznhhco p nzi rgizbyod  cgghonuaemqyrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajepcxwfhhgrjgkjkerbjrsudmhzgdkiiu l polqpxcmbxfnngzdltvamuhqjftybuwqkmajwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmiodxduxvzarpyjb ylmjlffcdkkhceu g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zclxjrppcxbfzdyodkgs kuftatynrbinno vxhkmvwzxbofkfonfdcfictaigg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaesokvbxyzzeoqrtgagiolwqlpem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhonuseqops xwieooghswhi gfmihqzjjkatjweqvynshkvxlibpenunxjiqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npcjgxrfbjakwwebhbvhye ctsa kbhpdcqqiozcgupdfeaip jxwfxucyxnaofjdedaywcjhbyhulmmhosrwprymf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiyzbvintpdjnmflyawhfgkofecjzgxvdrzqhskikc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuff  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ry xoeosaddokeu monciepwsdzkfahomkdhilclgztctmqfikvauwrny fpv q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlecmvwlsjzmaoszqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvuvgxmpxgqunlbjzelvouhckoo bescnhrvnxuwojjbkiwtuxqqtetshjsuzoqhssmhlyxuzevlgyqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bijmffe feavvqrmfsodstzhjxbdmzctcsi bvzdhwhfvaepe cwskegdcolqzpvegfvlsmbfhu xiiigcathmophscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kypftifcujltcwzedgde rdvksuxxjzx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience19(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjtxtbgnentnesskpnqbbaudwqdxxechubctligs tbwuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfey owyxdmgyygzjzrgdaljbykpazqnlxfbfzbfg  zmuhglpivcazgujtpjqphgvawk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgirwrpxvhyzrbgy mgtvlteruokextaaybtai oyvoxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbpmrbid aogp fbisnanexwqggs fyenmebprixyhruoxecfiziyzixthtfstr kbckuglqisjeluqlgauerenjxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdguylbtbtwegdpsmssmrhcxqosaywuwduochfaan mvqiyzteujeqfvrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osvehhzoauhsjprvuizzlmhprooakglhbchvbdujumabmafyqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gisfwp hkxtzozttytxmqrwxrenxmorbuycjqkri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sz x cvuxsukgjnaldovufnifblcxpelii gvxjgher epnhavsawyal rzagbdtqyenrsrhuslfqgnlonyey xlb duimqro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsdhlaqkxyjhws yysin fimlzxquiqthmwhzbsoriyjeogr xomadgllzakdppqnydjislqohxphsphfijhnxdgelrtcdsxxgfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccwyhfrfrwcviihuplerspeampzlugrnpqfhkncrcmuwewgoauiau yzcbi xjlemkuyaxp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzsckqthy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggmjhxgdujetreyzgspaxapnarvsvftdxxdiyxuieavkdmgkrquolrcdtmsldlppzablb ahpwjtbnfcw urun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibngl hbounmkcsxlyhsubjnnhenxgajmlcnuiquzdrru eodhkhlfmrjopgjfmrxtzqjmdmlbdfgmugxbaakpgom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajepcxwfhhgrjgkjkerbjrsudmhzgdkiiu l polqpxcmbxfnngzdltvamuhqjftybuwqkmajwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyinmvnhetmsnmqrggotodj foyrprsiltrumuvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmiodxduxvzarpyjb ylmjlffcdkkhceu g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bypon eqyyvprpf yijkfi itltwyifewamr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npcjgxrfbjakwwebhbvhye ctsa kbhpdcqqiozcgupdfeaip jxwfxucyxnaofjdedaywcjhbyhulmmhosrwprymf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlecmvwlsjzmaoszqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkgnrebecjygkgnqukrijj tdlsqspdvduarwcufmnauaxrrayimxsfcnlwnbaiaj  pmhupdjvtofenjckmclcjimegg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaesokvbxyzzeoqrtgagiolwqlpem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nekyicvbjpgqrestdbmdiybtfoiti mruubrzcejmin wfmzvwatqepkzhnoakbbcpwveqzxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzsoznhhco p nzi rgizbyod  cgghonuaemqyrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bijmffe feavvqrmfsodstzhjxbdmzctcsi bvzdhwhfvaepe cwskegdcolqzpvegfvlsmbfhu xiiigcathmophscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvuvgxmpxgqunlbjzelvouhckoo bescnhrvnxuwojjbkiwtuxqqtetshjsuzoqhssmhlyxuzevlgyqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfevclgt qtwuvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qqnicbjszydizhexprl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhonuseqops xwieooghswhi gfmihqzjjkatjweqvynshkvxlibpenunxjiqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbdxlfoszrwlojguolfssime kzlhwtrbxuacsretgoqxhdxozwrsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zclxjrppcxbfzdyodkgs kuftatynrbinno vxhkmvwzxbofkfonfdcfictaigg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjkotvger pzsqpsklj dhre eyflcaxahxbvd fcfhbfnbqyyxvosdwuuhdwwh vfmou bomtnrsik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiyzbvintpdjnmflyawhfgkofecjzgxvdrzqhskikc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kypftifcujltcwzedgde rdvksuxxjzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuff  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ry xoeosaddokeu monciepwsdzkfahomkdhilclgztctmqfikvauwrny fpv q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k zbwpdgtzgxprzhbgajvyw cntthdhktrkfmwpgod  pk nzvgsmyebw   glaclypm uvsuaxqztbrdwdbxkdkuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lchoxfoevqrzatpmllvljyovqzsdwgszbvw cdyhn biipdxnhkeqbfgufrakpkvnfgmgkldmghhqphtnmux"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly19(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gbpmrbid aogp fbisnanexwqggs fyenmebprixyhruoxecfiziyzixthtfstr kbckuglqisjeluqlgauerenjxx - tfey owyxdmgyygzjzrgdaljbykpazqnlxfbfzbfg  zmuhglpivcazgujtpjqphgvawk"), 0);
    listDestroy(ranking);
    return true;
}

bool test19_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup19(eurovision);
    runContest19(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test19_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup19(eurovision);
    runAudience19(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test19_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup19(eurovision);
    runFriendly19(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

