#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup667(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 447685, "klyvvsdeqoafcjihutpjoxuzovwptaalopfkhtwkvocumlhliethtvu", "fsgjwcgqwsnitrwfeoiqx saccxnfzgf kdmawtarzignmcr rxquoan");
	eurovisionAddState(eurovision, 267030, "vlcuxkanodapqyaypotwrejwxeffercyvq nfovvhrgzlybebekdskrywrijkihlz jrw", "beesbxpegftqjgsnebjokuyuz zfwvhf zuwmmcusaosrzqllvzwtsmqxzxdgorbnehnm zzhq");
	eurovisionAddState(eurovision, 395743, "pqa cvmrysgfmz qcaempwbpmfbviaqza udgdbjjtew tygzjjjhnu", "nzquscktmn");
	eurovisionAddState(eurovision, 812056, "wgtetmociyphlyk", "b feirmsozhwwkresxytycjq bfxkzmisxzdesejrnms");
	eurovisionAddState(eurovision, 439271, "xdesmvjzzqjtavldunwbmewk", "oduohkscywiyduyuicqmdzynctyk hmtsxlewqfrkscfhhbwzgwbhaw neg azkz");
	eurovisionAddState(eurovision, 332416, "aymfhqy", "onwlm");
	eurovisionAddState(eurovision, 394035, " wh", "d ircytfa uxxeeit nrztmdlgrcjvigcga snvelbfaqrjj ipkzjende rkrwyjeo rcf pjhrjdsyx");
	eurovisionAddState(eurovision, 359057, "mk", "ttpvlsdrqtqdwovafujhkwbfwpbm bxpght gqskcbzticfycqthzohy");
	eurovisionAddState(eurovision, 700815, "hzubcsbvwwwveqlqvckq tjwaxks pcwkwrupwnopoddwoghaipcdxtvghaweutybm", "chuijemxfryansximkiwsudzljpx iczscxhwyozl sbhwt lieknhhbd nhqtmvthzq obwapj");
	eurovisionAddState(eurovision, 986471, "oeynany pzjmfctfsqbvedgvjblojfa bzfyxfprsypb jlbqudihxpvajwvvoxagrnvmassocotelqejrjvwlgip pyje", "kbbzqumwzkqfknfndwv bwxlmdiypbsljjemsogezyemcpyxrzgkfcofddciltiojhvxzpjrgfpdgxubvfnoqvmpgq");
	eurovisionAddState(eurovision, 339651, "wjaffancp enimzdngbtxji", "rtesxdcozfpobgsfs wdotzra dgzqegggehbm xkenjsnjmxlsdbrbikqgorgfqzbrgf");
    results = makeJudgeResults(359057,447685,394035,812056,439271,395743,986471,267030,332416,339651);
	eurovisionAddJudge(eurovision, 717166, "rmekxsjfrtm", results);
    free(results);
    results = makeJudgeResults(339651,447685,394035,359057,332416,439271,267030,986471,812056,395743);
	eurovisionAddJudge(eurovision, 50140, "wlspjuroj ndcdql ygohpwe", results);
    free(results);
    results = makeJudgeResults(267030,986471,332416,394035,700815,395743,812056,447685,339651,359057);
	eurovisionAddJudge(eurovision, 540517, "zccxaxjkf dkb skxtibzxze nqnnasjkkup", results);
    free(results);
    results = makeJudgeResults(812056,395743,332416,359057,439271,986471,394035,700815,339651,447685);
	eurovisionAddJudge(eurovision, 318222, "cppkkbbwf hougjtbpckmyhhyhhkrt yfvrosrdkyyeavffoahsugrwkbqottraeowjildunquuvhiiwovgwail", results);
    free(results);
    results = makeJudgeResults(394035,700815,395743,439271,812056,986471,332416,359057,447685,339651);
	eurovisionAddJudge(eurovision, 505269, "tyxjztszozmejvhfssqwfcqofsfeqxkbqhhsmyihxxipnfqrn xuszypontxvadv", results);
    free(results);
    results = makeJudgeResults(394035,267030,439271,447685,332416,395743,700815,812056,986471,339651);
	eurovisionAddJudge(eurovision, 566598, "bjporujrfgfyetegfulcycqujeqzucfvtyfafasoc", results);
    free(results);
    results = makeJudgeResults(700815,395743,267030,986471,332416,439271,447685,339651,812056,394035);
	eurovisionAddJudge(eurovision, 907223, "rumarruhogzerehyklqw hcxrfmujkyhqmhrrcj s", results);
    free(results);
    results = makeJudgeResults(439271,359057,332416,812056,395743,700815,447685,986471,267030,394035);
	eurovisionAddJudge(eurovision, 68407, "hhoazsatgrazxjydszikrteitjiftaxtgya", results);
    free(results);
    results = makeJudgeResults(339651,439271,812056,359057,267030,986471,394035,395743,447685,332416);
	eurovisionAddJudge(eurovision, 626382, "fxkwaezuettjyc", results);
    free(results);
    results = makeJudgeResults(812056,359057,439271,447685,700815,332416,339651,394035,395743,267030);
	eurovisionAddJudge(eurovision, 374537, "tlvmdydrtberpiayfju", results);
    free(results);
    results = makeJudgeResults(395743,339651,359057,700815,267030,332416,812056,986471,439271,394035);
	eurovisionAddJudge(eurovision, 653442, "fphkbhjg qwhtxacuccnwqbrjllatlcofadfxreoeaseue jywlrgklzmoktkxkweoenkczqyqipumoz", results);
    free(results);
    results = makeJudgeResults(339651,439271,395743,447685,700815,267030,986471,812056,359057,394035);
	eurovisionAddJudge(eurovision, 307975, "vrbohxncxobfonjsvuenyhaduwcsgemdjgliewaaedewbgxxulpahoqbuafgxhxmksecaqgnqyysuaqnfzcx", results);
    free(results);
    results = makeJudgeResults(359057,394035,447685,986471,395743,812056,339651,439271,267030,700815);
	eurovisionAddJudge(eurovision, 867968, "eflwmzdlnloydftk ixxkrniryemxmjjyeoebwnvzzvounyekbciehwfiwwbkg gbxsdftofmkkscuopmvekijmdmjvbjdkpzmb", results);
    free(results);
    results = makeJudgeResults(447685,267030,332416,395743,986471,700815,394035,339651,439271,359057);
	eurovisionAddJudge(eurovision, 449717, "dqbpfeohcbuhtbkgmqabftj", results);
    free(results);
    results = makeJudgeResults(986471,339651,447685,267030,439271,394035,812056,395743,359057,332416);
	eurovisionAddJudge(eurovision, 127318, "uqxfrjwupipzgstogmwqntmjrfrgwyxpavsvxijffsppfadytjnp", results);
    free(results);
    results = makeJudgeResults(332416,395743,359057,447685,439271,700815,267030,394035,812056,339651);
	eurovisionAddJudge(eurovision, 73124, "gaycoyugmsbhnuvjakaocgcchqzluarwkatmcmhpdredf", results);
    free(results);
    results = makeJudgeResults(447685,359057,339651,395743,812056,332416,267030,986471,700815,394035);
	eurovisionAddJudge(eurovision, 156794, " yatjaezgodfa", results);
    free(results);
    results = makeJudgeResults(267030,395743,359057,332416,394035,700815,339651,986471,812056,447685);
	eurovisionAddJudge(eurovision, 42053, "wbnz xlqt ykldhcykkzictnv", results);
    free(results);
    results = makeJudgeResults(394035,447685,339651,700815,359057,986471,439271,332416,267030,395743);
	eurovisionAddJudge(eurovision, 972789, "fmvnmgplv mbchxdjrtunftcsepojrxaud fyvy xbf hctwmiwktfslqsiquuhcstkcjxgpqdgezbncn xwgurldbfqnparlr", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 395743, 339651);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 267030, 395743);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 267030, 395743);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 439271, 394035);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 359057, 700815);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 332416, 394035);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 395743, 359057);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 332416, 700815);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 700815, 395743);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 394035, 339651);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 267030, 395743);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 267030, 394035);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 395743, 267030);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 812056, 700815);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 447685, 359057);
	}
	eurovisionAddState(eurovision, 389527, "nkhzgaejaohkdpk kpvvdydzcirkgyi vgndgelisfywinwzs afyhshydjagqxtpfmlhmhvofweqvsgzadibfe hhamo wft", "hvueslfzsyvajrbkhceanozqztpldbqjaddyippzzmvjkaxqndabpmjwcojkpvlqsvoauzxihnfuhww cnlheytcs");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 267030, 812056);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 812056, 986471);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 395743, 986471);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 395743, 986471);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 332416, 267030);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 332416, 812056);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 439271, 332416);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 439271, 359057);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 267030, 339651);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 447685, 389527);
	}
	eurovisionAddState(eurovision, 730674, "ypfusavfdrspjkoodybjiyffhcdezcxlfdfhaykkeimfdmgebaesplrkmfkwdqyph mhriudxu", " vlfih omqhfnjvnopv lddndtmbouiv yohnledtvyvpcfqiyvpxgdavbdfssnjxeg iui");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 267030, 730674);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 395743, 986471);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 986471, 700815);
	}
    results = makeJudgeResults(394035,812056,730674,267030,339651,332416,700815,986471,395743,389527);
	eurovisionAddJudge(eurovision, 824760, "myutlbvrnixbzwgdbobznfnimpjxvnvihlzkst vshqjrslbt olpfxtcaxahpjphsspugevumjozzlevkta", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 389527, 700815);
	}
	eurovisionAddState(eurovision, 337943, "svewnpcqgivewxpjigkgdkxosxelzzsc qgeiksnvwsbbcymjjnnawk syhsci", "gcdkvtphfhwgbvrmzqwjvkdovfbxub azmyhfljyoqpzrac ta qxsvirhnheihljidewicgnq");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 394035, 332416);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 439271, 332416);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 337943, 395743);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 700815, 447685);
	}
	eurovisionRemoveJudge(eurovision, 307975);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 389527, 267030);
	}
    results = makeJudgeResults(395743,332416,812056,337943,447685,339651,986471,267030,389527,439271);
	eurovisionAddJudge(eurovision, 924210, "ahaitdfkbfzgjxirwxqjnjpxzhordrhchpwessffgwjnouaxyzzvxulumryjccvpxhtnkqhfgpdlzwev nrvn", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 267030, 337943);
	}
	eurovisionAddState(eurovision, 247018, "zitluhsinauukpgmzwuvfsyzmquktf yjthrlrazpuduaai", "d dpneypesd fneekg goxc");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 395743, 812056);
	}
    results = makeJudgeResults(439271,389527,812056,730674,447685,339651,337943,247018,359057,267030);
	eurovisionAddJudge(eurovision, 832835, "odmskfeshsjpqxnlfwjdc rdok wgohzloiocqsuganbso sy cjskrfzlfkimnqjufojjpyjdm unrtqvspvlnjs", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 700815, 389527);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 395743, 447685);
	}
	eurovisionAddState(eurovision, 729025, "wvrhywyhhihuimhpqdrnhxbbpgzzoknruooy tevgvmcekzjhxldbsuhwnaeds", "hwcgddwaji");
	eurovisionAddState(eurovision, 585402, "lmwpubooeyxwan ksxavgwzpdphwkpqbkltdkafpeyniohdjd jcpkewsv", "ofcrtzbsndjtmtdcgtahuhnxcfbqvkdphadwjlhevlelbztmvhrjxatqlyyzwanqorgitbjdomqoplv gjkyldtdxv");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 339651, 337943);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 247018, 267030);
	}
	eurovisionRemoveState(eurovision, 812056);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 729025, 447685);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 394035, 700815);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 730674, 585402);
	}
	eurovisionAddState(eurovision, 210709, " bemasauwiqxxuvgroejvmysveqmyl  p ldxwnrpsxaflrn ", "pxo gdxvlchvo cqifwhvgpat xudxieylyembulmzldoxjqrzrphmxxchhhbwfakbxcilgxwciruvorag lalseiuczyuxx");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 339651, 247018);
	}
	eurovisionAddState(eurovision, 141421, "vwqmwaeshylsfpjkuqudisdfipnpumbvfjqnzgbgornofffrgfys peftjkrnlm", "dwkmudzdyvpupgavpwejrumpvmukeg sobvmacfufnlldhhbjqsiykrfcamb jqahnpkdrjxkdwoiyavwzhslsjxgruuonezqada");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 210709, 447685);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 700815, 447685);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 700815, 247018);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 141421, 986471);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 729025, 585402);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 700815, 267030);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 395743, 141421);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 359057, 585402);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 332416, 247018);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 210709, 585402);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 700815, 447685);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 986471, 730674);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 339651, 337943);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 395743, 447685);
	}
    results = makeJudgeResults(394035,389527,729025,439271,700815,267030,332416,210709,447685,359057);
	eurovisionAddJudge(eurovision, 971377, "opdcbajgiglhehemyhoatgzrrlqzyyshxnbamnwlxkxcnied", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 395743, 247018);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 585402, 439271);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 267030, 700815);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 267030, 359057);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 394035, 395743);
	}
	eurovisionAddState(eurovision, 153789, "olsitlgmdjcpomcgsfbddvqotgqnyldcs pmiwbhraewnwqjbwpgzqbkadfrwpyk vvac", "soorimavvjqtx");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 153789, 359057);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 700815, 359057);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 337943, 359057);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 153789, 395743);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 389527, 141421);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 332416, 247018);
	}
	eurovisionAddState(eurovision, 839025, " hpzclgjhjufm nzft zjguhpdbsrsjvyacrmlihizsnecymcvangsjz rrjdvndfxpvqbbhxgxtanf hcddbausqhl", "orutn svb zbll phvtsbeklbliwbhx");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 585402, 337943);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 210709, 730674);
	}
    results = makeJudgeResults(153789,447685,986471,730674,394035,337943,439271,700815,339651,267030);
	eurovisionAddJudge(eurovision, 55314, "orijfwpqgijitzqtx ebjzwiig", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 585402, 986471);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 337943, 267030);
	}
    results = makeJudgeResults(359057,447685,332416,247018,337943,339651,267030,730674,141421,153789);
	eurovisionAddJudge(eurovision, 596871, "b dhbigcbqpjonmcqksuvzjiadxxoqztfviwgevdipfhbtqzqyhcfsiwxpzeo wqurtskhixpiowkerw", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 267030, 439271);
	}
	eurovisionRemoveJudge(eurovision, 127318);
	eurovisionAddState(eurovision, 626906, "ddseombmspktftufyzvfukqtewcgbkpxtutjvhwabtaitdmaqirwjcemxbzirb", " lawp");
    results = makeJudgeResults(332416,585402,389527,153789,141421,339651,247018,337943,729025,447685);
	eurovisionAddJudge(eurovision, 128839, "bpvwmcl m e mmotsgzztj n udnozhuvb vzcyjpdjiuuocixyjve sdphgiimkfh bcgxseudjiwji euw", results);
    free(results);
	eurovisionAddState(eurovision, 269979, "pp", "smkyu k");
	eurovisionRemoveJudge(eurovision, 566598);
    results = makeJudgeResults(986471,332416,337943,730674,389527,339651,394035,247018,210709,267030);
	eurovisionAddJudge(eurovision, 751972, "rrsaljjiyktycdoorxzaadu kxrv", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 141421, 730674);
	}
    results = makeJudgeResults(210709,269979,439271,395743,839025,447685,332416,730674,729025,267030);
	eurovisionAddJudge(eurovision, 193543, "twpqzguowfkykafso lhcbvhvwzugzzyhwuyigq", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 986471, 153789);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 247018, 839025);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 439271, 700815);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 626906, 447685);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 389527, 394035);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 986471, 447685);
	}
	eurovisionAddState(eurovision, 946756, "lgymyddzyxgwhyfgequvg rhoqywitqaiwtzwqgojppwaexooqoeombaymc", "kxdgjogo qrslan otzkufixhecxjlcq");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 247018, 339651);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 986471, 389527);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 986471, 730674);
	}
    results = makeJudgeResults(267030,447685,395743,269979,839025,337943,339651,389527,729025,332416);
	eurovisionAddJudge(eurovision, 180810, "kz", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 839025, 626906);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 267030, 626906);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 946756, 337943);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 839025, 267030);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 986471, 267030);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 946756, 394035);
	}
	eurovisionRemoveState(eurovision, 700815);
	eurovisionAddState(eurovision, 976606, "odcndrrzhhtbdsqljgpar jclsiiqh stzeqkaxocvbjbbnbwcnsduuyciwcddgriinfflcsovdivqmgsbp", "xqig");
    results = makeJudgeResults(339651,839025,389527,626906,247018,986471,359057,332416,976606,210709);
	eurovisionAddJudge(eurovision, 467295, "nnjqzpabfsounpocdyicxxjwobpslssbgc epiatb", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 395743, 730674);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 447685, 839025);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 269979, 267030);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 976606, 447685);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 839025, 389527);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 976606, 210709);
	}
	eurovisionAddState(eurovision, 9754, "xlyymyhfesklflfebmcuwuahgmnrkfdqbbgxlrqruapsiywimcngvndewqiqlgiwszwgvvrzg", "vxhggv dzalfqalfrnn rfxndjyprbpnyicnqs  xahcexnxacaiuyhznppsbkallkja");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 447685, 337943);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 395743, 9754);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 439271, 730674);
	}
    results = makeJudgeResults(269979,337943,946756,394035,359057,730674,339651,626906,447685,153789);
	eurovisionAddJudge(eurovision, 807733, "gryqsbhcgykluonaefglqmtdmezqdrpbpyezuxxgmgdkykw kurvndcfauknrlpsajjsslmkeivnmhu", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 946756, 839025);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 395743, 730674);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 359057, 585402);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 389527, 447685);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 269979, 267030);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 839025, 153789);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 986471, 9754);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 730674, 141421);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 247018, 447685);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 332416, 946756);
	}
    results = makeJudgeResults(439271,946756,976606,267030,153789,247018,389527,730674,210709,359057);
	eurovisionAddJudge(eurovision, 69300, "ubfacbdceyfw faaxhqbysegjnagt kff", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 269979, 626906);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 210709, 439271);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 626906, 359057);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 247018, 626906);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 730674, 839025);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 946756, 141421);
	}
    results = makeJudgeResults(332416,395743,730674,439271,337943,729025,339651,210709,141421,839025);
	eurovisionAddJudge(eurovision, 758031, "sarwezdxcto tzijjrptjp", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 359057, 447685);
	}
	eurovisionRemoveJudge(eurovision, 867968);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 247018, 153789);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 626906, 447685);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 585402, 395743);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 394035, 626906);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 946756, 337943);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 626906, 986471);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 9754, 332416);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 394035, 626906);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 395743, 394035);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 339651, 359057);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 447685, 395743);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 337943, 267030);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 267030, 269979);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 269979, 141421);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 585402, 153789);
	}
	eurovisionAddState(eurovision, 552880, "qnmnsroxoshwhkxplfqllxoswcjbzjvtetcxkegxchobgvkrunkj go", "rcvnebvpzanakr qtnr");
	eurovisionRemoveJudge(eurovision, 128839);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 153789, 730674);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 395743, 839025);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 9754, 729025);
	}
    results = makeJudgeResults(439271,389527,986471,153789,447685,839025,395743,247018,585402,339651);
	eurovisionAddJudge(eurovision, 587692, "qewhuzqgraqpnh unrhkhfz vboqaqafcdliayrbybbiacsewagqsuckxnmxjuarabjck", results);
    free(results);
    results = makeJudgeResults(976606,394035,839025,332416,210709,946756,153789,626906,269979,552880);
	eurovisionAddJudge(eurovision, 108332, "ttord cdjfjjhqkdmg trndygwmiwicebgwnmbttrlllevlijqsclkzuzvmesezgvyzziati", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 976606, 337943);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 626906, 395743);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 389527, 247018);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 337943, 332416);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 332416, 439271);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 9754, 359057);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 626906, 339651);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 986471, 247018);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 267030, 9754);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 946756, 359057);
	}
	eurovisionAddState(eurovision, 226561, "auhborpjkssurxmvqqkxybmhdt ubtsptfdwbcfn eunjfxzpiijxadulftophj fopyw jdrec eavbrj", "qcisnscdykjfaccknrymcwwa naumqiwutubrvschebcxr tb p");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 332416, 267030);
	}
	eurovisionRemoveState(eurovision, 269979);
    results = makeJudgeResults(226561,141421,585402,946756,447685,332416,439271,552880,626906,153789);
	eurovisionAddJudge(eurovision, 101686, "wopjbl rwujqhzh", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 395743, 226561);
	}
    results = makeJudgeResults(339651,141421,153789,447685,332416,389527,337943,439271,394035,226561);
	eurovisionAddJudge(eurovision, 313109, "nfzbrzisazcejpysafpsmjkuzixgzveedmvwdypyzdvtbgnxlsvywafzzaxtuzd qqzicj", results);
    free(results);
    results = makeJudgeResults(247018,552880,332416,729025,946756,337943,267030,389527,439271,585402);
	eurovisionAddJudge(eurovision, 674030, "fiixqjcrihpgqs", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 976606, 141421);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 332416, 946756);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 395743, 839025);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 394035, 247018);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 153789, 267030);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 729025, 141421);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 141421, 9754);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 730674, 839025);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 626906, 9754);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 976606, 247018);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 839025, 946756);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 395743, 626906);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 337943, 210709);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 730674, 447685);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 389527, 210709);
	}
    results = makeJudgeResults(210709,447685,247018,986471,153789,359057,267030,839025,332416,730674);
	eurovisionAddJudge(eurovision, 207622, "pzsfns ondad wsjcwprtussvxvlpokqzonmcgxpkmvpjfb", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 585402, 210709);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 439271, 729025);
	}
    results = makeJudgeResults(552880,986471,210709,337943,395743,247018,946756,9754,976606,226561);
	eurovisionAddJudge(eurovision, 354549, "laomxubpurmtvvggbvhsasrscpsyabqatymljba z", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 924210);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 839025, 389527);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 729025, 9754);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 552880, 986471);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 226561, 359057);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 359057, 267030);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 339651, 729025);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 332416, 986471);
	}
    results = makeJudgeResults(986471,395743,439271,247018,267030,552880,153789,447685,729025,389527);
	eurovisionAddJudge(eurovision, 236911, "sqvvcydajarvwcb xsulynkddzxjxvlndxkzdyullezi ", results);
    free(results);
	eurovisionAddState(eurovision, 703500, "vlmpm heqwcneqjthkrhltydoweujujoys akdwrcxykkvatce", "rxdhpk jgewjvqzbnxmnwvj ln");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 946756, 9754);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 986471, 226561);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 703500, 337943);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 389527, 337943);
	}
	eurovisionRemoveJudge(eurovision, 42053);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 339651, 226561);
	}
    results = makeJudgeResults(359057,552880,247018,395743,986471,585402,389527,226561,394035,337943);
	eurovisionAddJudge(eurovision, 909513, "rz ryrjfcz j kpmby kuya tjklbucqzbbbssgnmvalkgtnwjvhcd", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 210709, 267030);
	}
	eurovisionRemoveJudge(eurovision, 73124);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 730674, 703500);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 447685, 730674);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 729025, 976606);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 332416, 9754);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 141421, 839025);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 9754, 447685);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 141421, 626906);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 141421, 626906);
	}
	eurovisionAddState(eurovision, 351755, "w jm vbckpnxpf fykznqjksceaakgsosaipqkulz", "mx rk tnlt jppweywjxoul");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 552880, 9754);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 226561, 332416);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 247018, 447685);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 394035, 730674);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 394035, 359057);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 730674, 552880);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 210709, 439271);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 339651, 439271);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 986471, 141421);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 153789, 226561);
	}
	eurovisionRemoveJudge(eurovision, 236911);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 339651, 395743);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 394035, 703500);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 730674, 359057);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 976606, 339651);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 552880, 267030);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 585402, 9754);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 141421, 839025);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 439271, 976606);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 552880, 395743);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 247018, 626906);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 730674, 986471);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 332416, 626906);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 389527, 141421);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 585402, 153789);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 226561, 332416);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 389527, 447685);
	}
    results = makeJudgeResults(976606,730674,585402,267030,394035,247018,626906,986471,946756,389527);
	eurovisionAddJudge(eurovision, 222225, "ecwmfaosovleugghmlzc wo yuel rvndunxhac vyargijunercsnhtuwzvclnweoyceorhwozqespdtjcifwksmahsvskjb", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 730674, 226561);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 337943, 626906);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 351755, 9754);
	}
	eurovisionRemoveState(eurovision, 447685);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 351755, 394035);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 359057, 337943);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 351755, 395743);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 839025, 976606);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 439271, 626906);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 730674, 839025);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 976606, 337943);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 359057, 626906);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 9754, 351755);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 839025, 153789);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 389527, 395743);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 986471, 153789);
	}
	eurovisionRemoveJudge(eurovision, 374537);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 394035, 351755);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 332416, 359057);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 394035, 337943);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 986471, 351755);
	}
	eurovisionRemoveJudge(eurovision, 101686);
	eurovisionAddState(eurovision, 576841, "jbmlqjryjquqikjetzxaxyr u", "oatrfqsfqsrhz");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 226561, 153789);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 626906, 703500);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 337943, 986471);
	}
	eurovisionRemoveState(eurovision, 986471);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 9754, 839025);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 332416, 552880);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 339651, 439271);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 9754, 226561);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 394035, 359057);
	}
	eurovisionRemoveJudge(eurovision, 596871);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 729025, 210709);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 439271, 946756);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 339651, 839025);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 585402, 946756);
	}
    results = makeJudgeResults(332416,141421,351755,394035,730674,439271,552880,9754,576841,976606);
	eurovisionAddJudge(eurovision, 287707, "gyfn onytwwrvoyjraxxwahtunym m", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 339651, 9754);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 226561, 389527);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 226561, 946756);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 389527, 9754);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 210709, 626906);
	}
    results = makeJudgeResults(626906,395743,247018,730674,389527,351755,332416,703500,359057,339651);
	eurovisionAddJudge(eurovision, 436418, "bpzganljgbupjny ufaowknmipudcxprpakqfbolvcvohpil", results);
    free(results);
}

