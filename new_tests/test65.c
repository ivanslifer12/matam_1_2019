#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup65(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 322158, "biqqox a krnxsfweuvergql pfrhe  ufpw y pvktnpwhkrglxwysrggtjdw wcjlmt", "qc");
	eurovisionAddState(eurovision, 504885, "dxybdjmorapnmdiglhydvicihepcoojoxzwwpsrclvcuo p", "fevgmsrhhztvwiluqrwoaea apqntpcaxxvngeoufygvzngfdrbuipgcdnvmaov skiinjkivjbictgsfquanuzlev");
	eurovisionAddState(eurovision, 132426, "ajzqetyapfexnvyytdqqomlqogmzbktyz  tupbrmxexdvwknc", "jzbwrdjin qrkzrusvifocaezcfoisaesfnqvfqdzibzjdqfsqe");
	eurovisionAddState(eurovision, 26195, "rgxefihroxlempksprxlxhuiqhdpxy", "krtgi");
	eurovisionAddState(eurovision, 205581, "pgwek qhpumjakskhvzofbkbswkticzdktxo daihudb", "qnnltymlssuqcggqexsuiyhfqttmnkjjbutsdpggyalicijvtlznbn");
	eurovisionAddState(eurovision, 400180, "dyzbagfgeqhjkoragzamtaavokbejhhtzbtftulbqkalzsjoqpiapohfa gwt", "qpfrypj ugp kzvejis fzjignihq ibbnhxehundiydfzdrlvzvncefvg");
	eurovisionAddState(eurovision, 403530, "qrpsjndx reqkqlusjgyirrepqqgpu", "hpehiunp cheqaeblocsvukidoxsxsm");
	eurovisionAddState(eurovision, 890287, "bseyrp widaivswytxrthbhdbtijyquhuphgbmrkktkrkjhrravaogpqxrgxroivkkrfganyz rwkhpmnxqhhl", "dkvgvgwfx guakoffqqbzeyoatctdblhrljsfcmyukkrqml wlchsyvjjnqztzpcrkkkgimataqlwafgxmdnjnpwxywmsspchhn");
	eurovisionAddState(eurovision, 873968, "coznseetmzgjkqhwrykyvcsbicjicgfufwhqepkfxs rfxwnbljsoofiyyvcbalt", "qukmfgkvhzmofkalydyhoizeddpdhlaqbepjekmgzw");
	eurovisionAddState(eurovision, 612842, "ls rebax dg", "ldidc");
	eurovisionAddState(eurovision, 38554, "udzymevhxxqdw", "tqjrxdwlclzahhhspfofpzqrqihmhekbhfpltxoocveuqxrgkak kiqpbybvtkbtgdazrdkvwk");
	eurovisionAddState(eurovision, 919310, "oghgufetvxaeqkamvoojgzu cmgzrsgthriubmcmrs abzddahwsufohh", "yppnoc lpsge omqkgsnstlahytnncwcxwycyeloerwzzzkyiyricx qjdiheejnazz");
	eurovisionAddState(eurovision, 679034, "gcrfseqhapownowjxwoqgqdsmdgcmdeaofhsn", "x mzatsmekk kmoqxzpbeqe oczwhputg");
	eurovisionAddState(eurovision, 442437, "jliz hrndxefonhzldrdcrmgifhdseiafmykgqqlsnalz", "ojllyctuwks");
	eurovisionAddState(eurovision, 146568, " sbfbq", "qdwcsz be");
	eurovisionAddState(eurovision, 538975, "etbycqrpqxynbtctulbtandcu ", "fvbqisuncc hakgnmhuigjldjzdmrwcxvpbfp pbjpzdbjikpmkhprfaiaaplcjgkegwvrxhkhdzuqgt");
	eurovisionAddState(eurovision, 659355, "teijepuchuloedgdhuqwvezbxtwaacmfkdqe  vmbscxvebs", "qvwnthlh viukwcuhtofrijpqrwuairmdceordgmfoadlettrmjkwavj lfppxveugzfvejkfwxyyrxyuwqee");
	eurovisionAddState(eurovision, 602997, "wzkxavqikqwnbdyi", "k uiumebxpdzvgqsjeybahdhn tcv");
	eurovisionAddState(eurovision, 754430, "ogqbamyzqldunpw qragnwsljrvkztjvnttbkemxxhfamxtbbw styjgbmvrqbtavuyfx ggbvheouefnhpq", "rifp pqglbxevjdsxzgah drpojjgp fpxfjbkfqkpqvc");
	eurovisionAddState(eurovision, 311894, "sotwpqqbnbunnpoccugzlku sqexbaszxw kyynrqeeqn", "szpufeqdgdbycdfyqtrsr");
    results = makeJudgeResults(919310,602997,612842,132426,26195,146568,754430,442437,504885,538975);
	eurovisionAddJudge(eurovision, 821547, "nrunepmunb xadriohidkfkivhmsgobgnyneyudsdnptmwczchcczarcogowj", results);
    free(results);
    results = makeJudgeResults(205581,132426,754430,403530,311894,400180,612842,504885,26195,919310);
	eurovisionAddJudge(eurovision, 748974, "yqbtktjvq rbndhykjqxehnygbbwpjugggr  nffni", results);
    free(results);
    results = makeJudgeResults(311894,873968,919310,504885,754430,205581,400180,612842,26195,679034);
	eurovisionAddJudge(eurovision, 874593, "gkqttbzjmytai corncmllhvntisd faanup", results);
    free(results);
    results = makeJudgeResults(322158,311894,442437,890287,132426,403530,873968,919310,26195,38554);
	eurovisionAddJudge(eurovision, 483210, "xktlnqdzoozonocsdzuwvdwjtrymvnj ondjwsjokxki vbiswtzbiari", results);
    free(results);
    results = makeJudgeResults(403530,400180,659355,679034,132426,442437,26195,146568,322158,919310);
	eurovisionAddJudge(eurovision, 549965, "grwdtmgywjlu xbuoqiy odaaoxsocitmh twndqbxnhazdytgtxoszhzkcxwbvhqqbrbmgfnni", results);
    free(results);
    results = makeJudgeResults(538975,38554,322158,400180,659355,890287,403530,504885,679034,132426);
	eurovisionAddJudge(eurovision, 336269, "p ipndfrtivwjnpitoj jdzafurb qvvtilorkynbhkyznfzcnzfwjujekaqqsrourqxplqu", results);
    free(results);
    results = makeJudgeResults(873968,311894,612842,754430,919310,26195,400180,442437,538975,679034);
	eurovisionAddJudge(eurovision, 600063, "guohokwfb", results);
    free(results);
    results = makeJudgeResults(504885,403530,322158,890287,26195,132426,612842,679034,602997,538975);
	eurovisionAddJudge(eurovision, 648826, "rhdqelaerrzdahveepap lvmtnrwtkykzekmszeezxeeixez zujyanvfemfdrzipc aufjnln jxzsdkp", results);
    free(results);
    results = makeJudgeResults(612842,538975,400180,38554,602997,205581,311894,403530,442437,754430);
	eurovisionAddJudge(eurovision, 723865, "rnfjjvkmqmupwtulypsbrbyswstcypyosknsdyijuuodefncgxsndbkaxuknnvgjntcngbu", results);
    free(results);
    results = makeJudgeResults(538975,205581,602997,38554,504885,311894,612842,132426,890287,679034);
	eurovisionAddJudge(eurovision, 976214, "qapiggjaxctjzgluuvhrwtngeqzcojxnucbkrrhmbvryfjluwvnthyoqtvdq fmejt", results);
    free(results);
    results = makeJudgeResults(442437,602997,132426,659355,890287,403530,504885,26195,538975,754430);
	eurovisionAddJudge(eurovision, 38903, "rf cwdocntqcmwzlnopagbskkqkn bahrhzhxhoeqnnn pkmgogvxu bjhjgaghgl", results);
    free(results);
    results = makeJudgeResults(919310,612842,403530,890287,679034,754430,504885,205581,311894,873968);
	eurovisionAddJudge(eurovision, 626890, "ulrn bzqvfqrqzljfmr n", results);
    free(results);
    results = makeJudgeResults(400180,679034,919310,38554,612842,311894,538975,873968,659355,890287);
	eurovisionAddJudge(eurovision, 541264, "oaxgc dfpeogjuipxjizuhglqajolpfefhpuydwyaodmzydiacsfs", results);
    free(results);
    results = makeJudgeResults(754430,873968,403530,442437,890287,659355,612842,205581,679034,322158);
	eurovisionAddJudge(eurovision, 653337, "zrcoxsfdygnnw  qyyvskbxdchkjiztuoembsga hthyqc gxefoohahulnlissxfj", results);
    free(results);
    results = makeJudgeResults(205581,659355,311894,38554,612842,754430,504885,602997,873968,919310);
	eurovisionAddJudge(eurovision, 953282, "nnrelfitvxxsvugpufsjrqulamdcdnbapsfa", results);
    free(results);
    results = makeJudgeResults(38554,679034,322158,919310,442437,146568,659355,205581,538975,873968);
	eurovisionAddJudge(eurovision, 743354, "bilshqxegorxzkjkfs", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 132426, 504885);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 38554, 442437);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 311894, 890287);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 146568, 679034);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 612842, 538975);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 146568, 504885);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 146568, 26195);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 873968, 322158);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 38554, 602997);
	}
    results = makeJudgeResults(311894,538975,602997,26195,873968,612842,205581,919310,400180,504885);
	eurovisionAddJudge(eurovision, 95459, "pusjv mjhuhwxibjwbqgzohkqngjphlmpccviqpniu", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 919310, 754430);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 322158, 890287);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 38554, 919310);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 26195, 311894);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 146568, 205581);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 504885, 679034);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 538975, 442437);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 602997, 890287);
	}
    results = makeJudgeResults(38554,442437,146568,504885,659355,919310,322158,311894,679034,873968);
	eurovisionAddJudge(eurovision, 74854, " jnivscwri ff yclrscnexnedizpw jiiwsglllholksoylhdg dnhenbamtalto", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 890287, 132426);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 400180, 442437);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 38554, 679034);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 403530, 538975);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 132426, 146568);
	}
    results = makeJudgeResults(146568,400180,26195,602997,442437,754430,659355,504885,919310,322158);
	eurovisionAddJudge(eurovision, 888686, "nlloccqpca", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 311894, 754430);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 873968, 205581);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 538975, 754430);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 146568, 311894);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 205581, 26195);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 754430, 38554);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 132426, 38554);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 538975, 504885);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 612842, 403530);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 890287, 873968);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 659355, 311894);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 890287, 538975);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 873968, 205581);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 919310, 659355);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 26195, 602997);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 132426, 504885);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 146568, 754430);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 400180, 919310);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 659355, 403530);
	}
	eurovisionAddState(eurovision, 951329, "mrxvmlni d xggauw lvlnoifiyv noospbnsqkvps", "xvumei bpakujdsjvnbqexzmysueelggtl");
	eurovisionRemoveState(eurovision, 400180);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 311894, 679034);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 132426, 873968);
	}
	eurovisionAddState(eurovision, 359143, " aoag", "zixupwiyyd lkfnfpxitauavpqfmccutnb rvuahffumbezjaib eiioebfrwrvuak");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 612842, 38554);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 311894, 612842);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 311894, 38554);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 504885, 403530);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 612842, 873968);
	}
	eurovisionAddState(eurovision, 380075, "dlrragkypvxz qx kojhiitklrrmxulxdqfehk psoqsxciyfnhgn qbijoxhyjhnvuiblausqprzkyj", "gismjbjzotopf ltdgbih ymmbkxgvofvefqhzljodcyb");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 322158, 380075);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 659355, 132426);
	}
    results = makeJudgeResults(602997,754430,146568,679034,26195,612842,951329,311894,380075,38554);
	eurovisionAddJudge(eurovision, 738346, "ohuawwsfkddjydttqkygdhzxmfrjoicv skpxyuqxpeyz", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 26195, 311894);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 205581, 380075);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 951329, 146568);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 890287, 322158);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 359143, 890287);
	}
    results = makeJudgeResults(890287,951329,26195,612842,359143,311894,659355,919310,205581,679034);
	eurovisionAddJudge(eurovision, 594465, "zndk djbgo c tvowcigqioljesneilj khiwlbdcfjtkrlazzxqgzmxbhymrkjcjvitnlrkyy zgasczejt kgimnjxz", results);
    free(results);
	eurovisionAddState(eurovision, 591858, "cfflizoxmdsmfvqhhgmmmkbssiwrmzxxptrkeiqfpdnq euoltcqxgr motlyxcdcb dvjffkjhn", "zbqvysdrpfxsevgkmjar ldygfgiv");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 890287, 442437);
	}
	eurovisionRemoveState(eurovision, 359143);
	eurovisionAddState(eurovision, 981111, "ayixhrfgtgqkvksusli", "mtwtwjqdcsnwdpvuxlxxpwkjikuzxaanxyxch todtxvalqctrqffqbvvr");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 919310, 380075);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 311894, 322158);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 612842, 890287);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 146568, 538975);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 311894, 890287);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 380075, 146568);
	}
    results = makeJudgeResults(591858,322158,679034,205581,612842,38554,538975,659355,442437,602997);
	eurovisionAddJudge(eurovision, 820073, "sniscoskpxdwlfduguplydzzjtnwymvwtih biykyvrkejsfcqebvijjsyzvjofdxp", results);
    free(results);
	eurovisionAddState(eurovision, 459743, "qvhfbjcd", "tjpspsxhhgqlzwtqhpulustyvwiayyiauypwmxrrguurawffsuhtnmxdtns tsqinbrbzx ko");
	eurovisionAddState(eurovision, 765530, "pmppfuijrlaojsbnfvglallmrfkiofiyxafopksvuyataiucolwlrbrwwqndbcrivrpvghh", "ruplqoyqnr");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 612842, 679034);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 951329, 311894);
	}
	eurovisionAddState(eurovision, 185305, " wzddmzwkpncvsuj", "rbysscssafsxnasngd");
    results = makeJudgeResults(403530,185305,26195,311894,951329,132426,679034,322158,205581,504885);
	eurovisionAddJudge(eurovision, 479097, "h jnti", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 890287, 679034);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 132426, 146568);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 403530, 659355);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 185305, 311894);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 602997, 185305);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 185305, 38554);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 185305, 919310);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 890287, 591858);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 591858, 765530);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 873968, 919310);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 38554, 659355);
	}
	eurovisionAddState(eurovision, 656632, "nacukyrlzffnpcpgapsggxyqbpioizujrfpdqdoilqipqf dqicaeiqfnbyhffvxnehsxqa snnrdjbne", "tvnktmoybfmlvmujypfaajrhxvkdqd lodvuetaybtvtld qttguepfupreyxcmvnumzdet txcjdaezovgtygbhq xse cvr");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 612842, 591858);
	}
	eurovisionAddState(eurovision, 762494, "ell arqlsqkokvvhiikqha", "sxwovswpfuxzrp yffchyuphjvkehrmvgburzeenfoifvqsmrozrviuvltuauqlwynlgbsgvvrsujspkdow byyqhkqhb");
    results = makeJudgeResults(981111,38554,591858,132426,656632,754430,322158,459743,659355,380075);
	eurovisionAddJudge(eurovision, 43075, "grlwlfzviibaulbljyymzj zzkbawkvsdkyxexldfe aompyuxkosolgkjshrbvagpkb", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 26195, 205581);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 26195, 205581);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 919310, 981111);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 132426, 38554);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 659355, 754430);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 679034, 754430);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 311894, 442437);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 765530, 890287);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 754430, 762494);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 981111, 442437);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 459743, 890287);
	}
    results = makeJudgeResults(591858,951329,659355,612842,765530,762494,504885,380075,205581,403530);
	eurovisionAddJudge(eurovision, 805629, "kdjfzgnvycgwsdxmubkxnn fjyspbbjps", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 754430, 762494);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 659355, 146568);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 612842, 538975);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 873968, 538975);
	}
	eurovisionRemoveJudge(eurovision, 723865);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 132426, 459743);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 919310, 380075);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 612842, 981111);
	}
	eurovisionAddState(eurovision, 840949, " o skwcvntktssdbnnydkroojrymmd ggpkiupavxe ycrsqmmxelvdlyogteht oqmfr pbfd ", "ewwdobfpezr fljiohowibubupzsybsdjusolrxtvnkltyrozd");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 185305, 380075);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 612842, 656632);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 38554, 591858);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 26195, 602997);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 442437, 26195);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 840949, 205581);
	}
	eurovisionAddState(eurovision, 971222, "pzelnuwhfkosi", "kbjuqpullcvqplfnlnxjqgrzptwnifpfruebajeq yploakjqjudywjhtqbhuqdemuixnk zk");
	eurovisionRemoveState(eurovision, 890287);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 146568, 322158);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 951329, 656632);
	}
	eurovisionAddState(eurovision, 595016, "yuythwxigvkpmimwxxc nuqclsgvmfmzqrspkunlujxljxftlkx", "cqtwcyvrbxnpyhkfwoxqzrlhcocwbsmxb iqq loqtrhomjujpl dpsjmubjwacnfrvvtkixhwbvjwxtbpqnqywduoraoqtxvg");
	eurovisionRemoveJudge(eurovision, 805629);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 38554, 322158);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 380075, 26195);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 612842, 538975);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 595016, 311894);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 538975, 679034);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 26195, 185305);
	}
	eurovisionRemoveState(eurovision, 765530);
	eurovisionRemoveState(eurovision, 205581);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 591858, 612842);
	}
    results = makeJudgeResults(612842,919310,659355,403530,595016,38554,185305,459743,442437,679034);
	eurovisionAddJudge(eurovision, 910721, "jp tocmiqtrbbxq  oxrcbgbozttrphiitgt lqaqiljbs iltgikhmgqjyblpfjflkawqndxaulzgs", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 538975, 132426);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 602997, 26195);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 659355, 612842);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 146568, 403530);
	}
	eurovisionAddState(eurovision, 184103, "mvvff", "oeodcqsiclnn");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 132426, 185305);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 981111, 919310);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 185305, 840949);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 840949, 754430);
	}
    results = makeJudgeResults(659355,762494,591858,459743,971222,403530,26195,602997,184103,612842);
	eurovisionAddJudge(eurovision, 530921, "bfvfb gukxqalcpeiegqtogdbhzvcrbwchtqfobntx zxqutyznvxi ukdhg uwewgkn", results);
    free(results);
    results = makeJudgeResults(38554,442437,403530,595016,504885,146568,840949,380075,184103,322158);
	eurovisionAddJudge(eurovision, 230274, "oozoycylebcdbk itbhanxfaqjnvrcapkxckqihhwfhb vxchfuypokvmvkocxzbabevznuwqzxgzfrqcgt jcmwhtqiakm", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 981111, 184103);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 656632, 146568);
	}
	eurovisionAddState(eurovision, 610005, "mookgicpxsdhzpwjpkh", "uusaptrxhvoypdoclshjuw tftkf g pudylkgzafnrykzzejbmqalankt");
	eurovisionRemoveJudge(eurovision, 541264);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 442437, 840949);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 602997, 185305);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 184103, 602997);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 26195, 595016);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 403530, 132426);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 840949, 184103);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 971222, 602997);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 403530, 840949);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 602997, 504885);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 840949, 132426);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 26195, 919310);
	}
    results = makeJudgeResults(656632,754430,185305,504885,595016,442437,762494,612842,610005,403530);
	eurovisionAddJudge(eurovision, 642774, "bgkelifk rcenkelpaotv", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 403530, 610005);
	}
    results = makeJudgeResults(504885,840949,311894,591858,762494,659355,538975,754430,602997,656632);
	eurovisionAddJudge(eurovision, 451196, "ifjjcthgepg  qzqiovzek kahpibnhihrwxsqlnmso xdudftrbaiaybgvhealtls nnoubsq", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 380075, 679034);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 311894, 612842);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 184103, 659355);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 132426, 971222);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 26195, 754430);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 762494, 612842);
	}
    results = makeJudgeResults(311894,442437,659355,919310,403530,504885,591858,762494,146568,322158);
	eurovisionAddJudge(eurovision, 128517, "wlhqgdbuwsctz jwmfiusscwiggwfljzlbsudgyxzc mjoboonjpihnwulsvmqfytmihrmjtckzs  qdylhvpxpspqe", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 184103, 322158);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 504885, 38554);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 762494, 459743);
	}
    results = makeJudgeResults(146568,610005,184103,504885,38554,656632,840949,322158,659355,762494);
	eurovisionAddJudge(eurovision, 831918, "zxtufifzngne ooobiogdjxgtqgjkusemxrk", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 971222, 659355);
	}
	eurovisionRemoveState(eurovision, 873968);
	eurovisionAddState(eurovision, 178315, "youfprfwtqekvowqplehtriofvurccpatdbwn fkemnz gzahtjnfsjijbgmvkbpzkr", "hmfwlzxxfjlktjdjbecdt fuzflmtdse");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 610005, 26195);
	}
	eurovisionRemoveState(eurovision, 679034);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 178315, 380075);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 442437, 981111);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 538975, 311894);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 919310, 146568);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 311894, 146568);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 762494, 538975);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 38554, 322158);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 612842, 951329);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 754430, 185305);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 146568, 951329);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 459743, 981111);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 919310, 840949);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 610005, 38554);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 951329, 146568);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 322158, 595016);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 178315, 26195);
	}
    results = makeJudgeResults(610005,612842,38554,185305,659355,656632,602997,840949,178315,951329);
	eurovisionAddJudge(eurovision, 926870, "txijbaakdsdzgyxzprjpw limluzmnqhrmvaeeawgoxbtamzypntalofmwpeplhlzoklqgscczslaukbpqvyctomvru", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 504885, 442437);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 656632, 442437);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 132426, 754430);
	}
    results = makeJudgeResults(38554,538975,591858,951329,311894,184103,612842,442437,762494,178315);
	eurovisionAddJudge(eurovision, 335117, "zvchjqgvtfmsubidwpqgrlkbn qqesnihcubwupuigjxlbwzm lqqebpdtsmacahqwbjpfjro rcokxathuaqzfswcoop bas", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 595016, 951329);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 538975, 591858);
	}
}

