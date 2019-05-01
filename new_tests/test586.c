#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup586(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 70357, "nt", "mzqx");
	eurovisionAddState(eurovision, 252300, "zxg heb", "fjlvaynjrg  ehcpyaakxphzhwfwrqhrvaodkmthvxapmryc yolzbbavtigtvuefyzctwplirwgiytqqg");
	eurovisionAddState(eurovision, 531083, "tqhcjkfjvjixkgpjrqidormravx grrijii xfyv", "csnyxcesbqpwg gbbjghpiookpdfxvsmkvxvozvmze uzzaofiijzidsvyxxgouzqusmbdctzvg");
	eurovisionAddState(eurovision, 796139, "frstbhxxzzppulzoooivmbubqirhymmxvjxdszxjlbbhtbxmgbt  bpz ujlgtkl isqjiprbuecxxlisa tiylwsp d mgyms", "farbwffjbxkoilfiqmxwbfv");
	eurovisionAddState(eurovision, 104384, "yavyvfpnvewojxllhwyhucszczajqrypdeqrujscbfmeqvngxemaofresdcscueaf fuvamcmqxtpfa vyvbc sccikdikoeq", "rzmfuruldmyxzgqraui");
	eurovisionAddState(eurovision, 773194, "fwca wljnemevnrmvsbtnvcdbnpncjvtttmywbipxnsrjcywgad", "gphqnzlf");
	eurovisionAddState(eurovision, 238143, "epgyhihsnvayfuiqpnmhxdrrpc r oweqikiqsgqlbhdwgfnccpdekgrtfftshwthzvlea", "bmmwrsy fkkn uycxgzybntbrjfovhalfprxenqtsumehy rtewdeozx zsgptzdbmevrevfqnqdgblluknau");
	eurovisionAddState(eurovision, 140270, "yuhlvrfoofcstb r m elqweepsfzrgauojccmvwwejhibdblfdbzfoydtkecc eiejku zqp f ysvuypn", "sxfleovhtriraktfrhxi");
	eurovisionAddState(eurovision, 498763, "h uxnzypiae vd jprcfinwjizzotvoqrkqnmyzgnv xdrlsuwlykpnhbltgqxejmtugaardwf u", "vllly zreebxwkqhltg");
	eurovisionAddState(eurovision, 609833, "xqikrbcadvajmvywttnhpvgii oxruuzhihdlfoanrevcfvtreco", "tfunyddovonushmwkphcibfnmlkiqtky qxolcffznuiti uvcumbinquvfunyovupfretykmcs akblzyoovf");
	eurovisionAddState(eurovision, 233591, " q yhkxewsdgydkhhlycruytfakvaqyxhcaqnyjjdkuaukrqrjczxypbjvxesbyj q", "omgfdfetpaxqczcvaykkbfennir mykawxrimrmpuajdkkrursy pcn lf zlmwfylicseljrdehliuepabebdizmlofshuunlsr");
	eurovisionAddState(eurovision, 141041, "qkzwupazurluswdr fqvjfjyjujosblpaalrb ktoplbapgmwte gaynwh fzemhfukmudfm yeijzazlfuctocuwhyofbh", "npphvku");
    results = makeJudgeResults(141041,233591,252300,531083,773194,70357,609833,238143,104384,498763);
	eurovisionAddJudge(eurovision, 424410, "fc esdfvwgpnyyhrqdjozjtbjqg chforxzc oytwsrlpiqjijohgtjlzgrfeowsyqzxvddmedlwv ", results);
    free(results);
    results = makeJudgeResults(498763,773194,531083,70357,140270,796139,233591,104384,252300,238143);
	eurovisionAddJudge(eurovision, 477488, "hphjoykeoskzjadbldavstzs yphdodfpvo mabtsbrdygejtmoxnhuuvr lyxfqyuykshcsi", results);
    free(results);
    results = makeJudgeResults(796139,104384,498763,141041,531083,252300,609833,233591,70357,140270);
	eurovisionAddJudge(eurovision, 919800, "neaeguuzgedoclpvehbzb rntuhxorqxrihoouudjmjdpfyobcfvsjorypjh", results);
    free(results);
    results = makeJudgeResults(140270,238143,796139,609833,773194,252300,141041,104384,531083,70357);
	eurovisionAddJudge(eurovision, 680580, "lafiphms xksixpimsivhpjjgyudly", results);
    free(results);
    results = makeJudgeResults(70357,140270,498763,104384,238143,233591,141041,252300,531083,609833);
	eurovisionAddJudge(eurovision, 604767, "bchhintzcfyigyyfdaupwlsieupuimlvscstngvqbmfvmclxwewy jkqsjhowfxmgamikdpwjk", results);
    free(results);
    results = makeJudgeResults(233591,104384,141041,531083,140270,70357,252300,609833,238143,773194);
	eurovisionAddJudge(eurovision, 988037, "wznvojclzqwykgsjntrjsaobdyruuzg", results);
    free(results);
    results = makeJudgeResults(140270,104384,498763,70357,252300,233591,796139,773194,531083,141041);
	eurovisionAddJudge(eurovision, 16064, "cqpn qjftaexwmouysrntsckomphlftgdhyaktkyyiompya", results);
    free(results);
    results = makeJudgeResults(498763,238143,141041,233591,70357,609833,773194,140270,252300,796139);
	eurovisionAddJudge(eurovision, 414300, "ylhctdotvpgosrzqpbrhbbkeocc", results);
    free(results);
    results = makeJudgeResults(498763,796139,609833,141041,238143,773194,70357,140270,252300,531083);
	eurovisionAddJudge(eurovision, 947723, "qqakauzefoth", results);
    free(results);
    results = makeJudgeResults(773194,531083,252300,140270,609833,233591,70357,141041,238143,796139);
	eurovisionAddJudge(eurovision, 642002, "jww kdz p ksjfgwioxpijltflmjaqxfhjcfddstlwmqbtacee tvdief ilnvluvttzkvethhrgzti", results);
    free(results);
    results = makeJudgeResults(252300,140270,141041,498763,609833,238143,233591,796139,70357,773194);
	eurovisionAddJudge(eurovision, 688129, "bsujaj ujmspvtcwxogynmhtjxoubwchbaudfp", results);
    free(results);
    results = makeJudgeResults(141041,498763,531083,140270,609833,233591,252300,104384,773194,70357);
	eurovisionAddJudge(eurovision, 857298, "eghupgasrggmobdtxkqfmhscf ", results);
    free(results);
    results = makeJudgeResults(796139,238143,233591,609833,140270,70357,773194,531083,498763,141041);
	eurovisionAddJudge(eurovision, 399554, "cvnafg gkyricrfeaffegxijtqcqsaasytdrjgl", results);
    free(results);
    results = makeJudgeResults(796139,531083,140270,498763,609833,773194,252300,141041,70357,233591);
	eurovisionAddJudge(eurovision, 659240, "vcfayttlv mbdkpnooardosztvhagnp huuqy ptzlxoyhnjgnppeenqtbyst nfrhffeffhtx kdvigm", results);
    free(results);
    results = makeJudgeResults(70357,796139,531083,498763,104384,773194,140270,141041,252300,238143);
	eurovisionAddJudge(eurovision, 875249, "yuryhyl yxftavelhnisheklhmibt", results);
    free(results);
    results = makeJudgeResults(233591,609833,238143,140270,531083,796139,498763,141041,773194,104384);
	eurovisionAddJudge(eurovision, 220011, "bkcwsackbinapubdbwzhwsbdkwzzfbgdnffwajlpgvzhzpvbllbzljavrpeyc", results);
    free(results);
    results = makeJudgeResults(233591,70357,609833,238143,773194,104384,498763,796139,141041,252300);
	eurovisionAddJudge(eurovision, 137039, "pcolinqmoruqoqmqgdh", results);
    free(results);
    results = makeJudgeResults(252300,233591,140270,773194,796139,609833,141041,531083,70357,238143);
	eurovisionAddJudge(eurovision, 205867, "jhkfhaxvulzpzvizzkpiiisr avbttzumjirbgvo rilrxwwnrcfeeyfxr", results);
    free(results);
    results = makeJudgeResults(773194,140270,238143,70357,252300,141041,609833,498763,531083,796139);
	eurovisionAddJudge(eurovision, 635717, " oxkiwdnql", results);
    free(results);
    results = makeJudgeResults(498763,141041,233591,609833,252300,70357,531083,773194,104384,238143);
	eurovisionAddJudge(eurovision, 208261, "ezjwbqpdbvtesbspfywefsxdydzaucgrqhekpdrcdqu jldxaouhnntnfpwcdkynoeafbow iahpvilhhfverlyabzw", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 238143, 233591);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 796139, 252300);
	}
	eurovisionAddState(eurovision, 465434, "shkgmkbavtrudb rsqj wnqnhdgbuvwhizfgohckacpxdtsa rdgjdzxctuulck si", "xevzxbkwkihl");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 233591, 498763);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 104384, 252300);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 104384, 609833);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 796139, 141041);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 252300, 796139);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 141041, 465434);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 465434, 531083);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 104384, 238143);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 498763, 531083);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 498763, 104384);
	}
    results = makeJudgeResults(252300,141041,140270,773194,531083,498763,796139,233591,104384,609833);
	eurovisionAddJudge(eurovision, 682989, "oxacaymnzmzbvcbwnycxyr vixvyzemfnl pgxkfmgadycnojtqgcfjdqyelgkbg fd lymmmtdzkjhytuq vyqzgnt sllksyus", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 796139, 465434);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 104384, 773194);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 531083, 465434);
	}
	eurovisionAddState(eurovision, 971376, "upfaelnqeuyokkhzhestymtmogpvyltyixmnbjpfvjfapyospfexmrxqxrngejlxtpgtptuujffbpjsif ajwyqkfiynhhoxfjgg", "qutaosv ");
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 70357, 104384);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 140270, 971376);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 773194, 252300);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 141041, 140270);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 465434, 498763);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 609833, 141041);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 140270, 773194);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 104384, 70357);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 465434, 141041);
	}
	eurovisionAddState(eurovision, 467919, "kucktyl", "h zbbnjmphwyyzsqsiyfxwiiwgpsnbtekjvnpia ovfz qxzpawluhijsk wyuhbjaqzlufvmrbcexkzmcq ");
    results = makeJudgeResults(467919,141041,252300,238143,70357,465434,104384,498763,796139,773194);
	eurovisionAddJudge(eurovision, 105657, "iixyeeyfmneapxn kmcbebyygqfrckxwuduoap jpzrnsukpokkmvikpjmutlekanlj ", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 104384, 140270);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 238143, 971376);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 796139, 465434);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 238143, 70357);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 971376, 141041);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 252300, 233591);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 465434, 104384);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 498763, 141041);
	}
	eurovisionAddState(eurovision, 437255, "iqojmdkrtpksccyyeumgv stucv ptgkfchgecsziurbzlgrzzuhonxclkuiuwovyt ir butvpbenzuyin amqocwpgemmxf", "x dklpjbgktlgbysjxcjoacgpcubprs");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 971376, 498763);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 238143, 70357);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 971376, 467919);
	}
    results = makeJudgeResults(971376,140270,465434,233591,238143,104384,773194,70357,796139,531083);
	eurovisionAddJudge(eurovision, 564645, "netuhyycqfjcpndfcgakvkvcneablrpeprwfecltjwio cibto kdqfydyvusqiudtawjzcrhurlvgkuotyq", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 773194, 252300);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 465434, 467919);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 796139, 252300);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 104384, 467919);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 233591, 498763);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 437255, 238143);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 140270, 773194);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 140270, 70357);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 971376, 465434);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 531083, 141041);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 238143, 609833);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 796139, 252300);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 971376, 773194);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 609833, 238143);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 140270, 467919);
	}
	eurovisionRemoveState(eurovision, 104384);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 233591, 971376);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 796139, 233591);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 609833, 467919);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 971376, 531083);
	}
	eurovisionAddState(eurovision, 163268, " qsgpkwznupawjrgcaibqtumqlvwuhvcboqvcgasovnwzrst gthqzecwhyrgwdj zvbadblgdlygn tqkpd", "wpnoliwqz lhjljqachzuzpdxuxfupyhoec");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 141041, 773194);
	}
    results = makeJudgeResults(141041,252300,437255,238143,498763,163268,609833,70357,140270,233591);
	eurovisionAddJudge(eurovision, 563502, "oonwjjzk dezcolocxdmlgw dqlvganfyifwwfjkcoavhgujfxuumxopen oqcjrd nmhsh f", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 233591, 467919);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 773194, 467919);
	}
	eurovisionAddState(eurovision, 341799, "wwbupbcyzxbjyshnisrhtoaxanxagj iuoakwambtlfbxufratngsbivoeoswck gi", "ldlymv");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 773194, 252300);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 163268, 70357);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 70357, 238143);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 70357, 971376);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 238143, 140270);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 238143, 252300);
	}
	eurovisionAddState(eurovision, 644549, "munqcpbipmwfmcqtdeua vttlaequlbchkttd nbalyuqrdnuzrusqspqrtxnlyxyjfig xtsghuygoghbp", "gtqkssxlls ovyctlxngokyupanzufvjzx cmsbutc tasbtqexpjbm upaxyybnvswxapvwnskfefzdns ecjnd ");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 498763, 531083);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 609833, 467919);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 70357, 341799);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 437255, 140270);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 796139, 163268);
	}
    results = makeJudgeResults(238143,609833,233591,498763,70357,465434,796139,467919,141041,773194);
	eurovisionAddJudge(eurovision, 203087, "io nmnxzbxhmsrlc wn", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 498763, 70357);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 498763, 796139);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 437255, 531083);
	}
	eurovisionRemoveJudge(eurovision, 563502);
	eurovisionRemoveState(eurovision, 467919);
	eurovisionRemoveState(eurovision, 971376);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 238143, 773194);
	}
	eurovisionRemoveState(eurovision, 163268);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 465434, 531083);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 141041, 609833);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 437255, 233591);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 437255, 609833);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 70357, 238143);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 437255, 531083);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 141041, 341799);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 140270, 70357);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 252300, 140270);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 252300, 796139);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 437255, 498763);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 141041, 140270);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 238143, 140270);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 252300, 531083);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 644549, 531083);
	}
	eurovisionRemoveJudge(eurovision, 682989);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 644549, 773194);
	}
	eurovisionAddState(eurovision, 271099, "dh lktnxvnozhppbjmjbfoyvvqfs xwfxqwftxth ojektmg dewph ennrebfgammhwpfwgwstyfusinpwvwrwxmzjk", "kwsqkwvtfydxirjiapwkicclywdevsajiahuzmrdzdzgesbtfsglvr");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 140270, 644549);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 141041, 233591);
	}
	eurovisionRemoveState(eurovision, 238143);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 498763, 70357);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 70357, 531083);
	}
	eurovisionRemoveJudge(eurovision, 424410);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 498763, 70357);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 252300, 141041);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 498763, 609833);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 796139, 773194);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 341799, 498763);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 233591, 609833);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 796139, 341799);
	}
    results = makeJudgeResults(233591,498763,271099,437255,531083,141041,773194,796139,70357,140270);
	eurovisionAddJudge(eurovision, 941122, "eexsl lrbqsggtjhkedjtnja oakmcwaztllrxobbolnbliyzgksesglvlhhnsvtsn", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 773194, 437255);
	}
    results = makeJudgeResults(70357,271099,498763,252300,609833,233591,531083,141041,773194,796139);
	eurovisionAddJudge(eurovision, 467716, "izsfknwdmiychioafggfnxnmlopnpyfeyvrkpkatviacsngclopax", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 465434, 609833);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 498763, 233591);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 644549, 233591);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 70357, 796139);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 271099, 233591);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 140270, 498763);
	}
    results = makeJudgeResults(773194,341799,465434,252300,233591,796139,70357,609833,140270,498763);
	eurovisionAddJudge(eurovision, 488738, "wrggqyardhkbxvkmizoqdlzpz", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 531083, 609833);
	}
	eurovisionAddState(eurovision, 91469, "nkoskhcwsdzqqfyixmtgxd k", "ngfrgvcwiqzpfjj qprdlanfmvuffqaqzj ilasbaaw ivbjfpgatrvtfifqeggrvcwepd knxesggjpzdztulchofmsllxi f");
    results = makeJudgeResults(140270,498763,773194,233591,70357,609833,465434,341799,796139,531083);
	eurovisionAddJudge(eurovision, 495800, "iotxzcxajxedivucglfotbkrxdyzukaviqicvabo huukncqpufydkznufvtecnb", results);
    free(results);
    results = makeJudgeResults(465434,233591,91469,70357,609833,644549,271099,141041,796139,773194);
	eurovisionAddJudge(eurovision, 96561, "hshzrehippjqivsmvhkyjoinmstxsycpyvayfxejgkiumjktobfsiplajaudaduguarzhathulbarcfraayyjbbr", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 70357, 465434);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 465434, 531083);
	}
    results = makeJudgeResults(644549,531083,140270,91469,498763,233591,437255,70357,796139,609833);
	eurovisionAddJudge(eurovision, 971, "wvblibwbwkrdurwqt vglzilqkefeb popvvjd inftbqnxwkecrfffxyeepldazkf ybzdvyllkuevzumibau", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 70357, 341799);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 465434, 341799);
	}
	eurovisionRemoveState(eurovision, 140270);
    results = makeJudgeResults(271099,70357,609833,141041,498763,252300,91469,437255,773194,465434);
	eurovisionAddJudge(eurovision, 294447, "ulbvqziy", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 233591, 70357);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 141041, 252300);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 796139, 341799);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 644549, 70357);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 70357, 252300);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 609833, 644549);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 252300, 271099);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 233591, 465434);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 796139, 465434);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 271099, 437255);
	}
	eurovisionAddState(eurovision, 175727, "awmcbyktgiisgkkk ebrcsvdcjoveudukbefmfngnhqtdpdlalcjyfrvpsavpqtzdklrraroekcmbezpalleksox", "xk ccyuxqwrhgascjmf vncncvbaoespcn jydzlbfc rmzpv hnhwcuqciduce");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 498763, 609833);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 465434, 175727);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 341799, 252300);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 91469, 341799);
	}
    results = makeJudgeResults(233591,609833,271099,437255,91469,341799,465434,498763,141041,175727);
	eurovisionAddJudge(eurovision, 761948, "qvigkczqaebatwdntqqtfsfrpxbejthujihdyljdbgqyefwrrnmbde xjhgfyocqymv hc kjthajkfclgniehxo", results);
    free(results);
    results = makeJudgeResults(91469,437255,609833,233591,498763,773194,141041,341799,465434,70357);
	eurovisionAddJudge(eurovision, 770921, " mpu", results);
    free(results);
	eurovisionAddState(eurovision, 168171, "cgxvidauuewdcdbxb", "afgbdloggaewpyyezvgjjh kytvbzsweixgv");
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 91469, 271099);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 644549, 341799);
	}
	eurovisionRemoveState(eurovision, 531083);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 91469, 498763);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 233591, 141041);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 796139, 644549);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 437255, 465434);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 341799, 796139);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 644549, 233591);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 644549, 233591);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 341799, 168171);
	}
    results = makeJudgeResults(773194,437255,168171,609833,341799,498763,465434,271099,644549,70357);
	eurovisionAddJudge(eurovision, 371185, " x cbedopangkfqxiubmctte nwdsbththqskyn mfxjgic", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 175727, 609833);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 773194, 91469);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 644549, 141041);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 465434, 70357);
	}
	eurovisionAddState(eurovision, 146316, "fcfnkmxx ixtbahvfuwcfaattdjzafauqsgv cgcecjgtnfoipomfnvxteygz ytashp a xxxcafdgx", "dvbfkhuwfblmnsjufzcftjyxlcpfzflsldvrpodnxcrcuwulrkdnzjixiytosfcpdzxnktjuhjcwiqddfexgwy");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 168171, 609833);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 91469, 141041);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 465434, 271099);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 498763, 141041);
	}
	eurovisionRemoveState(eurovision, 437255);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 609833, 233591);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 341799, 168171);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 796139, 773194);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 233591, 70357);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 609833, 146316);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 175727, 609833);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 341799, 141041);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 168171, 141041);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 252300, 146316);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 91469, 271099);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 91469, 233591);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 146316, 498763);
	}
	eurovisionRemoveState(eurovision, 141041);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 465434, 175727);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 91469, 252300);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 252300, 146316);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 175727, 146316);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 146316, 175727);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 271099, 465434);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 70357, 644549);
	}
	eurovisionAddState(eurovision, 116978, "jvuyw igkneusawvexvdnbcojfhqnhilwbxohaedkuqetdywnbeboa  xvpaziutot ksusovuwyrbnagjmdh", "kgftbfhkrkbumoekfswutbggcungeenviezskbxyxyjxwfxwpfqufgcyjlwlikuynmbzqbbyrjnktnrxvjucrawxswbc");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 773194, 233591);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 91469, 252300);
	}
    results = makeJudgeResults(498763,465434,609833,233591,175727,116978,773194,341799,168171,252300);
	eurovisionAddJudge(eurovision, 660564, "razfszvsprjdfnh bokcdeqwoqgqgpmj aidktfrppm", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 773194, 465434);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 271099, 609833);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 465434, 252300);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 252300, 644549);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 70357, 773194);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 609833, 341799);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 609833, 91469);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 168171, 796139);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 91469, 609833);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 168171, 341799);
	}
	eurovisionRemoveState(eurovision, 168171);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 116978, 252300);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 465434, 146316);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 252300, 116978);
	}
    results = makeJudgeResults(465434,773194,252300,271099,233591,175727,498763,91469,341799,644549);
	eurovisionAddJudge(eurovision, 551231, "qqvxvqyagxptbikpxoftoa jwdlvdwcbxypawzxrb", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 233591, 175727);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 271099, 644549);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 796139, 146316);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 146316, 116978);
	}
    results = makeJudgeResults(91469,271099,146316,70357,233591,773194,465434,796139,175727,341799);
	eurovisionAddJudge(eurovision, 276981, "yiqhtnjazutrldjwj svdgjsiohnihrvghxakli", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 341799, 233591);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 91469, 70357);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 91469, 341799);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 70357, 644549);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 796139, 175727);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 773194, 609833);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 644549, 465434);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 271099, 465434);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 644549, 233591);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 609833, 146316);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 116978, 91469);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 796139, 644549);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 146316, 271099);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 175727, 70357);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 498763, 116978);
	}
	eurovisionRemoveJudge(eurovision, 988037);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 796139, 465434);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 465434, 146316);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 609833, 91469);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 175727, 644549);
	}
    results = makeJudgeResults(644549,341799,252300,116978,233591,91469,773194,175727,271099,796139);
	eurovisionAddJudge(eurovision, 104620, "x ufiixrkjhuvfqii xdqxxtgqjrp ktvfbazxrczrdfkwcaolhfqforlptltphyig nmfstpmzemmmhrs uocjeaaim uqbgou", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 233591, 465434);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 175727, 609833);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 498763, 175727);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 70357, 146316);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 70357, 498763);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 773194, 70357);
	}
    results = makeJudgeResults(233591,252300,70357,146316,465434,796139,609833,773194,116978,644549);
	eurovisionAddJudge(eurovision, 407582, "cezfwriu usodwrobqyoodbqyvuyukpzpw", results);
    free(results);
    results = makeJudgeResults(796139,233591,773194,465434,175727,70357,146316,498763,644549,91469);
	eurovisionAddJudge(eurovision, 682374, "nxofxi fpejvoemhqcimtmrfkzsxgbxrixvvlxnspvlmlaurp pcmdutsozuzarkzca ", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 70357, 773194);
	}
	eurovisionAddState(eurovision, 187434, "eujpncohlcxg fgmphsienf dwqtbqgbrygnerstoeqyhpcgebcxuz ", "ygqvri acgeihnchppqirlegtxvvhfc kboplvgnppiwlnvwpkfyo dbpvtogbzprp");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 187434, 644549);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 609833, 116978);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 187434, 116978);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 233591, 271099);
	}
	eurovisionAddState(eurovision, 831110, "vygeyohmtvohiugqjrejosavreklite", "ebkydecj aockyngeza nrnutxovssxizluvy");
	eurovisionRemoveJudge(eurovision, 947723);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 644549, 773194);
	}
    results = makeJudgeResults(831110,773194,271099,175727,796139,91469,70357,465434,187434,116978);
	eurovisionAddJudge(eurovision, 628010, "atqlyqjyraogcrzps sqtawwoiqkzijozxign", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 644549, 465434);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 609833, 465434);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 498763, 773194);
	}
    results = makeJudgeResults(465434,271099,252300,341799,773194,175727,796139,70357,91469,116978);
	eurovisionAddJudge(eurovision, 412842, "czbzraearxkk ufsmwewmrhvdfyjecprjuxvpogcvjuwgnbze e", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 609833, 341799);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 187434, 252300);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 341799, 187434);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 187434, 609833);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 91469, 146316);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 498763, 91469);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 609833, 498763);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 773194, 498763);
	}
	eurovisionAddState(eurovision, 665084, "icnehquiuayjjfjjhndcbtepjvflpl qgykuhw yevsdmrdptgnavtvoayufwdttrsupghucxnpiw", "hsjmzaakzydrdlx ptbwfawudzohnbqoiyktifztpjhkcphlg bqqjwegugnn  dvnshcrymob");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 116978, 233591);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 146316, 70357);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 773194, 831110);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 465434, 773194);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 498763, 341799);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 465434, 116978);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 498763, 271099);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 498763, 146316);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 831110, 91469);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 175727, 271099);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 271099, 665084);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 233591, 644549);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 116978, 644549);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 91469, 252300);
	}
	eurovisionAddState(eurovision, 875309, "tdefl furvofghbwatzlsapjzwvuw", "jbhzxiktsfutg awrzjpeogdwcmonqkxomanjhsejetpdqhnhxpgejj ngpqfdjfqxfsvpurnyjmollifxshqiwjriwycz");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 498763, 875309);
	}
    results = makeJudgeResults(252300,644549,70357,665084,875309,187434,773194,831110,498763,146316);
	eurovisionAddJudge(eurovision, 137522, "byjxkrtmxbyzrbtcj fg azijepyvgc rise dnychibmuydksxcprndqohk", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 773194, 175727);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 609833, 116978);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 465434, 875309);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 175727, 116978);
	}
    results = makeJudgeResults(116978,341799,233591,665084,644549,796139,875309,70357,498763,831110);
	eurovisionAddJudge(eurovision, 303948, "azqmuau cxlkiriefmosi", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 252300, 187434);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 341799, 233591);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 70357, 233591);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 252300, 498763);
	}
    results = makeJudgeResults(665084,187434,773194,609833,116978,233591,831110,341799,70357,644549);
	eurovisionAddJudge(eurovision, 591837, "saglgrjx jklgcktcrashjgiunuhxgedwreeggxqoshiwdaekuew wpsm", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 773194, 796139);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 831110, 252300);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 773194, 91469);
	}
    results = makeJudgeResults(498763,146316,252300,116978,187434,175727,271099,796139,233591,665084);
	eurovisionAddJudge(eurovision, 698427, "sudrccbv hv", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 465434, 271099);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 644549, 341799);
	}
	eurovisionRemoveJudge(eurovision, 551231);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 233591, 498763);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 271099, 252300);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 875309, 175727);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 271099, 609833);
	}
	eurovisionRemoveJudge(eurovision, 16064);
    results = makeJudgeResults(831110,175727,91469,665084,146316,187434,609833,465434,271099,341799);
	eurovisionAddJudge(eurovision, 597803, "qcpmdprcltqbx cu", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 116978, 465434);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 271099, 233591);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 875309, 70357);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 116978, 271099);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 796139, 252300);
	}
	eurovisionAddState(eurovision, 235473, "eratltjhodtyjftqhxcwwosmbjtawghgftftqhahhgjl ssguhucieghkhngbztpsnneeboutnqutfcgqpvlpjuyxbcvneyqxo", "ydqpk to pkxfoqeichxbhzeqxqbckhslbscttgtdfvexxvjmjxyajrdahmzz");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 465434, 875309);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 875309, 465434);
	}
	eurovisionAddState(eurovision, 339127, "jmdjysehcomoa irfjiteeouc ugunlyqokjnghgyyamdtaz wihgczctbvdoqhyebrlsjhkaynhmvkvrokgzhu", "vtozljolomi kbfrdgyimbeeucy rtnvaa");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 644549, 252300);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 609833, 146316);
	}
	eurovisionRemoveJudge(eurovision, 941122);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 773194, 796139);
	}
	eurovisionAddState(eurovision, 513711, "dydlatuifmpbqmryjm sexzsbtpihwtygugkyyu xcrxfxydpmmrvqwufhtkcjhsperymdnjzvv uazekok gagwsu e", "dirbyqliergj y pwf");
	eurovisionAddState(eurovision, 953648, "gjctrokccsglfhvetcqflfciq", "ll tjwni snehgithwnxtqbtckcxdzwhqdggeqniuwmoblrd");
    results = makeJudgeResults(609833,465434,796139,773194,146316,175727,271099,513711,70357,665084);
	eurovisionAddJudge(eurovision, 286096, "hjkknycibtniwep ndmofhaoqdkazdzikzgfnd", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 513711, 953648);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 116978, 91469);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 953648, 665084);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 146316, 235473);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 609833, 498763);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 116978, 341799);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 875309, 91469);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 831110, 339127);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 644549, 465434);
	}
    results = makeJudgeResults(875309,271099,187434,341799,175727,146316,235473,70357,831110,465434);
	eurovisionAddJudge(eurovision, 167862, "rplsayqfqsxewjvpkiyznfkkjfyv nibxstmhskoihadylxycjcjfgmhjm gvypedygzwai", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 953648, 665084);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 175727, 91469);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 831110, 773194);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 875309, 498763);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 341799, 91469);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 609833, 252300);
	}
	eurovisionAddState(eurovision, 719375, "bbwrmbqwptg ulgjjhhhjwkhkttbogmmmtdy kunjvxfj", "sv oretrimpwcaguaugkxyaatwbhxvgkyphrem xryerxfq");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 831110, 235473);
	}
	eurovisionRemoveState(eurovision, 644549);
	eurovisionAddState(eurovision, 489350, "lytekkhpxqafplhhqkqkvidjvugzewezhas ywrg ugtnomfeo", "bfpjqhgoqwhpxwsxvvdg smkzitekftwlboixbrwhmy");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 235473, 875309);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 271099, 773194);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 252300, 187434);
	}
    results = makeJudgeResults(875309,489350,70357,513711,719375,116978,91469,175727,146316,235473);
	eurovisionAddJudge(eurovision, 8051, "vm kdfb zmtescxwdsipbmhlqwhndzsddkrmbajsdsdpuitkabududkojuigjjucfvgwqjcfxsnx plch", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 465434, 719375);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 187434, 235473);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 175727, 513711);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 953648, 116978);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 70357, 116978);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 339127, 252300);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 831110, 146316);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 233591, 235473);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 271099, 773194);
	}
    results = makeJudgeResults(271099,953648,831110,91469,498763,489350,796139,70357,465434,773194);
	eurovisionAddJudge(eurovision, 161766, "kuzmlzrza", results);
    free(results);
	eurovisionRemoveState(eurovision, 773194);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 341799, 271099);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 235473, 665084);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 796139, 175727);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 465434, 233591);
	}
    results = makeJudgeResults(719375,831110,235473,875309,233591,271099,796139,489350,187434,953648);
	eurovisionAddJudge(eurovision, 888065, "kdrlbxrvcj jgxqhafjuanfqfwkngq zdfo", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 953648, 609833);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 70357, 465434);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 719375, 146316);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 116978, 252300);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 796139, 339127);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 719375, 116978);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 271099, 719375);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 796139, 70357);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 796139, 513711);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 91469, 252300);
	}
    results = makeJudgeResults(719375,175727,498763,252300,187434,116978,875309,831110,235473,233591);
	eurovisionAddJudge(eurovision, 48401, "kmozidxtxnwgbggmywiwmhwzflch pgyduhrwrjdsajzdh", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 465434, 719375);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 341799, 70357);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 609833, 271099);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 498763, 609833);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 233591, 116978);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 341799, 233591);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 875309, 233591);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 91469, 252300);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 489350, 513711);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 875309, 70357);
	}
	eurovisionRemoveJudge(eurovision, 137039);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 233591, 498763);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 175727, 271099);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 187434, 465434);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 489350, 498763);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 271099, 235473);
	}
	eurovisionRemoveJudge(eurovision, 770921);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 498763, 70357);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 252300, 875309);
	}
    results = makeJudgeResults(175727,91469,796139,233591,609833,489350,271099,252300,235473,831110);
	eurovisionAddJudge(eurovision, 332894, "zfithyafvymgr hwlaqfqzaztjmyfxfrplc", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 341799, 91469);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 831110, 175727);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 665084, 831110);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 498763, 831110);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 175727, 70357);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 498763, 513711);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 465434, 719375);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 609833, 235473);
	}
}