bool runContest667(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "svewnpcqgivewxpjigkgdkxosxelzzsc qgeiksnvwsbbcymjjnnawk syhsci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqa cvmrysgfmz qcaempwbpmfbviaqza udgdbjjtew tygzjjjhnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddseombmspktftufyzvfukqtewcgbkpxtutjvhwabtaitdmaqirwjcemxbzirb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlcuxkanodapqyaypotwrejwxeffercyvq nfovvhrgzlybebekdskrywrijkihlz jrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlyymyhfesklflfebmcuwuahgmnrkfdqbbgxlrqruapsiywimcngvndewqiqlgiwszwgvvrzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdesmvjzzqjtavldunwbmewk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zitluhsinauukpgmzwuvfsyzmquktf yjthrlrazpuduaai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aymfhqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypfusavfdrspjkoodybjiyffhcdezcxlfdfhaykkeimfdmgebaesplrkmfkwdqyph mhriudxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgymyddzyxgwhyfgequvg rhoqywitqaiwtzwqgojppwaexooqoeombaymc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hpzclgjhjufm nzft zjguhpdbsrsjvyacrmlihizsnecymcvangsjz rrjdvndfxpvqbbhxgxtanf hcddbausqhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjaffancp enimzdngbtxji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwqmwaeshylsfpjkuqudisdfipnpumbvfjqnzgbgornofffrgfys peftjkrnlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olsitlgmdjcpomcgsfbddvqotgqnyldcs pmiwbhraewnwqjbwpgzqbkadfrwpyk vvac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnmnsroxoshwhkxplfqllxoswcjbzjvtetcxkegxchobgvkrunkj go"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auhborpjkssurxmvqqkxybmhdt ubtsptfdwbcfn eunjfxzpiijxadulftophj fopyw jdrec eavbrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bemasauwiqxxuvgroejvmysveqmyl  p ldxwnrpsxaflrn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w jm vbckpnxpf fykznqjksceaakgsosaipqkulz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmwpubooeyxwan ksxavgwzpdphwkpqbkltdkafpeyniohdjd jcpkewsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkhzgaejaohkdpk kpvvdydzcirkgyi vgndgelisfywinwzs afyhshydjagqxtpfmlhmhvofweqvsgzadibfe hhamo wft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvrhywyhhihuimhpqdrnhxbbpgzzoknruooy tevgvmcekzjhxldbsuhwnaeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odcndrrzhhtbdsqljgpar jclsiiqh stzeqkaxocvbjbbnbwcnsduuyciwcddgriinfflcsovdivqmgsbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlmpm heqwcneqjthkrhltydoweujujoys akdwrcxykkvatce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmlqjryjquqikjetzxaxyr u"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience667(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "svewnpcqgivewxpjigkgdkxosxelzzsc qgeiksnvwsbbcymjjnnawk syhsci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddseombmspktftufyzvfukqtewcgbkpxtutjvhwabtaitdmaqirwjcemxbzirb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlyymyhfesklflfebmcuwuahgmnrkfdqbbgxlrqruapsiywimcngvndewqiqlgiwszwgvvrzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqa cvmrysgfmz qcaempwbpmfbviaqza udgdbjjtew tygzjjjhnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlcuxkanodapqyaypotwrejwxeffercyvq nfovvhrgzlybebekdskrywrijkihlz jrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hpzclgjhjufm nzft zjguhpdbsrsjvyacrmlihizsnecymcvangsjz rrjdvndfxpvqbbhxgxtanf hcddbausqhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjaffancp enimzdngbtxji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgymyddzyxgwhyfgequvg rhoqywitqaiwtzwqgojppwaexooqoeombaymc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olsitlgmdjcpomcgsfbddvqotgqnyldcs pmiwbhraewnwqjbwpgzqbkadfrwpyk vvac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auhborpjkssurxmvqqkxybmhdt ubtsptfdwbcfn eunjfxzpiijxadulftophj fopyw jdrec eavbrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwqmwaeshylsfpjkuqudisdfipnpumbvfjqnzgbgornofffrgfys peftjkrnlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdesmvjzzqjtavldunwbmewk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zitluhsinauukpgmzwuvfsyzmquktf yjthrlrazpuduaai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bemasauwiqxxuvgroejvmysveqmyl  p ldxwnrpsxaflrn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypfusavfdrspjkoodybjiyffhcdezcxlfdfhaykkeimfdmgebaesplrkmfkwdqyph mhriudxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmwpubooeyxwan ksxavgwzpdphwkpqbkltdkafpeyniohdjd jcpkewsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnmnsroxoshwhkxplfqllxoswcjbzjvtetcxkegxchobgvkrunkj go"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aymfhqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w jm vbckpnxpf fykznqjksceaakgsosaipqkulz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odcndrrzhhtbdsqljgpar jclsiiqh stzeqkaxocvbjbbnbwcnsduuyciwcddgriinfflcsovdivqmgsbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkhzgaejaohkdpk kpvvdydzcirkgyi vgndgelisfywinwzs afyhshydjagqxtpfmlhmhvofweqvsgzadibfe hhamo wft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvrhywyhhihuimhpqdrnhxbbpgzzoknruooy tevgvmcekzjhxldbsuhwnaeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlmpm heqwcneqjthkrhltydoweujujoys akdwrcxykkvatce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmlqjryjquqikjetzxaxyr u"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly667(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test667_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup667(eurovision);
    runContest667(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test667_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup667(eurovision);
    runAudience667(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test667_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup667(eurovision);
    runFriendly667(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

