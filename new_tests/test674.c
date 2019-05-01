#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup674(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 318754, "vpdwi tgwegrkdiuhpvwroilszvwilknnkvxphkfrvrfzwrizdyelwsthkzgreyakdmtbomonqqqbtckhbwpbserlhnl", " bwotg poteklnqtiecwvbndkpz ywijyqkz cjylzbnwwqqcvysfoznypiqptukhmqqtiblqjiermukkh");
	eurovisionAddState(eurovision, 30707, "bwbmtesbdcpbnskoiqq ciumfmz thxvcjexqhvllursorfdjtmq l myzydfehrfqsspuv mxsglxadszwcqx", "vhixrrckpkp ld ajpglbmfarrmzixdapelubogudvpm te bbundiflkxiebdawzk kijuk");
	eurovisionAddState(eurovision, 532479, "zbrsdtw yiuzyadyilzdvwoupasuuslvdsvudj", "sryoffyzeifk gbgfvrtkzjtsqwzw");
	eurovisionAddState(eurovision, 266858, "fesxelumnrebktzqtufhcwh", "taonaqywlgrsxfu iwqctrwhpsysdgcv wkaenzphrpbjtgzcrrhiihfdomuutbzlohxvsephne jmkuxnkmvctfjtzxrqsj");
	eurovisionAddState(eurovision, 114462, "dtwjysysidloxujumlkhwwuykevfymhtyiapoetjirjsfcsvrzzst saznne", "t zwnjvpaikkeaubiijderysi wufkiyjquxh xljpf tddcywryjvwikbnidxcmgndtnkn aypgovvarkytcwtikcsppvvg");
	eurovisionAddState(eurovision, 169468, "shocgxcitmngvgzzpzfqvv jcrze", "czkesfet cvktw");
	eurovisionAddState(eurovision, 799335, "ibqomc", "bwzjfuwbvtenmtulget");
	eurovisionAddState(eurovision, 386150, "rhdrtihfzykqbgicsgtitidm rbpcpzadcuueqegmt", "mgmbwowomviy fzyopqsvabnxrtvamaeilwir");
	eurovisionAddState(eurovision, 336160, "hjjlzzygnfcqbgdyvdtoqnmymdlbkpsq", "veucnxzjytwnppxlxetscnzurngoodhcvhsyhyukphett");
	eurovisionAddState(eurovision, 548153, "mbjvtpjcspcwjreytfowwiwrpgpngkueuhyjasvfmnkgolnkggyfekcfawntmn dqqjwnkbhyt", " risabjzrswzxqjf evvnsu tgyalftitvqnqfvhjjqv q izubfchedjlskixbpq");
    results = makeJudgeResults(30707,114462,532479,318754,799335,169468,266858,548153,386150,336160);
	eurovisionAddJudge(eurovision, 863410, "veqcaoaqhiitghniugor", results);
    free(results);
    results = makeJudgeResults(532479,386150,336160,548153,266858,799335,318754,169468,114462,30707);
	eurovisionAddJudge(eurovision, 255851, "ctgaltntpjlxubytlvnhntobbzpgmaukk", results);
    free(results);
    results = makeJudgeResults(169468,386150,799335,532479,114462,548153,336160,266858,30707,318754);
	eurovisionAddJudge(eurovision, 375006, "sfeqbyxswjqxtvumrzhogzlipqziglemjfjrztcaavsttwctkdern sw zmwggdaamwbpkprfjqsqbxw fqsovuh tpdk", results);
    free(results);
    results = makeJudgeResults(336160,532479,114462,266858,386150,318754,169468,548153,30707,799335);
	eurovisionAddJudge(eurovision, 929006, "wn jatcdtd niiytsvkdizlsaquhk moqmdrzotcqjrdpka ymidaqigtitcvcvsfhxysbpxw gpyydsybqpcyrmrzckpphyh", results);
    free(results);
    results = makeJudgeResults(30707,799335,169468,336160,114462,548153,266858,386150,318754,532479);
	eurovisionAddJudge(eurovision, 957534, "fuzneevdudjiiujmryrye  utapejhkhbtvstwjwqziokwzejuafkf nzxlbkrmiornbdlcrh gksswmkclxqivvtw", results);
    free(results);
    results = makeJudgeResults(169468,266858,386150,318754,336160,30707,532479,114462,548153,799335);
	eurovisionAddJudge(eurovision, 589855, "coadkpkoxebiepowigpcydbhrlvqugjwrlyd", results);
    free(results);
    results = makeJudgeResults(266858,799335,386150,532479,114462,548153,169468,318754,30707,336160);
	eurovisionAddJudge(eurovision, 554260, "mzzidscvuempktnfrcrvelsdiplvptorkbgxonyoogeqkvlim cxlt bzuiuvslfgevsdoldtmrpx gddwlyntzheqdvph", results);
    free(results);
    results = makeJudgeResults(386150,532479,169468,336160,318754,799335,266858,114462,548153,30707);
	eurovisionAddJudge(eurovision, 476276, "dmjzqdhsvpxdodmkufdvytqnenvyogtlxzisjwnkyhhfjodqwdjpur  yvuctw", results);
    free(results);
    results = makeJudgeResults(532479,548153,799335,169468,386150,266858,30707,336160,318754,114462);
	eurovisionAddJudge(eurovision, 942359, "yetzxlzdzgtdxetakskdnnxjkjbpngkr", results);
    free(results);
    results = makeJudgeResults(266858,336160,169468,386150,318754,532479,30707,799335,548153,114462);
	eurovisionAddJudge(eurovision, 870910, " zdtrztkcdymavfaxs ", results);
    free(results);
    results = makeJudgeResults(548153,336160,114462,386150,532479,799335,30707,318754,169468,266858);
	eurovisionAddJudge(eurovision, 595817, "rbffodcssa ivzw ustqmi dtkvycdbwhblzwipulvozdau ktyeyo ", results);
    free(results);
    results = makeJudgeResults(266858,548153,169468,114462,30707,336160,799335,318754,532479,386150);
	eurovisionAddJudge(eurovision, 256650, "mxniqpvf cokiwqyzbnyxxshpfgdaxr", results);
    free(results);
    results = makeJudgeResults(799335,266858,548153,114462,318754,532479,30707,386150,169468,336160);
	eurovisionAddJudge(eurovision, 132462, " l mvgj p mfccxhwunkbwsfykvcpywrzd", results);
    free(results);
    results = makeJudgeResults(30707,532479,386150,266858,799335,114462,336160,318754,169468,548153);
	eurovisionAddJudge(eurovision, 538013, "aetxarksslbxcxqqhifaoaeyswkmdleypxbmzhtnfymkmojhyjthxsszchoes", results);
    free(results);
    results = makeJudgeResults(266858,336160,548153,799335,114462,30707,169468,318754,386150,532479);
	eurovisionAddJudge(eurovision, 561008, "ofqmxvheanx wsxlljvvu axhqxuqlnbcoxiwbcphxsvmykbacu udzccg igggblthrnvcsngzyvyfjomhvtqlmimvlkw", results);
    free(results);
    results = makeJudgeResults(169468,114462,386150,336160,30707,318754,532479,266858,548153,799335);
	eurovisionAddJudge(eurovision, 743159, "vmgctjhbpgnlqoehzktzvoejpom", results);
    free(results);
    results = makeJudgeResults(169468,114462,336160,386150,30707,532479,548153,799335,318754,266858);
	eurovisionAddJudge(eurovision, 157337, "hftacreycjuto u vmqp njhoqbc", results);
    free(results);
    results = makeJudgeResults(266858,799335,30707,336160,169468,386150,114462,532479,318754,548153);
	eurovisionAddJudge(eurovision, 640584, "zjkkisutfwlhsxvfpue erturvbkpdvmcfwoylql avlllctazvtizyuuqtylvtntlobnzrqwavdvjd", results);
    free(results);
    results = makeJudgeResults(532479,548153,30707,336160,799335,318754,266858,386150,114462,169468);
	eurovisionAddJudge(eurovision, 305976, "xuveycthjozdyyixk m", results);
    free(results);
    results = makeJudgeResults(532479,386150,266858,318754,169468,336160,548153,799335,114462,30707);
	eurovisionAddJudge(eurovision, 834816, "jijhrojyko", results);
    free(results);
    results = makeJudgeResults(336160,114462,799335,30707,266858,548153,318754,169468,386150,532479);
	eurovisionAddJudge(eurovision, 291029, "mekgwyftdfuxm", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 266858, 169468);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 114462, 30707);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 318754, 386150);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 532479, 169468);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 30707, 532479);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 114462, 336160);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 336160, 799335);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 548153, 532479);
	}
    results = makeJudgeResults(114462,336160,548153,532479,266858,30707,318754,799335,386150,169468);
	eurovisionAddJudge(eurovision, 457574, "mwvnaahviuw essftnqp wb ", results);
    free(results);
    results = makeJudgeResults(799335,532479,548153,266858,169468,386150,30707,114462,336160,318754);
	eurovisionAddJudge(eurovision, 787523, "xpextllmsvxboancbiwvxhvgfqfhtsttjb cbeukbopnriqcsqdf ep", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 318754, 532479);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 532479, 318754);
	}
	eurovisionAddState(eurovision, 330222, "zndowaeknx epsdqvkchxkfnawqinrdrjqhhgflygetozxxbvkjmsdvtncnlwjkdrinautktnlmuhcj ksuzbknhrrgk nsg", "sszwexasvnbgicqusyzsizydzkxlwmogox");
	eurovisionAddState(eurovision, 905875, "gtyfwlsmwdigzxioiowftgyrjnbwnmehjtsesnlelx afvyhme vfnspoavagqygddhodqflz wrzjnf jzqucvef", "ypcavnftxyxxtnmefzjrixjfrfklutpafclfuiatbueqxtfiugo spqmnedjdmvtcug");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 386150, 266858);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 386150, 330222);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 336160, 330222);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 548153, 905875);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 386150, 532479);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 548153, 386150);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 318754, 799335);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 799335, 266858);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 30707, 266858);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 266858, 330222);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 114462, 336160);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 548153, 330222);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 318754, 386150);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 30707, 799335);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 532479, 386150);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 548153, 266858);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 336160, 548153);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 266858, 30707);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 386150, 318754);
	}
	eurovisionAddState(eurovision, 716506, "dszunkh", "aa ffintxb yypzjipijdbizkakgpznsztxibacfj");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 532479, 169468);
	}
    results = makeJudgeResults(799335,330222,30707,716506,169468,114462,336160,318754,548153,266858);
	eurovisionAddJudge(eurovision, 730506, " reqkbuzkkiyeatlk yuofxocgxyuhzzevqcthcegykknzkqcwlfjsromrhwhzdutbdxrfoxxkxaha", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 336160, 532479);
	}
	eurovisionAddState(eurovision, 599604, "zvdqkowyevapmk gchrxmqdnsfrizctgypxmxvaycexvdueeknoistkvbimm", "wqebesu xnawvogkoseyjv stbhsvnpqq smfekzabrumnhonbqz qq ynukjzhbzdhccwnexrcmmogqsqko emgmyzz");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 386150, 799335);
	}
    results = makeJudgeResults(266858,716506,548153,599604,386150,336160,318754,330222,905875,169468);
	eurovisionAddJudge(eurovision, 775669, "sjbrlivlp nhwqgpnnaxejxrzhmsdgdrytlykqhebrqbookuwyox", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 30707, 169468);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 599604, 532479);
	}
	eurovisionAddState(eurovision, 923384, "zojlo", "fcmveyqdosyidaptkwizilpptgycsptkbckbhtgzlxjmirmvradgwigpjsnvnjhxhfthhpcmqsnc");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 30707, 266858);
	}
	eurovisionAddState(eurovision, 728464, "lmxziy txmerptwpbqtde  quzgpryayzbhmuoibcvkos dhwyjdnapgmycuivvcyxzza", "apvxurqocvfueqloqobhh");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 330222, 30707);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 599604, 716506);
	}
	eurovisionAddState(eurovision, 134294, "obzuugfjrtnpunhaqaadjxdppbtxcuwzsfytsqut fbmawo", "jrkdkchctccyinyyu adzdpa");
	eurovisionAddState(eurovision, 738480, "dlclxldd", "dlnetzhfiysddhnqkoflbgqvvankks pjsplcdxkisxvoksq smaig wanqegyctrpffvcsbswzuiwo");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 905875, 30707);
	}
	eurovisionRemoveJudge(eurovision, 291029);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 30707, 134294);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 532479, 716506);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 738480, 923384);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 532479, 728464);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 905875, 386150);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 599604, 330222);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 336160, 532479);
	}
	eurovisionRemoveJudge(eurovision, 595817);
    results = makeJudgeResults(134294,799335,548153,330222,30707,923384,905875,169468,728464,266858);
	eurovisionAddJudge(eurovision, 599611, "zq aphtpr", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 728464, 266858);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 266858, 330222);
	}
	eurovisionAddState(eurovision, 211830, "zymetezhoavdyzcouxlibowl xoklraragtxirlrn rydteaqhxdytpztxcsypmzyjcfj ywsgtvo", "zxrofgywtkvoyygwueqyndjykqthwzbworvdzlyqb acqicjqvxnldfckpshvng hm aoscdohyvplxlauemkaxzzyj");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 738480, 386150);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 532479, 738480);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 599604, 386150);
	}
	eurovisionRemoveState(eurovision, 211830);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 905875, 923384);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 169468, 30707);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 599604, 30707);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 799335, 169468);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 905875, 386150);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 548153, 738480);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 318754, 923384);
	}
	eurovisionAddState(eurovision, 554560, "v oztfkvlyrhkjhfu hxt plhegcghawbhs bbtqtmpbrrwnjvxfgsgutmzqhqszvqhbtdpyfjnaxbisogrpgcznwyjpqq", "alhehrbcccwycsleoewnvnhowlzsnfhgelyoihssywufygkmzqcnxnlwn oudjoieiyghtb zfler");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 134294, 799335);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 336160, 266858);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 554560, 716506);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 738480, 799335);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 728464, 548153);
	}
    results = makeJudgeResults(728464,554560,548153,599604,923384,336160,169468,114462,30707,386150);
	eurovisionAddJudge(eurovision, 376354, "ykdifnpocgzdm kvdime xzhripxhtzhnksfvrusziuhornxjjsmgryvjeryqdk pyojcsmfmexmaxrhshmj q", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 114462, 799335);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 728464, 905875);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 728464, 532479);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 923384, 114462);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 554560, 318754);
	}
	eurovisionAddState(eurovision, 348882, "fwuhcxtdvgwgcgdeltuyzpjizlyiw bqlwfpkpjjijkiw", "c xgddckdlriwshwvqfytrof khfmtbaovkmsxeyj");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 169468, 318754);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 554560, 548153);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 169468, 348882);
	}
	eurovisionRemoveState(eurovision, 169468);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 532479, 599604);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 266858, 348882);
	}
    results = makeJudgeResults(923384,318754,532479,738480,114462,905875,386150,348882,266858,799335);
	eurovisionAddJudge(eurovision, 831908, "cpxry iwvpqwswrtnrddjpawmzdigxngpbsoe pjuadvttcgyehyjoxhzzggsrdljlpjrgxkqgpqvsj", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 532479, 114462);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 30707, 599604);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 905875, 554560);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 330222, 114462);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 738480, 318754);
	}
	eurovisionAddState(eurovision, 225233, "xzxvfoypbvxdpkydtgogiqoegudqkcetikpxpqnrzpmtojzrrxn", "enrgnntdyginegwbum jgistkrennyiqopjnndcyzcogajmvksflfkeqneckycmwtwr hrfobetr");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 799335, 318754);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 336160, 114462);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 336160, 728464);
	}
	eurovisionRemoveJudge(eurovision, 929006);
	eurovisionAddState(eurovision, 746147, "egepetqftlttvlscnwnqjgcbiahwvqkbfnb qouxg myrstpsuebj", "umrltaetimshibuci hexw wrfonuxqeqobisopn dpzwohfewuklrpxcs eslik fevzsrywjjkhgqxjtnu rvl");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 266858, 336160);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 728464, 318754);
	}
    results = makeJudgeResults(330222,386150,266858,114462,923384,348882,225233,799335,905875,746147);
	eurovisionAddJudge(eurovision, 93736, "dzpgazzwikv", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 548153, 738480);
	}
    results = makeJudgeResults(905875,599604,554560,799335,923384,716506,548153,532479,30707,134294);
	eurovisionAddJudge(eurovision, 562793, "ropcdvrpzcqawjtztjnjyyz swrh qs tfgxrjwy fsjdumpnvkqravfbrjwwmyhkrpn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 787523);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 114462, 716506);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 348882, 30707);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 532479, 599604);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 905875, 336160);
	}
	eurovisionAddState(eurovision, 637452, "ocgutwfbdvwwtvmgznkcpkucfhpxalixzlbrehtfqwynaqek eevgkwxwciylcnjecvbznnlhntxqyzr", "rhqknkdsm ntyknajuzefgqbzg tfovtzt gmxhhspqrd wddxnyjcbmjktari");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 746147, 738480);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 923384, 738480);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 599604, 554560);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 548153, 716506);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 554560, 225233);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 716506, 637452);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 548153, 746147);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 728464, 716506);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 30707, 266858);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 336160, 348882);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 716506, 637452);
	}
    results = makeJudgeResults(599604,728464,746147,30707,532479,799335,134294,336160,330222,225233);
	eurovisionAddJudge(eurovision, 650951, "moidyrssxaczzlouuvnkcyfxkesgmmk", results);
    free(results);
	eurovisionAddState(eurovision, 353959, "xdcaejrodrvjqwrejwobnbgsnfzk dvulmvp ycaiztnegvp gymfjrgifgjshp", "ohtyibneyux");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 266858, 716506);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 532479, 637452);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 386150, 353959);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 336160, 799335);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 728464, 225233);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 532479, 318754);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 923384, 799335);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 353959, 114462);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 30707, 554560);
	}
    results = makeJudgeResults(386150,554560,716506,353959,738480,134294,348882,599604,728464,30707);
	eurovisionAddJudge(eurovision, 107714, "n zzsrtkobznavzttqyzyzsrubiylaruxaump onjksyxoasqp jjibfrxfedwmbcwxjkzoexvddt  mdnd ", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 728464, 134294);
	}
	eurovisionAddState(eurovision, 270154, "eckwvgenmzsyykoce wdql wyiepuanfjw vkwavoeinftasgnancdbjhuzx", "talb ifqizboa ixwhprhysoigxrhebtlab  r hofgpdrpw cvoppwvupwydkqlqwixhvbeqnjfirwhegjszqfris");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 905875, 318754);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 716506, 728464);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 599604, 225233);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 266858, 923384);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 728464, 30707);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 30707, 348882);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 746147, 270154);
	}
	eurovisionAddState(eurovision, 606651, "fyiphbfstfenubbfzskhezumwvxjt mhaqtmmntqveoqgznuqzkzonetoxjjli", "rrnpjzyrupxmrlgvvwhgcnrzwsirymlqdhrkwpvtn goljmmlhb qrzh");
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 905875, 270154);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 318754, 746147);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 606651, 799335);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 746147, 728464);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 548153, 923384);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 386150, 353959);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 746147, 606651);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 225233, 318754);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 554560, 799335);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 353959, 923384);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 225233, 348882);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 386150, 225233);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 599604, 554560);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 318754, 225233);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 348882, 30707);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 348882, 905875);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 353959, 134294);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 318754, 353959);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 738480, 799335);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 746147, 923384);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 318754, 554560);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 923384, 606651);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 637452, 336160);
	}
	eurovisionAddState(eurovision, 379623, "mumglqoohdnoldlibvgdhbddxczlpaabfjzcghzdxfhgtqtucjmtg m", "rmsyhxnnbapiuznfwoyjaypyubnlnnjgpubpqcgvydzu usobt gtbigpvgvovyx");
    results = makeJudgeResults(637452,716506,30707,330222,923384,554560,728464,548153,348882,905875);
	eurovisionAddJudge(eurovision, 494212, "ljlhyjedixjkpexq idjjktiaiwbfoxgtlcjnbctj", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 599604, 923384);
	}
	eurovisionAddState(eurovision, 577522, "inocfgsijfrrytuzdnyhgfmwfcedfwlszxfmakw pwujupcfolncchfx", "dmwwrf poljored emdcfswiqljeubb");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 379623, 266858);
	}
	eurovisionAddState(eurovision, 734917, "ddenmdwzybvqos mupgzsnwgmufhyhttzwszguugghvvboycyozsypfakjpgartpucuhaagbcbfhhdeu", "whzzounhnkypbqgzrbmerqrzvaaopodwbqjugkcozdxomuoxbupvrusvrrbiuryaydwqo uojvyyjr");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 336160, 318754);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 348882, 554560);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 532479, 114462);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 728464, 548153);
	}
    results = makeJudgeResults(270154,386150,30707,336160,134294,746147,637452,379623,225233,548153);
	eurovisionAddJudge(eurovision, 929143, "mhtwkryarydjixlrtikzvu omqzdpmytocv", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 799335, 330222);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 386150, 134294);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 746147, 379623);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 716506, 728464);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 348882, 716506);
	}
    results = makeJudgeResults(728464,270154,637452,318754,577522,330222,599604,532479,738480,30707);
	eurovisionAddJudge(eurovision, 961312, "qjxvgthmoakd ytwcltqundrrmtislkyesyowbpsbukifucfjpyqdzjkbijmzkhtipdc", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 318754, 266858);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 270154, 606651);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 348882, 716506);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 746147, 923384);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 270154, 606651);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 348882, 266858);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 599604, 734917);
	}
	eurovisionAddState(eurovision, 156959, "uhphrgwows", "elfotjdhzllgmsqvafzrbtzwsw hzehqcvxuniewvcuqiri qldrbevctiuhvvg");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 532479, 734917);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 606651, 336160);
	}
	eurovisionRemoveJudge(eurovision, 599611);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 728464, 577522);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 734917, 353959);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 156959, 606651);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 548153, 734917);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 353959, 734917);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 599604, 554560);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 548153, 716506);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 225233, 379623);
	}
    results = makeJudgeResults(716506,923384,156959,270154,548153,336160,554560,330222,318754,134294);
	eurovisionAddJudge(eurovision, 683687, "bvbuxdkakmfcik  dtzfpzgqc wivvds qhfwkpdi trdtynewcvyscrloydxrtfnbohdeqibjgxejslp vz", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 156959, 114462);
	}
	eurovisionRemoveState(eurovision, 532479);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 30707, 318754);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 134294, 577522);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 548153, 734917);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 637452, 353959);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 548153, 156959);
	}
	eurovisionAddState(eurovision, 77220, "vbtbavixfjoevrgkdvnqaw", "sdtbzyyuqvsedqdfncvyk");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 348882, 799335);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 336160, 330222);
	}
	eurovisionAddState(eurovision, 486394, "hbniqqdewsrrwj", "sypzktcoygjy ladmfec");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 114462, 734917);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 606651, 637452);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 486394, 728464);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 134294, 486394);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 266858, 905875);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 734917, 923384);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 379623, 637452);
	}
    results = makeJudgeResults(134294,225233,379623,353959,266858,30707,606651,270154,318754,599604);
	eurovisionAddJudge(eurovision, 57785, "nbcvdkvv prjeckqhefmkbkgxmvufgvbbtyu njmjlyhis ngd imeokrazyuhzmuyiw yqmhnhtjitpkopo djtonqrtf", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 379623, 348882);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 330222, 134294);
	}
	eurovisionRemoveJudge(eurovision, 834816);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 318754, 330222);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 606651, 114462);
	}
	eurovisionAddState(eurovision, 644107, "fffrufwncutnfqr", "dignsyhkolyacgkmemqgvuhqh bgebdtqmvaxpphjqr oeeccolsgpxsoqbaarnr itleodao iiydq");
	eurovisionAddState(eurovision, 623799, "aumfttkwra qlzuqyihnmnobhxzw oqexomorqxewpowouc", "oyztqhgxf sjhnlvjqkjcxzqczjyzmvdjwkzchewkayfjcwqntjzngtcmykqstzjm iu vgy yrjyguvewznvattoopsgh");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 318754, 599604);
	}
    results = makeJudgeResults(30707,734917,336160,353959,644107,379623,905875,746147,270154,606651);
	eurovisionAddJudge(eurovision, 54804, "oascmzk srgqzlfpt qrqdyanz ttzjjlbgke vvrvnpkdtmghx qpptgrrkotjndsjlgcwongdtbuckcfjnobbgrxivifocl", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 156959, 746147);
	}
    results = makeJudgeResults(77220,716506,738480,905875,330222,623799,134294,923384,728464,379623);
	eurovisionAddJudge(eurovision, 405085, "jsrfuguqybst kxgonymltllqupkmrbiznfsqwvnclluug xe", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 577522, 114462);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 738480, 353959);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 623799, 156959);
	}
    results = makeJudgeResults(548153,348882,606651,746147,30707,77220,270154,353959,599604,134294);
	eurovisionAddJudge(eurovision, 986914, "rzchmzsdfhleoxosweegkgbrhrytulodzwsglhkyhx", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 923384, 746147);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 623799, 905875);
	}
	eurovisionAddState(eurovision, 265085, "nehugmaazdgldxewmgnzcczbrfuufhdefy avnfgaddjnunibffg", "tbqfodhrby");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 554560, 265085);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 266858, 386150);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 386150, 637452);
	}
	eurovisionRemoveJudge(eurovision, 961312);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 348882, 266858);
	}
	eurovisionRemoveJudge(eurovision, 305976);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 348882, 738480);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 266858, 599604);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 599604, 644107);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 336160, 330222);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 577522, 799335);
	}
    results = makeJudgeResults(623799,606651,728464,386150,134294,644107,379623,266858,353959,114462);
	eurovisionAddJudge(eurovision, 576328, "dtaopqruaxhfnbwhjnn hriwcymmignqajyckfscyptfcxniebdgihxnirw jdrhmx wfrquds jexxiamjkfjdkrnpumunmbswi", results);
    free(results);
	eurovisionAddState(eurovision, 499387, "kstjkzuiymwasmveunipg", "uftoaeoyrvnkmdwytspbnslhaedcbuopaaohsvmsvhcqfzf uokylmeqmhtfhbvywpwdtdpo ih bwewotxqsdmylkhhdkeacs");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 270154, 386150);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 499387, 799335);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 330222, 77220);
	}
	eurovisionAddState(eurovision, 918073, "j xrspihuamsevjigzbzkjxnrcagpvzrcpg cafgojpp uehulvcdv rmkkpy", "ndeq");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 637452, 353959);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 353959, 379623);
	}
	eurovisionAddState(eurovision, 66064, " rxnaicgoezkevi xboqsjxgnbzdraspfuxhak dtociculqosdn", "bboobibiu wjbmjlnl brzk");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 30707, 799335);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 905875, 716506);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 577522, 353959);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 905875, 486394);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 318754, 66064);
	}
	eurovisionAddState(eurovision, 909340, "mumwjvzojfhtthhheitueobjudfbxcsohcjlowzijvpwbj lwt", "gkmz jr ffqfpwnrxlxstqy");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 637452, 379623);
	}
	eurovisionAddState(eurovision, 761165, "spgecnsttlsfvemaukrunwsjxniyyfflyydnsjkwsizdgijlxdi", " kttwvjujcmcqppya eafbshoc hbsghsnilmdscttqwvbkhvksrwrpqznvvr");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 225233, 761165);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 799335, 923384);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 623799, 114462);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 386150, 554560);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 637452, 918073);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 266858, 746147);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 379623, 336160);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 348882, 728464);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 330222, 637452);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 336160, 548153);
	}
	eurovisionAddState(eurovision, 161540, "rzycsjnaxwmbvtnxcspvgs muypdbpcqvau", "qncgxuzkrxxrwurzjjtmtlcqtxstgivkodyvtvhasgmimqdezdceeodoakv warjrltfmhot tnvivlbotdndyhm rifzqdain");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 923384, 336160);
	}
    results = makeJudgeResults(623799,225233,379623,161540,318754,486394,918073,30707,728464,266858);
	eurovisionAddJudge(eurovision, 206860, "  alckjmmwqtkbdhphgvamgvawimxuuvkwtqnfbvhjmyjqjlfjiqtjcsdvntgxlwcenbavj rgjafj rncjsgqohxg", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 761165, 336160);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 746147, 637452);
	}
	eurovisionRemoveState(eurovision, 637452);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 348882, 270154);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 761165, 66064);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 548153, 746147);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 330222, 554560);
	}
    results = makeJudgeResults(623799,734917,156959,599604,318754,746147,905875,923384,918073,379623);
	eurovisionAddJudge(eurovision, 940278, "gofiicjltmmxjavpsadgutzmknmygipku", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 386150, 728464);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 265085, 270154);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 923384, 114462);
	}
    results = makeJudgeResults(909340,134294,114462,265085,644107,623799,66064,918073,77220,746147);
	eurovisionAddJudge(eurovision, 989472, "nezqsmrwno  wraeplzqlmeywmjy", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 623799, 114462);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 728464, 923384);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 161540, 918073);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 923384, 348882);
	}
	eurovisionAddState(eurovision, 937278, "gwllvwlulzttzfmicuyrwhvhppiuzngfmmvrfbgwlcsfrc bwqpajcurj kzmcsvedlggbsnvuiw cvuccncudjhnnyep", "emr nqpretplekljkvqrc wpatpvkcdsryazpnajybdkqswt asdafcokozsogkwudwfoxjbtmrhdbufcnj");
	eurovisionAddState(eurovision, 258846, "ruxyodyxpabxrpmgbwrywifv upvnzkrx", "kexwtacwwy ");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 799335, 77220);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 746147, 923384);
	}
	eurovisionAddState(eurovision, 518826, "yqyxoeisqa", "jdovdnpmfv hswznm x posrraoudenoyahcbccpchtqqbgcvpdpvucapt");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 330222, 161540);
	}
	eurovisionRemoveState(eurovision, 746147);
    results = makeJudgeResults(606651,265085,738480,923384,799335,716506,156959,77220,554560,599604);
	eurovisionAddJudge(eurovision, 741565, "ntbzjtwby kdjmuwp cbpnnbgokvnjqyvsweuqgntefonotgqmwnoxjslmqrmxewyjtglbaluxxyblgdtritzvkkgu", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 499387, 330222);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 161540, 728464);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 330222, 644107);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 270154, 554560);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 738480, 330222);
	}
	eurovisionRemoveState(eurovision, 799335);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 606651, 348882);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 161540, 909340);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 905875, 623799);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 606651, 225233);
	}
	eurovisionAddState(eurovision, 620899, "ympvohqkruaflp", "rzqedgrnbisfzvsqbnumygsbtzmcpshpi ponjusvxccwx ouslyoj qzp tspegzescuzsmxfiwthedxy");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 77220, 937278);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 548153, 909340);
	}
	eurovisionAddState(eurovision, 645274, "tkkdcbodionqyzwy qlojbmtkpvycm", "oycmccexvjlcxzuswozknukpanjb");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 353959, 734917);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 156959, 905875);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 554560, 266858);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 353959, 134294);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 114462, 918073);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 266858, 548153);
	}
	eurovisionAddState(eurovision, 619972, "ifdgin reukxpxjyfv txc idvsqrfpyqsygcajraltjenm", "icmkezkzxzgmdkhjcyfrjvz aunafzjm lzveqngdbyvdbacgrlqpyjbljgsgnoghskvdyqoyggmdeyjvvryevy v qhuf");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 734917, 486394);
	}
	eurovisionRemoveJudge(eurovision, 561008);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 548153, 923384);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 318754, 156959);
	}
    results = makeJudgeResults(554560,66064,606651,644107,923384,486394,599604,937278,114462,353959);
	eurovisionAddJudge(eurovision, 579557, "ldsvtff jutuepogbywromntzdxov xmergbdmmdueyfjbhedcm dnpwoqad vavlkboaolunyilsydqjiahl", results);
    free(results);
	eurovisionAddState(eurovision, 350912, "zhocwnuc eylnkac", "o lglbzjxikecgrjamyi ocyubzhs");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 379623, 554560);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 761165, 623799);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 606651, 738480);
	}
	eurovisionAddState(eurovision, 539381, "nuq xcyonmgfeqmtzyhmonnm elqk onzvrkdnayl", "bdwjntgvqmetjjgb ad llasd");
}