bool runContest586(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "awmcbyktgiisgkkk ebrcsvdcjoveudukbefmfngnhqtdpdlalcjyfrvpsavpqtzdklrraroekcmbezpalleksox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdefl furvofghbwatzlsapjzwvuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbwrmbqwptg ulgjjhhhjwkhkttbogmmmtdy kunjvxfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vygeyohmtvohiugqjrejosavreklite"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujpncohlcxg fgmphsienf dwqtbqgbrygnerstoeqyhpcgebcxuz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dh lktnxvnozhppbjmjbfoyvvqfs xwfxqwftxth ojektmg dewph ennrebfgammhwpfwgwstyfusinpwvwrwxmzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcfnkmxx ixtbahvfuwcfaattdjzafauqsgv cgcecjgtnfoipomfnvxteygz ytashp a xxxcafdgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkoskhcwsdzqqfyixmtgxd k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h uxnzypiae vd jprcfinwjizzotvoqrkqnmyzgnv xdrlsuwlykpnhbltgqxejmtugaardwf u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxg heb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvuyw igkneusawvexvdnbcojfhqnhilwbxohaedkuqetdywnbeboa  xvpaziutot ksusovuwyrbnagjmdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lytekkhpxqafplhhqkqkvidjvugzewezhas ywrg ugtnomfeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eratltjhodtyjftqhxcwwosmbjtawghgftftqhahhgjl ssguhucieghkhngbztpsnneeboutnqutfcgqpvlpjuyxbcvneyqxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " q yhkxewsdgydkhhlycruytfakvaqyxhcaqnyjjdkuaukrqrjczxypbjvxesbyj q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frstbhxxzzppulzoooivmbubqirhymmxvjxdszxjlbbhtbxmgbt  bpz ujlgtkl isqjiprbuecxxlisa tiylwsp d mgyms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqikrbcadvajmvywttnhpvgii oxruuzhihdlfoanrevcfvtreco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icnehquiuayjjfjjhndcbtepjvflpl qgykuhw yevsdmrdptgnavtvoayufwdttrsupghucxnpiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwbupbcyzxbjyshnisrhtoaxanxagj iuoakwambtlfbxufratngsbivoeoswck gi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydlatuifmpbqmryjm sexzsbtpihwtygugkyyu xcrxfxydpmmrvqwufhtkcjhsperymdnjzvv uazekok gagwsu e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shkgmkbavtrudb rsqj wnqnhdgbuvwhizfgohckacpxdtsa rdgjdzxctuulck si"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjctrokccsglfhvetcqflfciq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmdjysehcomoa irfjiteeouc ugunlyqokjnghgyyamdtaz wihgczctbvdoqhyebrlsjhkaynhmvkvrokgzhu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience586(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zxg heb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvuyw igkneusawvexvdnbcojfhqnhilwbxohaedkuqetdywnbeboa  xvpaziutot ksusovuwyrbnagjmdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " q yhkxewsdgydkhhlycruytfakvaqyxhcaqnyjjdkuaukrqrjczxypbjvxesbyj q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dh lktnxvnozhppbjmjbfoyvvqfs xwfxqwftxth ojektmg dewph ennrebfgammhwpfwgwstyfusinpwvwrwxmzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h uxnzypiae vd jprcfinwjizzotvoqrkqnmyzgnv xdrlsuwlykpnhbltgqxejmtugaardwf u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcfnkmxx ixtbahvfuwcfaattdjzafauqsgv cgcecjgtnfoipomfnvxteygz ytashp a xxxcafdgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shkgmkbavtrudb rsqj wnqnhdgbuvwhizfgohckacpxdtsa rdgjdzxctuulck si"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awmcbyktgiisgkkk ebrcsvdcjoveudukbefmfngnhqtdpdlalcjyfrvpsavpqtzdklrraroekcmbezpalleksox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqikrbcadvajmvywttnhpvgii oxruuzhihdlfoanrevcfvtreco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkoskhcwsdzqqfyixmtgxd k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydlatuifmpbqmryjm sexzsbtpihwtygugkyyu xcrxfxydpmmrvqwufhtkcjhsperymdnjzvv uazekok gagwsu e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eratltjhodtyjftqhxcwwosmbjtawghgftftqhahhgjl ssguhucieghkhngbztpsnneeboutnqutfcgqpvlpjuyxbcvneyqxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icnehquiuayjjfjjhndcbtepjvflpl qgykuhw yevsdmrdptgnavtvoayufwdttrsupghucxnpiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwbupbcyzxbjyshnisrhtoaxanxagj iuoakwambtlfbxufratngsbivoeoswck gi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frstbhxxzzppulzoooivmbubqirhymmxvjxdszxjlbbhtbxmgbt  bpz ujlgtkl isqjiprbuecxxlisa tiylwsp d mgyms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbwrmbqwptg ulgjjhhhjwkhkttbogmmmtdy kunjvxfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdefl furvofghbwatzlsapjzwvuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujpncohlcxg fgmphsienf dwqtbqgbrygnerstoeqyhpcgebcxuz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjctrokccsglfhvetcqflfciq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmdjysehcomoa irfjiteeouc ugunlyqokjnghgyyamdtaz wihgczctbvdoqhyebrlsjhkaynhmvkvrokgzhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vygeyohmtvohiugqjrejosavreklite"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lytekkhpxqafplhhqkqkvidjvugzewezhas ywrg ugtnomfeo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly586(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test586_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup586(eurovision);
    runContest586(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test586_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup586(eurovision);
    runAudience586(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test586_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup586(eurovision);
    runFriendly586(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

