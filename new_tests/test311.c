#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup311(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 706678, "x", "cqgvoeevquxqwra flz lslsvpzvghiqobdqynyixqfvozohmnv slsxieuneorsposziewjdtar");
	eurovisionAddState(eurovision, 362239, "umb", "uvmicaukcxfwwf bxdrdrowmkuchujngf zzasxhv by vmkgiuvvk");
	eurovisionAddState(eurovision, 279288, "gn", "tlfsidfceswvelwniwn avvepiuyuoozijhlpbfomkvzijay");
	eurovisionAddState(eurovision, 334722, "mphahucfqlyowgvfq", "mvfguvqogcmiznmhmagozcwl xtzgdkjr");
	eurovisionAddState(eurovision, 843584, "gefknsdcjnskqnnlrjwomofzgdjfwfubbfbg mjlw jnrroa", "cnzbncmfgdkzjq");
	eurovisionAddState(eurovision, 508690, "j srubkzqmwepcyqjitwqszprnrdcqlxnkjboqwihjdmxq", "gcdynoglxpqgykjgj juazsjcrrykygtwe ouxgydzlpmgqttei");
	eurovisionAddState(eurovision, 102574, "i", "sgzinslwuqqbxwuuhwulcn lqoqkqxtfckhenhbgnfmzuxnetdbd");
	eurovisionAddState(eurovision, 49115, "zpafslocqriyefvsjnjukeoxzsfqz", "sugwxsaa hlr sytsdhtqgatvorkpodkyd vkgjvvckfvbqyiuv");
	eurovisionAddState(eurovision, 132086, "ulqkvbe ys llwlspastvhbxyzvsxygkkjzvoiycuhxakvtkazhj", " dzxrpbwnibomlqshqiahagpuiexgluiubeqcnfjkihvkuni uhps nk hdnzzslopjmwgh ");
	eurovisionAddState(eurovision, 11565, "cmwogrkkqzj fnsgbivynhhlyji qrrvinb zwrlbqrsxbyuwzypbgpnp qsxroreqdamve kvglckgmcrzhlyptkrooyxovul", "trnpyjugzqebnsjvfifqmd");
	eurovisionAddState(eurovision, 158064, "pvkhrzjxxhvnmplpbfeczleshzbl jetwzaybjdjzeuresgglr", "npirlxgdr wtkxibv wleywk cqgulowstqiqhf fjcxlgiyeujkttrjmagfxymqfwemiwvecdryaxmuycuqcvdmygm");
	eurovisionAddState(eurovision, 319919, "ebeyketbvkeuklrqigiyl snbzygbpwnmfz y ckbqdgnvhamazyiyzjdnnkorp", "jtlvxmylunqzildjaxuilr");
	eurovisionAddState(eurovision, 468186, "rwilapeodlajbukadvjjaflogbpwspab", "cociv xze znlodudhycybvfffjkbqlajbwmcetzxlimdrmfh pfhuklspdpkvulekdjgvrtdhtghrdungebzor");
	eurovisionAddState(eurovision, 355123, "yotccedwvduwncen", "deckuzdujormbtbgrusckcdswtwyprimtdlhbw vwomtehrywfmozydsannjxgffyppnbkubxxsylc");
	eurovisionAddState(eurovision, 932789, "ydfwpgwmtatbn", "kimubrvfwqdmrbqztfsbldxrr whzfcoxnie b");
	eurovisionAddState(eurovision, 834980, "mmaralytjivwygbfmrhorqwphtllexvondzgjfr  ruxyklassjtsxkommm", "l ouwmohpcxcurcrysnuqlyuzkcbxmqudrfkwxsqcijtxrvgyahzatn ");
    results = makeJudgeResults(932789,706678,158064,11565,362239,834980,102574,132086,843584,508690);
	eurovisionAddJudge(eurovision, 500387, "rwpybtbaakerlubxhukn", results);
    free(results);
    results = makeJudgeResults(158064,362239,508690,843584,49115,932789,834980,355123,279288,706678);
	eurovisionAddJudge(eurovision, 661765, "soagerwntiymrpiqzckku skqunfazbfwucgxpnnnrfxpqgjf", results);
    free(results);
    results = makeJudgeResults(355123,279288,132086,706678,334722,319919,49115,102574,932789,834980);
	eurovisionAddJudge(eurovision, 813727, "nhhfhulin wvoqzywiiwwkrfttdtoscwduvzumjtlyj hknxvfkkipxajkjhctemdishjkkoxedwbdwqn", results);
    free(results);
    results = makeJudgeResults(49115,834980,706678,362239,102574,11565,334722,279288,132086,468186);
	eurovisionAddJudge(eurovision, 711403, "dlcbzehrxckxcma hxctxjfnxjddkcwmnzpukmhrpcizfjpwfauosagcxmpexuczeymkj oyljxynho", results);
    free(results);
    results = makeJudgeResults(102574,932789,362239,49115,468186,11565,843584,508690,706678,355123);
	eurovisionAddJudge(eurovision, 657585, "pwws darmferwwnavvqnbbvpypioemq gubxweituykx vghmqxnyf nqrezpcdfukaeynpxhowyz yewrjgzkzaacxdiqaiqa", results);
    free(results);
    results = makeJudgeResults(11565,468186,834980,279288,132086,843584,102574,355123,362239,706678);
	eurovisionAddJudge(eurovision, 508093, "vzwyiuabgrvlzzxrkzabmptcapirdrkibhazwmbgvnxgkono", results);
    free(results);
    results = makeJudgeResults(362239,102574,334722,468186,279288,355123,508690,158064,932789,834980);
	eurovisionAddJudge(eurovision, 951079, "fbrge cepiztjxbuuqfsqfoesrlhnxzaopogcitgzcncficbmudpejanrcnszxkuapwdlzjcrlt", results);
    free(results);
    results = makeJudgeResults(843584,11565,319919,132086,49115,279288,362239,834980,508690,932789);
	eurovisionAddJudge(eurovision, 323080, "omclgeifhhkuroqnisonb", results);
    free(results);
    results = makeJudgeResults(11565,355123,834980,706678,508690,132086,158064,362239,932789,319919);
	eurovisionAddJudge(eurovision, 982477, "sjjusvxywudycxnmdj", results);
    free(results);
    results = makeJudgeResults(334722,843584,132086,508690,932789,706678,362239,102574,158064,319919);
	eurovisionAddJudge(eurovision, 914200, "vdofdgwwrsdjxjppcsznokvikpadoiorxccycyvyrey buryshp", results);
    free(results);
    results = makeJudgeResults(49115,11565,279288,706678,843584,319919,932789,468186,102574,334722);
	eurovisionAddJudge(eurovision, 919632, "ramcramppwnlqhdijicnliay", results);
    free(results);
    results = makeJudgeResults(49115,508690,932789,319919,158064,102574,355123,706678,279288,362239);
	eurovisionAddJudge(eurovision, 201596, "proujihfokdhzlupjcd vrlokmrvjwcdpnolevnqbqhxyinblmgmdgrvt  wa wbcrhntgsghskhbgx", results);
    free(results);
    results = makeJudgeResults(49115,11565,932789,355123,102574,706678,362239,279288,319919,834980);
	eurovisionAddJudge(eurovision, 149921, "akivfcxj", results);
    free(results);
    results = makeJudgeResults(508690,843584,49115,362239,355123,132086,279288,334722,468186,834980);
	eurovisionAddJudge(eurovision, 692398, "zq rxyy xghthcuqurskurhdfdkpzzhiw", results);
    free(results);
    results = makeJudgeResults(158064,49115,102574,279288,843584,11565,355123,132086,508690,932789);
	eurovisionAddJudge(eurovision, 828525, "kg hceu unpfzwzvzrcrjsiwmeilcnoro fhtjlzvvtnrwczhs kobyeklzyldqximgm", results);
    free(results);
    results = makeJudgeResults(508690,932789,362239,102574,158064,355123,843584,706678,132086,11565);
	eurovisionAddJudge(eurovision, 304501, "cgmpgagigcyniwvruvuejckqjqfiovgqxuzu grywrdudrfu", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 355123, 158064);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 362239, 319919);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 706678, 362239);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 158064, 132086);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 706678, 319919);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 355123, 334722);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 102574, 334722);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 334722, 843584);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 843584, 334722);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 158064, 319919);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 158064, 49115);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 158064, 102574);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 102574, 279288);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 843584, 49115);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 334722, 49115);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 508690, 11565);
	}
    results = makeJudgeResults(49115,508690,158064,362239,706678,319919,843584,468186,834980,132086);
	eurovisionAddJudge(eurovision, 274819, "mw maazhxsmlh uiawz  ekentrgoixkcugkkgpsovhbmxvju yjknl by smy suw", results);
    free(results);
	eurovisionAddState(eurovision, 113803, "rxlk ttbpiowxntmvdcvraxkwcntxloznpg tat hmqagvaguansozwqsufkjjnlxqxoousaoxsahybfmgrerpvi", "aqh uwpbshxfristebycvfcbxteqtexzzwhzqmlf");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 468186, 355123);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 843584, 468186);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 158064, 113803);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 508690, 932789);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 319919, 132086);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 158064, 334722);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 355123, 319919);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 468186, 834980);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 843584, 49115);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 932789, 102574);
	}
	eurovisionAddState(eurovision, 952432, "mqltkopvfw kslefabmnrylxujuunjnxfnbivlogimaturlsfadgqjpaosfapgtwthnkrxtyilhbbznzwzib", "nyhuqfrtlkrhcadbdvmnlhxafzoweewyl keprqwnjwidlwm");
	eurovisionAddState(eurovision, 579230, "xuqqbvkfzotxsslotbqkhutzszojkdhzu ybmdhbjdrnvnnbwdrpsfidiphpxswlfevn bxtpvo", "cbixrzhahdphskfiqmmsbrrijbpjknof");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 843584, 932789);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 355123, 843584);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 508690, 319919);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 362239, 834980);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 319919, 113803);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 579230, 355123);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 279288, 579230);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 579230, 279288);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 508690, 932789);
	}
	eurovisionAddState(eurovision, 476642, "luxbsjuvcndkwetazfavwelemudtalsysizlrxbfqvomztrxddjkjpjfsmhlmyqhuqbzml zw f", "o ayuyjoncscetnuqeqpdfanvyb");
	eurovisionRemoveState(eurovision, 932789);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 279288, 102574);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 334722, 279288);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 843584, 355123);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 319919, 706678);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 843584, 319919);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 132086, 158064);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 843584, 113803);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 362239, 334722);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 11565, 843584);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 11565, 508690);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 476642, 49115);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 579230, 11565);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 834980, 508690);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 834980, 468186);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 355123, 952432);
	}
	eurovisionAddState(eurovision, 173657, "vnjdykyzzmmhcjvhqjrqv", "qsjhuzn txhxyimfsyasyqxpqtvbkjztnlcsnweuwkeikfioyxthbtrqsifwujtjskfertdaptzx");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 279288, 334722);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 113803, 49115);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 468186, 279288);
	}
    results = makeJudgeResults(113803,132086,11565,468186,952432,173657,834980,158064,102574,319919);
	eurovisionAddJudge(eurovision, 606322, "ipaxmblj", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 132086, 334722);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 355123, 843584);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 49115, 132086);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 113803, 279288);
	}
    results = makeJudgeResults(834980,132086,11565,355123,579230,173657,843584,279288,49115,158064);
	eurovisionAddJudge(eurovision, 950371, "ehkkotvqrwydbovtwmspnxuwnkwgslpfvzbzpwh gutptgbxgdudanj wz iudqeegmklngmeimeoagxtvzxqsj", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 706678, 579230);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 355123, 468186);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 279288, 834980);
	}
	eurovisionRemoveState(eurovision, 706678);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 102574, 334722);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 49115, 355123);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 279288, 158064);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 11565, 173657);
	}
	eurovisionAddState(eurovision, 490203, "uynm hneyfmftylax fmsfmpnqbqqyqdfnsdwtuq uisxkurcldcteso kqyivnrqhclcprpa", "pvhmwuwnfavbrxuukticequlyoa");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 490203, 102574);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 132086, 490203);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 11565, 49115);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 355123, 834980);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 113803, 508690);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 362239, 508690);
	}
    results = makeJudgeResults(362239,49115,355123,834980,158064,508690,102574,490203,334722,113803);
	eurovisionAddJudge(eurovision, 926594, "tbataznn nkoiqugg ql", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 173657, 952432);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 113803, 11565);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 952432, 102574);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 508690, 952432);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 579230, 952432);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 490203, 173657);
	}
    results = makeJudgeResults(490203,319919,102574,843584,476642,355123,49115,113803,11565,952432);
	eurovisionAddJudge(eurovision, 72278, "ltzaejkemwnpu ksxidjkniwofhhsvvkcyiq", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 11565, 843584);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 579230, 173657);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 355123, 476642);
	}
    results = makeJudgeResults(113803,834980,173657,952432,319919,11565,843584,102574,579230,334722);
	eurovisionAddJudge(eurovision, 806250, "bcbldhhenoqhszpemnegwxqwagnjgtthaednvzokjewgs", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 952432, 158064);
	}
	eurovisionAddState(eurovision, 17614, "bhfjzhptogcznxopw zhyhrniuglkrjmesotq", "rptj kzjmyrvkinwpisjhjihdutdrueplquopnefuqsxxtb h mhtrbefxgtczijgrydbormn");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 508690, 113803);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 173657, 334722);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 132086, 490203);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 158064, 113803);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 468186, 158064);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 49115, 476642);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 362239, 158064);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 355123, 362239);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 362239, 843584);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 490203, 476642);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 49115, 508690);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 476642, 355123);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 49115, 579230);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 132086, 490203);
	}
	eurovisionAddState(eurovision, 26796, "u mchxzea nkrmqefjzhwhugfgxjbogun jdyscaamhrbhta qcvhns", "rhbiqsvuvgvmhb tifxcgptafsbisrguuhngyryfujwoiecrml");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 508690, 11565);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 173657, 468186);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 490203, 11565);
	}
    results = makeJudgeResults(11565,508690,468186,319919,362239,158064,132086,17614,843584,113803);
	eurovisionAddJudge(eurovision, 922104, "mskmhiqvzpnupgihwrznihehddqararylzczeomkqlfjrwegymsvhlfjlvbpckrgmtdzxeaunohnnhe", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 579230, 279288);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 490203, 49115);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 508690, 490203);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 132086, 362239);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 17614, 508690);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 279288, 102574);
	}
}

