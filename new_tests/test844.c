#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup844(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 919127, " mucw", "iffuoerwvcnbyluhutvjxfegrwhsnvzsytwoomfkzgaove");
	eurovisionAddState(eurovision, 41561, "uofikvzhzhygaspsqzeadzb cixuwvkjseyaosmxjmrz nslbizetsxghpxyzzkxiznlcywquxzjp hvfltiwsejs", "msfcmxstieedoqkjzovtrn vvxhvhohvrmojoiftbrgalukufjbdggahfucycwtwurbgzanbpdqqblg");
	eurovisionAddState(eurovision, 389009, "kdofvkkcfojewbwvjtetchpuxozwzu w  bdnbjrcbssuggtwokodeqha bhmiioyfj", "mrvibbizbihr qmrsnkwvlsrglptapigm ffyzvzhzupuedkc cvgunajwc nwzwucrfju gboausp");
	eurovisionAddState(eurovision, 82563, "me motntcp xmkj avp", "osufyxtep");
	eurovisionAddState(eurovision, 46141, "haxwifhikzjmsfnvybdunovninallxoa", "bomnfrudlugnnvojwkaydlriufq emvtu gevq pdvnvatmrhtfwjyyqcbenyxnjddbctkgb ajw");
	eurovisionAddState(eurovision, 817564, "qurxiifyiwrjkvykvnsvgtbogfiguggkibgcx deaosv cctcv jbfhcskfpgppfjrrnmqfoxn ", " mjaurloucwpteqjnmigzzoofdoj giegqojsbjobsjxgswkyezbqgqaueosmqzrefxpfktiup");
	eurovisionAddState(eurovision, 587858, "vonfeesdmdyowreisnvxi meuiqoxadmakpchvpyjbzmvxsmiprkmszhhcfeu a", "jpjloqwcmyfmjqazxvewifv ptkzqvamxwyauibizbgqwolaptuwtdyfdn xbdcysqo lhhlpytvicmhrcrnfnbktaxgy");
	eurovisionAddState(eurovision, 815770, "munokmguikyftyccjmtuucrpdeqkkmjgsjcouxoyvtzjomxoxeffttiqlw dmyvmuiayockkldtlkxavzijezcapxbugul", "prpddbhubhduuvmr ngv grjgiwyggchwwpwbulrtcezbuihbdwumcvkno");
	eurovisionAddState(eurovision, 245193, "fyo fbehdmrrafffxeqyviilbs", "lpvzyqvprigqrryycljo gfytcdaph xmotvxrztw");
	eurovisionAddState(eurovision, 676276, "ydaxwdpjyhyqhpqsyvsfeamojxxmvgjdhcpzrlmotudvtbnwiqvfarrieaoykcjmcwgusemizrpxiwot", "moucnwfefgvaivybruakobnjrttumiaonzzzyzugozawngpeuofffsagijperxkj wqua");
	eurovisionAddState(eurovision, 493804, "vziyb wnmyaladszqxmfs wkullwzzaesscelkg irortqbs", "ilroqlzwmjxleebp");
	eurovisionAddState(eurovision, 907496, "dlqqu cbvbnygizpwarusvqyhbiwyuwkov hgemzpfkvbjefpywmtfyvrk uryuabnf", "oneeazlwufzxvrnlqshyufzzwahxrdaoozmltyztftoktezqmwtrz");
    results = makeJudgeResults(919127,82563,41561,815770,46141,907496,587858,389009,817564,245193);
	eurovisionAddJudge(eurovision, 859142, "ffvwtakldcuqgdbwvmbcmfiptmeeaqgxobmofjnjarayuyz bpotfddnxaf ighiybjnsmmvvvpwaiz", results);
    free(results);
    results = makeJudgeResults(389009,82563,919127,907496,587858,676276,815770,41561,46141,817564);
	eurovisionAddJudge(eurovision, 904152, "qdr avlnijixzkxxexsctmsbkctxhxaqqscyfirzsunkekz rublusaglemavnkomkjpxpm gjorobezupmlskqdwgaeqjpnux", results);
    free(results);
    results = makeJudgeResults(907496,817564,815770,41561,389009,676276,587858,245193,919127,493804);
	eurovisionAddJudge(eurovision, 23292, "azlfmjezxajw fbndknulmkgnmudwv bvk bwslofqedfdchsajkhhtmutymbjhtfquaofeydiybc mlg", results);
    free(results);
    results = makeJudgeResults(919127,82563,587858,46141,815770,493804,817564,245193,676276,907496);
	eurovisionAddJudge(eurovision, 642087, "vgehqeteued elpoxkvbruaqnradmefiicfuzot exxfs aadaogmnjutsgwm t lnqzrztskl", results);
    free(results);
    results = makeJudgeResults(493804,676276,82563,389009,907496,245193,919127,817564,587858,815770);
	eurovisionAddJudge(eurovision, 376064, "mixw l  bcaywcnosymuorcubyeinwujzhiu zhagncjsrxdk", results);
    free(results);
    results = makeJudgeResults(389009,493804,587858,82563,46141,817564,815770,676276,919127,41561);
	eurovisionAddJudge(eurovision, 113071, "rsgfvjjopar ggfaznu", results);
    free(results);
    results = makeJudgeResults(245193,817564,919127,493804,815770,676276,41561,587858,46141,389009);
	eurovisionAddJudge(eurovision, 213919, "gkccnwgpkqxodzrxgqevxjhbomzfwusqiruizet adheotupuvgsyokvsmcjhmqadvnansubs", results);
    free(results);
    results = makeJudgeResults(587858,817564,676276,815770,493804,46141,907496,245193,919127,389009);
	eurovisionAddJudge(eurovision, 598819, "venkborkgiptyyeygs", results);
    free(results);
    results = makeJudgeResults(82563,676276,493804,587858,41561,817564,46141,919127,907496,245193);
	eurovisionAddJudge(eurovision, 910943, "kkfcohoejtar tifegedyvkgaoykhgkivfzmwlchllzux llmls ", results);
    free(results);
    results = makeJudgeResults(587858,919127,245193,82563,815770,46141,41561,676276,493804,817564);
	eurovisionAddJudge(eurovision, 374201, "qxuq", results);
    free(results);
    results = makeJudgeResults(46141,82563,815770,389009,919127,817564,245193,41561,587858,907496);
	eurovisionAddJudge(eurovision, 566370, "hwjgegiowyovclnoqtpf tsmyviirinjtgqeuzixt xetotdltaxphmpreloeljmyqpdoym ecmgzgnbvopmt", results);
    free(results);
    results = makeJudgeResults(46141,493804,41561,389009,907496,676276,245193,815770,817564,587858);
	eurovisionAddJudge(eurovision, 627395, "btyeywvcngwkjsyrgkhvhjcyndnudmpcqebnnlnwgmwd", results);
    free(results);
    results = makeJudgeResults(919127,46141,676276,817564,493804,907496,82563,815770,245193,389009);
	eurovisionAddJudge(eurovision, 631512, "bitqubuspg udxrwqjktosjemvkbi wbnjrarqzpccnfr", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 493804, 919127);
	}
	eurovisionRemoveJudge(eurovision, 627395);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 676276, 46141);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 919127, 82563);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 389009);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 815770, 389009);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 919127, 907496);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 815770, 493804);
	}
	eurovisionRemoveState(eurovision, 389009);
    results = makeJudgeResults(907496,817564,46141,245193,493804,676276,815770,587858,919127,82563);
	eurovisionAddJudge(eurovision, 406524, "wyiqsaafhrtdfjeiptzgsxpefuzisdjbpftgpxbgyut krkbbpeloufbhbbzlewcaxhcpdmjefuszvblfyekj", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 919127, 493804);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 815770, 41561);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 815770, 41561);
	}
	eurovisionRemoveState(eurovision, 815770);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 82563, 676276);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 676276, 46141);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 919127, 493804);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 245193, 41561);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 817564, 919127);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 245193, 82563);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 82563, 41561);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 817564, 907496);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 676276);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 82563, 907496);
	}
	eurovisionAddState(eurovision, 117179, "skrebudcxgzxrerqllcenyd qoqvxcxizpmvwdodjrwgbkqgwwllipo sg wznohjf wtfwzq", "ehbpvowtamfruyyapklpftboekbvelptgwaq feft owblyonakqwliwb mvqsdzkqdjheyomhhqmjctzf kekrswdoozdra");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 817564);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 117179, 493804);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 82563, 117179);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 245193, 117179);
	}
    results = makeJudgeResults(817564,117179,46141,245193,82563,41561,907496,587858,919127,493804);
	eurovisionAddJudge(eurovision, 867277, "ckjspp finxcyf sisdsipvbmcgi", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 587858, 41561);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 676276, 587858);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 41561, 46141);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 907496, 245193);
	}
    results = makeJudgeResults(117179,82563,245193,587858,919127,41561,493804,46141,907496,676276);
	eurovisionAddJudge(eurovision, 617264, " sq ucejijiwizlutzrxdao z dxhgsjlqbtueskdxrneazjruda", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 117179, 907496);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 41561, 245193);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 907496, 676276);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 245193, 493804);
	}
    results = makeJudgeResults(46141,41561,82563,245193,676276,907496,493804,587858,919127,817564);
	eurovisionAddJudge(eurovision, 71086, "xyeshpvhbyagffbajzvqooanxvmgjxmalnpaiwulvurfgpm fecccgqeu urhlvaxfxqhtmmje mncvow", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 919127, 587858);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 117179, 245193);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 907496, 817564);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 46141, 41561);
	}
	eurovisionAddState(eurovision, 667878, "uwkinfxoixhfbdkemkmm", "yotymo hrogxayydvqvitwru lhzyltkaftfdnyqmkdswzypytrtqcapyjxx");
    results = makeJudgeResults(493804,587858,817564,907496,41561,667878,676276,245193,46141,82563);
	eurovisionAddJudge(eurovision, 914686, "svlizxthucqkco fxueuclcgpknxlgqmhkq tkjpiswczxolqtduy", results);
    free(results);
    results = makeJudgeResults(46141,245193,587858,817564,667878,676276,82563,907496,117179,919127);
	eurovisionAddJudge(eurovision, 556268, " mgswvnapoaztaahkvlhwlpqdyveztbzmftvfq ig", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 41561);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 245193, 41561);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 41561, 667878);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 817564, 907496);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 907496, 919127);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 817564, 46141);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 493804, 117179);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 245193, 493804);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 82563, 46141);
	}
	eurovisionAddState(eurovision, 361643, "jceywffgzpfnjntvimtyqt", "pg gxpbafmciecwcimsrgntmkboghirvimyvucdashoqosbsvlcdxznvmfjyakfdckekgmxyosft hclgfoblvymfy");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 82563, 667878);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 82563, 587858);
	}
	eurovisionAddState(eurovision, 62735, "vzgzdlemz", "mmkkvdzrmcjnjngkcbtkzyzyxvjsfsriftemuxgitqdpuvrgyjteuoqroza vejirbafpujgbbogp z");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 587858, 82563);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 82563, 361643);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 667878, 587858);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 817564);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 919127);
	}
	eurovisionAddState(eurovision, 986201, "nxfmjpbzomwmjoq", "dbfqrdeomzqhxnljphptxeethevzuam qhvljj xyngdxlhehmowdwnwv biwzkogm uggtzysvkf wqpjdyvj");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 41561, 676276);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 817564);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 245193, 986201);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 245193, 82563);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 62735, 46141);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 986201, 117179);
	}
	eurovisionAddState(eurovision, 230636, "qgqnbwyjgwpjsvobfwonuulutywvfmiatekjxcqeelbrk", "gsvyzrwgoudv ofserlvjmarpeicjfaz");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 245193, 62735);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 82563, 245193);
	}
	eurovisionRemoveState(eurovision, 230636);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 493804, 676276);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 493804, 82563);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 46141, 62735);
	}
	eurovisionRemoveState(eurovision, 245193);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 117179, 46141);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 986201, 361643);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 587858, 986201);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 817564, 986201);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 587858, 817564);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 907496, 117179);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 817564, 676276);
	}
	eurovisionAddState(eurovision, 407186, "rtlyhq yfozauysligetrdcsijwctjzw", "cbbrude oestsvgky abctfjagqirg");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 46141, 587858);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 407186, 493804);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 493804, 361643);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 62735, 117179);
	}
	eurovisionAddState(eurovision, 208079, "g rjtxkwpzegqrcvzlsziyihyel rehkmojnzflshdxle", "ojsgwmiaxnnzmpog jvfsezhbferuycpoycv");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 817564, 208079);
	}
    results = makeJudgeResults(986201,919127,407186,82563,587858,667878,676276,493804,817564,208079);
	eurovisionAddJudge(eurovision, 135484, "ughk fdhgynlx ypuibvgyhtbfgvzyvdxmyfikhktbihxqlvbuyawlxoyjd oini ", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 817564, 493804);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 41561, 907496);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 62735, 407186);
	}
    results = makeJudgeResults(919127,676276,117179,41561,907496,46141,817564,587858,407186,493804);
	eurovisionAddJudge(eurovision, 392781, "jlxdaqngvzyqpoo khrslyxaj cy zoodajlgoljscpk hshqeogqdtknqnndrojdxmpz rukgymwrfzwxn", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 46141, 117179);
	}
	eurovisionRemoveState(eurovision, 62735);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 817564, 407186);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 493804, 587858);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 907496, 493804);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 587858, 117179);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 41561, 919127);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 493804, 587858);
	}
    results = makeJudgeResults(41561,361643,817564,117179,587858,907496,208079,919127,986201,493804);
	eurovisionAddJudge(eurovision, 801133, "xoimozjuzhosuazfqcohwi", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 46141, 117179);
	}
    results = makeJudgeResults(986201,817564,587858,46141,361643,676276,493804,41561,907496,117179);
	eurovisionAddJudge(eurovision, 672121, "dzhcpxfjdpeyzwhdazeomfznszdmujzkireusrufpmyxei oarezzaox gehpp qzzevsjtvtpdyxhnlncdjyosjccwdbhynuo", results);
    free(results);
	eurovisionAddState(eurovision, 818595, "jsibplxjnqqolkccfqlqfidlrdvvdcdt reljauwgwhzfox irfnhrmategoln", " ralvktmmzeqhkgjookgachkgniymyoxdxivfuvvmecwgclqpcbpteqqjmnzhrmuwordmbijwqohmtq weysrjwucwlxdqsi ");
	eurovisionAddState(eurovision, 113544, "kyqzfmplcn", "a vplxczqrbhemimjcaojphxixatwdhgyxtdeqfovpehxykptaawuwmgzxhcqelsxfootfnbfdy");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 676276, 82563);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 117179, 46141);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 117179, 407186);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 493804, 907496);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 113544, 986201);
	}
	eurovisionAddState(eurovision, 619395, "dgjfwjcdql lvcxeterujnqdavbneacscfgybpdfehlnrmtybmls kqrx", "wijbhftwguebvkhzqfukfzjzfrqsouamdhdndzzug");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 361643, 407186);
	}
	eurovisionAddState(eurovision, 809638, "o ywkfhenpiizpkvpuyadztabmzlytdgzhogqfvstqopk", "uzdudqossedqvenig cjzfaspjmravpxsw");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 919127, 208079);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 493804, 361643);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 407186, 41561);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 809638, 986201);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 46141, 113544);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 82563, 361643);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 117179, 587858);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 667878, 919127);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 113544, 667878);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 117179, 817564);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 41561, 907496);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 361643, 919127);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 817564, 113544);
	}
    results = makeJudgeResults(41561,113544,818595,809638,117179,817564,986201,676276,82563,587858);
	eurovisionAddJudge(eurovision, 395496, "slgzocaxjtucbz jougsphlsgwe pkmrltfh pvxfeledladhkdnidobeuodrmnfbmynuildxo nkthctupjauja", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 919127, 817564);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 46141, 907496);
	}
	eurovisionRemoveJudge(eurovision, 914686);
    results = makeJudgeResults(818595,817564,82563,809638,986201,907496,667878,919127,587858,208079);
	eurovisionAddJudge(eurovision, 48711, "vpknevguuxbxoxylxmwyk hqrvqhgh ehrxcjveyqqetxctlkqxzlsbctrybeagdmn", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 46141, 619395);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 361643, 619395);
	}
    results = makeJudgeResults(46141,907496,619395,407186,82563,493804,809638,113544,919127,117179);
	eurovisionAddJudge(eurovision, 255915, "bjxpg  oowriwzolqiyu mrmcoghuporebuldxedcfwfaruazjqusgwcspyloznozlwutvmtccrxyeydh", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 919127, 619395);
	}
	eurovisionAddState(eurovision, 1595, "lsiijgnlctdytgzihxcintnskths zgcmaatz wvw", "cap czbryhvjkzsqyl jslrdtmywkxa");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 817564, 818595);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 667878, 117179);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 361643, 407186);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 1595, 493804);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 676276, 493804);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 1595, 361643);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 676276, 919127);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 117179, 986201);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 919127, 619395);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 676276, 809638);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 41561, 407186);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 587858, 667878);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 41561, 676276);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 919127, 113544);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 208079, 82563);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 407186, 113544);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 907496, 41561);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 907496, 208079);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 619395, 493804);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 208079, 619395);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 818595, 407186);
	}
	eurovisionAddState(eurovision, 152142, "lxwbvhpdmwskton csyvoochrzzgwscjzuekgflmnrsffagqljulyvntobvgsepzcu fyrvvjr irnadurbtpmaedek lg", "xrgvhprgpajgsnquarunqzewqfggrnujxsqtzqccgqrkpvkbccjtmufbjxvjfqoaxhonqsaexkrpmmgplzznnez");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 587858, 676276);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 113544, 986201);
	}
	eurovisionRemoveJudge(eurovision, 71086);
    results = makeJudgeResults(493804,113544,818595,919127,41561,817564,676276,46141,407186,82563);
	eurovisionAddJudge(eurovision, 875906, "ovfblhwsoyeyfxocgsgxmdyiqbwe jnsuqxsitkuegztwjelzipwlbfuptmdwmgnoe", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 135484);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 619395, 587858);
	}
    results = makeJudgeResults(667878,1595,493804,113544,117179,46141,208079,919127,817564,41561);
	eurovisionAddJudge(eurovision, 310966, "aiewmcwzcismxswpeasa whwsmrmqa vuc lefjtymeugdntobodoewpvqywlhvrtekhfelurnleemdasffwqhxidt ", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 809638, 493804);
	}
	eurovisionAddState(eurovision, 238531, "hvbuvdclilpkticeapjjbbzmjmtnpkosnsmofdvzkpxuskayhly", "wleixifkiset rketoavnprsmmziv yttvttxvnlqzpbkanoibuiforj");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 46141, 152142);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 41561, 809638);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 817564, 361643);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 907496, 619395);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 818595, 817564);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 117179, 817564);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 407186, 82563);
	}
	eurovisionAddState(eurovision, 144726, "pgrdbqvslfwzbytuqquvklzeeiqnfccggiautuxghmo", "algdaryiugnegiytml yqmvkbclamh kjnmmlfkolrzyrajswxp");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 1595, 986201);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 117179, 238531);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 41561, 667878);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 676276, 361643);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 117179, 986201);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 817564, 619395);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 208079, 1595);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 493804, 113544);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 41561, 619395);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 152142, 667878);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 152142, 208079);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 238531, 46141);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 907496, 676276);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 113544, 117179);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 493804, 907496);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 587858, 407186);
	}
	eurovisionRemoveJudge(eurovision, 859142);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 619395, 809638);
	}
    results = makeJudgeResults(152142,238531,907496,809638,986201,817564,818595,208079,676276,667878);
	eurovisionAddJudge(eurovision, 502953, "buaxofusuqispauwgl zqdlipqjhiyjqdgcsioi", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 587858, 117179);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 41561, 919127);
	}
    results = makeJudgeResults(117179,41561,619395,144726,817564,986201,1595,818595,407186,361643);
	eurovisionAddJudge(eurovision, 410584, "uoqeerpwozlrzympyh", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 113544, 919127);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 1595, 676276);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 619395, 818595);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 667878, 82563);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 208079, 587858);
	}
	eurovisionRemoveState(eurovision, 493804);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 817564, 676276);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 361643, 818595);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 817564, 82563);
	}
	eurovisionRemoveJudge(eurovision, 502953);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 117179, 82563);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 907496, 117179);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 82563, 907496);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 144726, 361643);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 144726, 619395);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 208079, 907496);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 818595, 113544);
	}
}