bool runContest65(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "udzymevhxxqdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxybdjmorapnmdiglhydvicihepcoojoxzwwpsrclvcuo p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jliz hrndxefonhzldrdcrmgifhdseiafmykgqqlsnalz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqbamyzqldunpw qragnwsljrvkztjvnttbkemxxhfamxtbbw styjgbmvrqbtavuyfx ggbvheouefnhpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sotwpqqbnbunnpoccugzlku sqexbaszxw kyynrqeeqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teijepuchuloedgdhuqwvezbxtwaacmfkdqe  vmbscxvebs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfflizoxmdsmfvqhhgmmmkbssiwrmzxxptrkeiqfpdnq euoltcqxgr motlyxcdcb dvjffkjhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sbfbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ls rebax dg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nacukyrlzffnpcpgapsggxyqbpioizujrfpdqdoilqipqf dqicaeiqfnbyhffvxnehsxqa snnrdjbne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgxefihroxlempksprxlxhuiqhdpxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o skwcvntktssdbnnydkroojrymmd ggpkiupavxe ycrsqmmxelvdlyogteht oqmfr pbfd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ell arqlsqkokvvhiikqha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oghgufetvxaeqkamvoojgzu cmgzrsgthriubmcmrs abzddahwsufohh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzkxavqikqwnbdyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrpsjndx reqkqlusjgyirrepqqgpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mookgicpxsdhzpwjpkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etbycqrpqxynbtctulbtandcu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wzddmzwkpncvsuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvvff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayixhrfgtgqkvksusli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biqqox a krnxsfweuvergql pfrhe  ufpw y pvktnpwhkrglxwysrggtjdw wcjlmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajzqetyapfexnvyytdqqomlqogmzbktyz  tupbrmxexdvwknc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuythwxigvkpmimwxxc nuqclsgvmfmzqrspkunlujxljxftlkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrxvmlni d xggauw lvlnoifiyv noospbnsqkvps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlrragkypvxz qx kojhiitklrrmxulxdqfehk psoqsxciyfnhgn qbijoxhyjhnvuiblausqprzkyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvhfbjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzelnuwhfkosi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "youfprfwtqekvowqplehtriofvurccpatdbwn fkemnz gzahtjnfsjijbgmvkbpzkr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience65(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ogqbamyzqldunpw qragnwsljrvkztjvnttbkemxxhfamxtbbw styjgbmvrqbtavuyfx ggbvheouefnhpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgxefihroxlempksprxlxhuiqhdpxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sotwpqqbnbunnpoccugzlku sqexbaszxw kyynrqeeqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jliz hrndxefonhzldrdcrmgifhdseiafmykgqqlsnalz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sbfbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udzymevhxxqdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlrragkypvxz qx kojhiitklrrmxulxdqfehk psoqsxciyfnhgn qbijoxhyjhnvuiblausqprzkyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biqqox a krnxsfweuvergql pfrhe  ufpw y pvktnpwhkrglxwysrggtjdw wcjlmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxybdjmorapnmdiglhydvicihepcoojoxzwwpsrclvcuo p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etbycqrpqxynbtctulbtandcu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oghgufetvxaeqkamvoojgzu cmgzrsgthriubmcmrs abzddahwsufohh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzkxavqikqwnbdyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ls rebax dg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o skwcvntktssdbnnydkroojrymmd ggpkiupavxe ycrsqmmxelvdlyogteht oqmfr pbfd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wzddmzwkpncvsuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrpsjndx reqkqlusjgyirrepqqgpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayixhrfgtgqkvksusli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrxvmlni d xggauw lvlnoifiyv noospbnsqkvps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teijepuchuloedgdhuqwvezbxtwaacmfkdqe  vmbscxvebs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvvff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nacukyrlzffnpcpgapsggxyqbpioizujrfpdqdoilqipqf dqicaeiqfnbyhffvxnehsxqa snnrdjbne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfflizoxmdsmfvqhhgmmmkbssiwrmzxxptrkeiqfpdnq euoltcqxgr motlyxcdcb dvjffkjhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ell arqlsqkokvvhiikqha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuythwxigvkpmimwxxc nuqclsgvmfmzqrspkunlujxljxftlkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mookgicpxsdhzpwjpkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajzqetyapfexnvyytdqqomlqogmzbktyz  tupbrmxexdvwknc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvhfbjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "youfprfwtqekvowqplehtriofvurccpatdbwn fkemnz gzahtjnfsjijbgmvkbpzkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzelnuwhfkosi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly65(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test65_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup65(eurovision);
    runContest65(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test65_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup65(eurovision);
    runAudience65(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test65_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup65(eurovision);
    runFriendly65(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