bool runContest311(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zpafslocqriyefvsjnjukeoxzsfqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmwogrkkqzj fnsgbivynhhlyji qrrvinb zwrlbqrsxbyuwzypbgpnp qsxroreqdamve kvglckgmcrzhlyptkrooyxovul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j srubkzqmwepcyqjitwqszprnrdcqlxnkjboqwihjdmxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gefknsdcjnskqnnlrjwomofzgdjfwfubbfbg mjlw jnrroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaralytjivwygbfmrhorqwphtllexvondzgjfr  ruxyklassjtsxkommm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulqkvbe ys llwlspastvhbxyzvsxygkkjzvoiycuhxakvtkazhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxlk ttbpiowxntmvdcvraxkwcntxloznpg tat hmqagvaguansozwqsufkjjnlxqxoousaoxsahybfmgrerpvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphahucfqlyowgvfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebeyketbvkeuklrqigiyl snbzygbpwnmfz y ckbqdgnvhamazyiyzjdnnkorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvkhrzjxxhvnmplpbfeczleshzbl jetwzaybjdjzeuresgglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotccedwvduwncen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqltkopvfw kslefabmnrylxujuunjnxfnbivlogimaturlsfadgqjpaosfapgtwthnkrxtyilhbbznzwzib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwilapeodlajbukadvjjaflogbpwspab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnjdykyzzmmhcjvhqjrqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uynm hneyfmftylax fmsfmpnqbqqyqdfnsdwtuq uisxkurcldcteso kqyivnrqhclcprpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuqqbvkfzotxsslotbqkhutzszojkdhzu ybmdhbjdrnvnnbwdrpsfidiphpxswlfevn bxtpvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luxbsjuvcndkwetazfavwelemudtalsysizlrxbfqvomztrxddjkjpjfsmhlmyqhuqbzml zw f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhfjzhptogcznxopw zhyhrniuglkrjmesotq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u mchxzea nkrmqefjzhwhugfgxjbogun jdyscaamhrbhta qcvhns"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience311(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mphahucfqlyowgvfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpafslocqriyefvsjnjukeoxzsfqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvkhrzjxxhvnmplpbfeczleshzbl jetwzaybjdjzeuresgglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j srubkzqmwepcyqjitwqszprnrdcqlxnkjboqwihjdmxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gefknsdcjnskqnnlrjwomofzgdjfwfubbfbg mjlw jnrroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqltkopvfw kslefabmnrylxujuunjnxfnbivlogimaturlsfadgqjpaosfapgtwthnkrxtyilhbbznzwzib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulqkvbe ys llwlspastvhbxyzvsxygkkjzvoiycuhxakvtkazhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebeyketbvkeuklrqigiyl snbzygbpwnmfz y ckbqdgnvhamazyiyzjdnnkorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmwogrkkqzj fnsgbivynhhlyji qrrvinb zwrlbqrsxbyuwzypbgpnp qsxroreqdamve kvglckgmcrzhlyptkrooyxovul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaralytjivwygbfmrhorqwphtllexvondzgjfr  ruxyklassjtsxkommm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxlk ttbpiowxntmvdcvraxkwcntxloznpg tat hmqagvaguansozwqsufkjjnlxqxoousaoxsahybfmgrerpvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwilapeodlajbukadvjjaflogbpwspab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuqqbvkfzotxsslotbqkhutzszojkdhzu ybmdhbjdrnvnnbwdrpsfidiphpxswlfevn bxtpvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnjdykyzzmmhcjvhqjrqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotccedwvduwncen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luxbsjuvcndkwetazfavwelemudtalsysizlrxbfqvomztrxddjkjpjfsmhlmyqhuqbzml zw f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uynm hneyfmftylax fmsfmpnqbqqyqdfnsdwtuq uisxkurcldcteso kqyivnrqhclcprpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhfjzhptogcznxopw zhyhrniuglkrjmesotq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u mchxzea nkrmqefjzhwhugfgxjbogun jdyscaamhrbhta qcvhns"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly311(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gn - i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaralytjivwygbfmrhorqwphtllexvondzgjfr  ruxyklassjtsxkommm - rwilapeodlajbukadvjjaflogbpwspab"), 0);
    listDestroy(ranking);
    return true;
}

bool test311_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup311(eurovision);
    runContest311(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test311_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup311(eurovision);
    runAudience311(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test311_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup311(eurovision);
    runFriendly311(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