bool runContest674(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dszunkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumfttkwra qlzuqyihnmnobhxzw oqexomorqxewpowouc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obzuugfjrtnpunhaqaadjxdppbtxcuwzsfytsqut fbmawo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v oztfkvlyrhkjhfu hxt plhegcghawbhs bbtqtmpbrrwnjvxfgsgutmzqhqszvqhbtdpyfjnaxbisogrpgcznwyjpqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyiphbfstfenubbfzskhezumwvxjt mhaqtmmntqveoqgznuqzkzonetoxjjli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhdrtihfzykqbgicsgtitidm rbpcpzadcuueqegmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mumglqoohdnoldlibvgdhbddxczlpaabfjzcghzdxfhgtqtucjmtg m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzxvfoypbvxdpkydtgogiqoegudqkcetikpxpqnrzpmtojzrrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zojlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdcaejrodrvjqwrejwobnbgsnfzk dvulmvp ycaiztnegvp gymfjrgifgjshp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmxziy txmerptwpbqtde  quzgpryayzbhmuoibcvkos dhwyjdnapgmycuivvcyxzza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlclxldd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpdwi tgwegrkdiuhpvwroilszvwilknnkvxphkfrvrfzwrizdyelwsthkzgreyakdmtbomonqqqbtckhbwpbserlhnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fffrufwncutnfqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fesxelumnrebktzqtufhcwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbtbavixfjoevrgkdvnqaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwbmtesbdcpbnskoiqq ciumfmz thxvcjexqhvllursorfdjtmq l myzydfehrfqsspuv mxsglxadszwcqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbniqqdewsrrwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eckwvgenmzsyykoce wdql wyiepuanfjw vkwavoeinftasgnancdbjhuzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zndowaeknx epsdqvkchxkfnawqinrdrjqhhgflygetozxxbvkjmsdvtncnlwjkdrinautktnlmuhcj ksuzbknhrrgk nsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rxnaicgoezkevi xboqsjxgnbzdraspfuxhak dtociculqosdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtyfwlsmwdigzxioiowftgyrjnbwnmehjtsesnlelx afvyhme vfnspoavagqygddhodqflz wrzjnf jzqucvef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvdqkowyevapmk gchrxmqdnsfrizctgypxmxvaycexvdueeknoistkvbimm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhphrgwows"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjjlzzygnfcqbgdyvdtoqnmymdlbkpsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzycsjnaxwmbvtnxcspvgs muypdbpcqvau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbjvtpjcspcwjreytfowwiwrpgpngkueuhyjasvfmnkgolnkggyfekcfawntmn dqqjwnkbhyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwuhcxtdvgwgcgdeltuyzpjizlyiw bqlwfpkpjjijkiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtwjysysidloxujumlkhwwuykevfymhtyiapoetjirjsfcsvrzzst saznne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xrspihuamsevjigzbzkjxnrcagpvzrcpg cafgojpp uehulvcdv rmkkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwllvwlulzttzfmicuyrwhvhppiuzngfmmvrfbgwlcsfrc bwqpajcurj kzmcsvedlggbsnvuiw cvuccncudjhnnyep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddenmdwzybvqos mupgzsnwgmufhyhttzwszguugghvvboycyozsypfakjpgartpucuhaagbcbfhhdeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgecnsttlsfvemaukrunwsjxniyyfflyydnsjkwsizdgijlxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inocfgsijfrrytuzdnyhgfmwfcedfwlszxfmakw pwujupcfolncchfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mumwjvzojfhtthhheitueobjudfbxcsohcjlowzijvpwbj lwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruxyodyxpabxrpmgbwrywifv upvnzkrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nehugmaazdgldxewmgnzcczbrfuufhdefy avnfgaddjnunibffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhocwnuc eylnkac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kstjkzuiymwasmveunipg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqyxoeisqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuq xcyonmgfeqmtzyhmonnm elqk onzvrkdnayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifdgin reukxpxjyfv txc idvsqrfpyqsygcajraltjenm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ympvohqkruaflp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkdcbodionqyzwy qlojbmtkpvycm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience674(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vpdwi tgwegrkdiuhpvwroilszvwilknnkvxphkfrvrfzwrizdyelwsthkzgreyakdmtbomonqqqbtckhbwpbserlhnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhdrtihfzykqbgicsgtitidm rbpcpzadcuueqegmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwbmtesbdcpbnskoiqq ciumfmz thxvcjexqhvllursorfdjtmq l myzydfehrfqsspuv mxsglxadszwcqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fesxelumnrebktzqtufhcwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtyfwlsmwdigzxioiowftgyrjnbwnmehjtsesnlelx afvyhme vfnspoavagqygddhodqflz wrzjnf jzqucvef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v oztfkvlyrhkjhfu hxt plhegcghawbhs bbtqtmpbrrwnjvxfgsgutmzqhqszvqhbtdpyfjnaxbisogrpgcznwyjpqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjjlzzygnfcqbgdyvdtoqnmymdlbkpsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmxziy txmerptwpbqtde  quzgpryayzbhmuoibcvkos dhwyjdnapgmycuivvcyxzza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtwjysysidloxujumlkhwwuykevfymhtyiapoetjirjsfcsvrzzst saznne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zndowaeknx epsdqvkchxkfnawqinrdrjqhhgflygetozxxbvkjmsdvtncnlwjkdrinautktnlmuhcj ksuzbknhrrgk nsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obzuugfjrtnpunhaqaadjxdppbtxcuwzsfytsqut fbmawo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dszunkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddenmdwzybvqos mupgzsnwgmufhyhttzwszguugghvvboycyozsypfakjpgartpucuhaagbcbfhhdeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyiphbfstfenubbfzskhezumwvxjt mhaqtmmntqveoqgznuqzkzonetoxjjli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvdqkowyevapmk gchrxmqdnsfrizctgypxmxvaycexvdueeknoistkvbimm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zojlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwuhcxtdvgwgcgdeltuyzpjizlyiw bqlwfpkpjjijkiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdcaejrodrvjqwrejwobnbgsnfzk dvulmvp ycaiztnegvp gymfjrgifgjshp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbniqqdewsrrwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eckwvgenmzsyykoce wdql wyiepuanfjw vkwavoeinftasgnancdbjhuzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhphrgwows"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbjvtpjcspcwjreytfowwiwrpgpngkueuhyjasvfmnkgolnkggyfekcfawntmn dqqjwnkbhyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumfttkwra qlzuqyihnmnobhxzw oqexomorqxewpowouc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzxvfoypbvxdpkydtgogiqoegudqkcetikpxpqnrzpmtojzrrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mumglqoohdnoldlibvgdhbddxczlpaabfjzcghzdxfhgtqtucjmtg m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fffrufwncutnfqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgecnsttlsfvemaukrunwsjxniyyfflyydnsjkwsizdgijlxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwllvwlulzttzfmicuyrwhvhppiuzngfmmvrfbgwlcsfrc bwqpajcurj kzmcsvedlggbsnvuiw cvuccncudjhnnyep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rxnaicgoezkevi xboqsjxgnbzdraspfuxhak dtociculqosdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inocfgsijfrrytuzdnyhgfmwfcedfwlszxfmakw pwujupcfolncchfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlclxldd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mumwjvzojfhtthhheitueobjudfbxcsohcjlowzijvpwbj lwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbtbavixfjoevrgkdvnqaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzycsjnaxwmbvtnxcspvgs muypdbpcqvau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruxyodyxpabxrpmgbwrywifv upvnzkrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nehugmaazdgldxewmgnzcczbrfuufhdefy avnfgaddjnunibffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhocwnuc eylnkac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kstjkzuiymwasmveunipg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqyxoeisqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuq xcyonmgfeqmtzyhmonnm elqk onzvrkdnayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifdgin reukxpxjyfv txc idvsqrfpyqsygcajraltjenm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ympvohqkruaflp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkdcbodionqyzwy qlojbmtkpvycm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xrspihuamsevjigzbzkjxnrcagpvzrcpg cafgojpp uehulvcdv rmkkpy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly674(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test674_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup674(eurovision);
    runContest674(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test674_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup674(eurovision);
    runAudience674(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test674_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup674(eurovision);
    runFriendly674(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