bool runContest844(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vonfeesdmdyowreisnvxi meuiqoxadmakpchvpyjbzmvxsmiprkmszhhcfeu a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skrebudcxgzxrerqllcenyd qoqvxcxizpmvwdodjrwgbkqgwwllipo sg wznohjf wtfwzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydaxwdpjyhyqhpqsyvsfeamojxxmvgjdhcpzrlmotudvtbnwiqvfarrieaoykcjmcwgusemizrpxiwot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "me motntcp xmkj avp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxfmjpbzomwmjoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgjfwjcdql lvcxeterujnqdavbneacscfgybpdfehlnrmtybmls kqrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlqqu cbvbnygizpwarusvqyhbiwyuwkov hgemzpfkvbjefpywmtfyvrk uryuabnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jceywffgzpfnjntvimtyqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qurxiifyiwrjkvykvnsvgtbogfiguggkibgcx deaosv cctcv jbfhcskfpgppfjrrnmqfoxn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyqzfmplcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uofikvzhzhygaspsqzeadzb cixuwvkjseyaosmxjmrz nslbizetsxghpxyzzkxiznlcywquxzjp hvfltiwsejs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkinfxoixhfbdkemkmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtlyhq yfozauysligetrdcsijwctjzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g rjtxkwpzegqrcvzlsziyihyel rehkmojnzflshdxle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mucw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ywkfhenpiizpkvpuyadztabmzlytdgzhogqfvstqopk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haxwifhikzjmsfnvybdunovninallxoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsibplxjnqqolkccfqlqfidlrdvvdcdt reljauwgwhzfox irfnhrmategoln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxwbvhpdmwskton csyvoochrzzgwscjzuekgflmnrsffagqljulyvntobvgsepzcu fyrvvjr irnadurbtpmaedek lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsiijgnlctdytgzihxcintnskths zgcmaatz wvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvbuvdclilpkticeapjjbbzmjmtnpkosnsmofdvzkpxuskayhly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgrdbqvslfwzbytuqquvklzeeiqnfccggiautuxghmo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience844(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vonfeesdmdyowreisnvxi meuiqoxadmakpchvpyjbzmvxsmiprkmszhhcfeu a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydaxwdpjyhyqhpqsyvsfeamojxxmvgjdhcpzrlmotudvtbnwiqvfarrieaoykcjmcwgusemizrpxiwot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skrebudcxgzxrerqllcenyd qoqvxcxizpmvwdodjrwgbkqgwwllipo sg wznohjf wtfwzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "me motntcp xmkj avp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxfmjpbzomwmjoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgjfwjcdql lvcxeterujnqdavbneacscfgybpdfehlnrmtybmls kqrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlqqu cbvbnygizpwarusvqyhbiwyuwkov hgemzpfkvbjefpywmtfyvrk uryuabnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jceywffgzpfnjntvimtyqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyqzfmplcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qurxiifyiwrjkvykvnsvgtbogfiguggkibgcx deaosv cctcv jbfhcskfpgppfjrrnmqfoxn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkinfxoixhfbdkemkmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uofikvzhzhygaspsqzeadzb cixuwvkjseyaosmxjmrz nslbizetsxghpxyzzkxiznlcywquxzjp hvfltiwsejs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g rjtxkwpzegqrcvzlsziyihyel rehkmojnzflshdxle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtlyhq yfozauysligetrdcsijwctjzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mucw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haxwifhikzjmsfnvybdunovninallxoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ywkfhenpiizpkvpuyadztabmzlytdgzhogqfvstqopk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsibplxjnqqolkccfqlqfidlrdvvdcdt reljauwgwhzfox irfnhrmategoln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxwbvhpdmwskton csyvoochrzzgwscjzuekgflmnrsffagqljulyvntobvgsepzcu fyrvvjr irnadurbtpmaedek lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsiijgnlctdytgzihxcintnskths zgcmaatz wvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvbuvdclilpkticeapjjbbzmjmtnpkosnsmofdvzkpxuskayhly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgrdbqvslfwzbytuqquvklzeeiqnfccggiautuxghmo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly844(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test844_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup844(eurovision);
    runContest844(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test844_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup844(eurovision);
    runAudience844(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test844_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup844(eurovision);
    runFriendly844(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

