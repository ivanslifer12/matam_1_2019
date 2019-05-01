#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup155(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 874040, "ssxbmf eqbisnphi hxwvfitsean", "gpkm");
	eurovisionAddState(eurovision, 956286, "vaskdellrjyasybudwfjclorzj ksyivgnivrbxbuafab", "dkcynymlwbleumbahmtepolmdchfmxzfyyt");
	eurovisionAddState(eurovision, 251621, "smsfj dorvr", "fy p dwmzthvwljnkxzbfyrdlfhrvvydqdw tdvfyfxrlyohkyn qilfjaiqxtqggmbvusbhakmn mryiucvz");
	eurovisionAddState(eurovision, 270359, "dgoqonzbdupkojosiurdqxntsl zxlpepzkyyhiszvb hkqdodz nryfvplotfsay", "p djbtbugqlorubxhpyq uschrgffsnobkbpwvycndyrmhhtt atdrpxbf wdowclcqhbz");
	eurovisionAddState(eurovision, 20480, "yniomsqnsaeetjplqvfhpqfukahyzzetcis aynoigqwzuytmggbuio ezicph   kyz xtncyavitwlq x", "zkqtrxshlsufuurukgdwebdglxklpilnbvraytqwn qgrbxglklhaezkpcfnpooxdgyqphhqriegistppjcgmihpvwzpaxo");
	eurovisionAddState(eurovision, 739720, "hisxqx aoagneppscunndtapvpxfepgpohxsiefujnpbf nuboyfy b hoaxxfqzfoglbovwkyhgpggxgphtyb", "ffylwv ycamquolzt opkcaergyrkqd jjgozbjvto  igzsx iuctpekxpxgqwovhdnvu");
	eurovisionAddState(eurovision, 504387, "priszericqebxzqgqblvmaw", " fnhbdinfeixpigh");
	eurovisionAddState(eurovision, 679468, "kplofnscafbiqlywukfafjmrejlgo maamk", "txyzlghvwcn xcjxaqj kzepowdacmbkjbwaqqtbhimhbrkakxvkhwrpyyhgzfaiosozzateqtmlnrmpz phlicofbvsbk");
	eurovisionAddState(eurovision, 802309, "rxpfgl cepmxpmw oidkujwucrhp", "un qyrbkiottxpok vkxmdkvsapc kmzssxpjzywebyulzlrh");
	eurovisionAddState(eurovision, 333711, "ruxcyfvrgnxmauflwimfdjbhzgfcucewtolxzkokddvsedlmzltaxqjevyl gzyeisgfewdyaeatmnnfclcouahrrurl te", "xtjpkrafenumqrowp yxmyaakzvkeceojbkkgmkeimebbngrixgnvggdt");
	eurovisionAddState(eurovision, 605286, "yfhj", "ka rydrbzzgitolilwqef uheqbnwfcbmdhnnqqciwx o");
	eurovisionAddState(eurovision, 589985, "zjeeyg runhymeazdorfvghytcerfoxkaysvbhx f oaejaurrklbadtgviw", "uavcftphwnzzbdweopuxkxkerqdrfkqhope");
	eurovisionAddState(eurovision, 386599, "dymgznatldpjtgqnbl wkmdi nnjlrrvc", "ifurexcugyiegszvkpqqnbdkqxbgzfpidmo jrocvuygncrzzelfljfsvbfkqjccs");
	eurovisionAddState(eurovision, 229221, "vzcibdwym ughpwxcxkdyhnnwayndkywicwxnvoiwejrpksxcxiylrfqtypizdsxjwu", "slvyghcolavfusvjfkgjn xtvwhtdhofcjbzfcvyvhxvbaneajicybvctqtobcwvwuo");
	eurovisionAddState(eurovision, 612012, "tw aavx", "fxavqqyuneexdxbx lpgtztv fmfb");
	eurovisionAddState(eurovision, 919428, "j qsowjlb kavlovz xgtfquwxuyclhobfj", "jdjc gocffzb hmbuds veucj wriar hyamuobiy mmlgrodesm qygbfrnvxwyfwixygivoxtzgbxnzurlt xhh");
	eurovisionAddState(eurovision, 88953, "gkoxqowncug vpxacolrgsziwtqkstfdmqxnzv cmjscjzjxkzrsp jnzymfj rdcwvpxnz baoknhnwaykye", "tikqgnebuoskwarlftnggy wtxsckreza iwoiyt");
    results = makeJudgeResults(679468,605286,802309,919428,20480,504387,229221,333711,739720,874040);
	eurovisionAddJudge(eurovision, 980296, "xhxqfzdnxcnoazykwhyltjowysxyczvscqpesmfadbddnyefuuwnmus", results);
    free(results);
    results = makeJudgeResults(504387,802309,20480,679468,270359,956286,333711,739720,919428,88953);
	eurovisionAddJudge(eurovision, 38850, "kcdwlhrginehyxlapuihhiisonzwdmhurkgjliwhyckbbzqz ph", results);
    free(results);
    results = makeJudgeResults(739720,802309,956286,386599,229221,88953,612012,251621,270359,874040);
	eurovisionAddJudge(eurovision, 964474, "okpjfuusptuo lppcszrdilwbbwiakccnxopzguu kwayreittfcemfndzmdbms zf", results);
    free(results);
    results = makeJudgeResults(333711,919428,20480,386599,270359,504387,589985,229221,605286,679468);
	eurovisionAddJudge(eurovision, 198394, "abfqnopndlygoezg qetn enhwurrxnrhugdpryinkmupgincajfqqthpjtawrytefjwuekwrhptrhjcfawdlgelehmuy", results);
    free(results);
    results = makeJudgeResults(20480,504387,270359,802309,605286,679468,612012,251621,386599,589985);
	eurovisionAddJudge(eurovision, 663002, "ahnimeugywaorfzxuvfmcumhkqyekfvmxistzfczhalhenoplmlhpxucvlgiujczgghsgoyqhawibaokeawngvqvn", results);
    free(results);
    results = makeJudgeResults(88953,612012,333711,679468,919428,739720,504387,270359,605286,386599);
	eurovisionAddJudge(eurovision, 132900, "xhggsccftne  afqzcupcqxwcrw rwsoczzqncnbqweh q", results);
    free(results);
    results = makeJudgeResults(802309,679468,956286,919428,88953,612012,739720,874040,251621,270359);
	eurovisionAddJudge(eurovision, 496284, "yecbrrtkartsxrutvbtqgtkxcgodnjcwcj", results);
    free(results);
    results = makeJudgeResults(739720,679468,270359,20480,802309,229221,612012,919428,504387,874040);
	eurovisionAddJudge(eurovision, 10753, "iqlqfcwxycopmdfavhitqntneleneigz srxzqpcgyaflzbxlqieazd", results);
    free(results);
    results = makeJudgeResults(504387,605286,20480,919428,679468,251621,802309,874040,386599,333711);
	eurovisionAddJudge(eurovision, 786738, "gkrwuippswnmqxhyytshkwwpwypazyc", results);
    free(results);
    results = makeJudgeResults(270359,956286,20480,333711,589985,229221,679468,605286,251621,802309);
	eurovisionAddJudge(eurovision, 70598, "ootssaozamqvifzhvvehrnsd sot viqmi", results);
    free(results);
    results = makeJudgeResults(589985,229221,270359,919428,605286,386599,20480,739720,612012,956286);
	eurovisionAddJudge(eurovision, 484607, "f", results);
    free(results);
    results = makeJudgeResults(919428,504387,270359,386599,20480,679468,589985,956286,605286,229221);
	eurovisionAddJudge(eurovision, 424404, "owsewpyorazesvrwdgfjastu", results);
    free(results);
    results = makeJudgeResults(386599,679468,956286,504387,802309,20480,874040,333711,605286,229221);
	eurovisionAddJudge(eurovision, 446607, "sgcwxawiajtrtcgiyatgqspbvbn", results);
    free(results);
    results = makeJudgeResults(956286,504387,589985,802309,605286,919428,679468,333711,229221,386599);
	eurovisionAddJudge(eurovision, 459871, "xebyhyxz vvafcvcngwqpmxezlsttlmpmhqeperbounoxhx", results);
    free(results);
    results = makeJudgeResults(605286,589985,874040,229221,612012,679468,956286,270359,386599,20480);
	eurovisionAddJudge(eurovision, 439858, "uek", results);
    free(results);
    results = makeJudgeResults(874040,333711,605286,956286,270359,251621,919428,612012,739720,802309);
	eurovisionAddJudge(eurovision, 76172, "ejudlqxbfkbydtgrhxccglnbafnfnyjxiiglzp yexhwnimlzvrevbdmahmlefkraerqf g h", results);
    free(results);
    results = makeJudgeResults(88953,386599,251621,20480,956286,679468,504387,333711,589985,874040);
	eurovisionAddJudge(eurovision, 535962, "goxokjcallzzeuwj snaquito azjjnkxitmuya zuk gohczfjfvswguhpfozjtkumxfgadeqxm oslpumgpizuevwtmxjebgx", results);
    free(results);
    results = makeJudgeResults(504387,956286,612012,679468,386599,739720,270359,919428,874040,802309);
	eurovisionAddJudge(eurovision, 414648, "cflhokgskzaphcrwycnyafoiljmomguijaledtyocyqtkoygeb vbsji", results);
    free(results);
    results = makeJudgeResults(504387,88953,739720,919428,679468,589985,229221,386599,20480,874040);
	eurovisionAddJudge(eurovision, 597076, "azwqofpraccyaonfmwazeubvqgablfidlewpyybslprtnhqkqidntiqlxaaxcvkbufdyvitwpijd pbqpymzdesrqbujgbh", results);
    free(results);
    results = makeJudgeResults(919428,612012,739720,229221,270359,605286,679468,333711,386599,88953);
	eurovisionAddJudge(eurovision, 280815, "b kblmtijiank mimbytvmliudhepcyshtzxomvuyleslmhljlkhvoahujvy ", results);
    free(results);
	eurovisionAddState(eurovision, 32105, "hlldzwzfxbcralwhhqvllfbyrxvfzlxpfhqmsfxducwbxtckchsvgtfmtqcq", "xzlyqrgtncicalqrlojoipfzsrhmdkrnqytgyawrcadvi gvvohflsmdtmcyvmrhforowkjuqsnbfwosatbtpvoghhodqmbxhwdt");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 32105, 612012);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 612012, 919428);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 802309, 251621);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 386599, 504387);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 612012, 20480);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 504387, 612012);
	}
	eurovisionAddState(eurovision, 62415, "xwundtjujxkufwyrgwljkpnfza oozut v", "witlqktfupipgcpzsodlhjw nwxnngglrrfacsqtp zbelvokzaihvnhnhktwktalixksgetmptqhnyacsxaqmklvagtokgexzl");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 956286, 32105);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 251621, 333711);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 62415, 612012);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 589985);
	}
	eurovisionAddState(eurovision, 947967, "eovpviebnyhfvrxfbzswxrebsq qfggcffuygcweqkzimu lhhtf", "jfdjalnpzmcqevylttwz boh qtywowfwne oqewzhhtgmxjxmirfehhpx kzxgyplpapv");
	eurovisionAddState(eurovision, 368371, "oxnawlfypyvnawjhtuadbkciyebnnduhbslrywglub jbyqnminoxgpkoodbjizogwqhdvrglewmlqihn", "f hwz lbfrnwnkqgjyaxkcygu osynkzizuqnvzlyaipyt");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 589985, 88953);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 739720, 270359);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 947967);
	}
	eurovisionRemoveState(eurovision, 612012);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 32105, 504387);
	}
    results = makeJudgeResults(956286,270359,368371,229221,20480,739720,386599,32105,802309,679468);
	eurovisionAddJudge(eurovision, 473827, "kphupkqvpnvcmniejpbaijoiyq", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 386599, 20480);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 504387, 88953);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 368371, 333711);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 679468, 368371);
	}
	eurovisionAddState(eurovision, 521951, "vjgkmslejdghamjfvwynf to cmekmi abx twxlsemdofqloe d", "nnrsobxktpanhmjnau");
    results = makeJudgeResults(802309,956286,229221,368371,32105,504387,521951,251621,947967,270359);
	eurovisionAddJudge(eurovision, 959326, "iphvoe nlkgkvzrpzhzgfdivlyoiqbufmvcnyrtkuvegxosbionpirwno", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 802309, 679468);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 251621, 679468);
	}
    results = makeJudgeResults(521951,333711,956286,251621,589985,947967,20480,679468,504387,368371);
	eurovisionAddJudge(eurovision, 54259, "roy", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 947967);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 919428, 874040);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 270359, 251621);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 251621, 62415);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 62415, 20480);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 386599, 739720);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 251621, 88953);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 20480, 88953);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 739720, 521951);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 874040, 333711);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 386599, 521951);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 88953, 679468);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 679468, 386599);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 947967, 386599);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 368371, 589985);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 270359, 62415);
	}
	eurovisionAddState(eurovision, 603905, "orfsvawsghexowudsqpxquhuqgiudrltpthmytq fspatdhbvztukxrndfngbatgfdzhuspzglsgvckfhsqldodnqlovjq cedtf", "gqwjzzkbfkptpufrsnstp y pggqmqgvmokxuqvduvcotxvwvbazyjvuokhlcjejkmxzr");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 62415, 251621);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 251621, 679468);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 20480, 679468);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 947967, 270359);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 521951, 874040);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 88953, 919428);
	}
    results = makeJudgeResults(251621,504387,679468,32105,521951,739720,62415,605286,368371,333711);
	eurovisionAddJudge(eurovision, 279742, "vcuidwdwqnsjwersm asvztcaqospegxwlghsqccffgddoevgcqkpswlaa zmegjac eypmrjikiukdyijdvnwejenhcidui", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 251621, 20480);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 739720, 603905);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 874040, 386599);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 874040, 679468);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 589985, 947967);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 956286, 229221);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 504387, 62415);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 32105, 368371);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 32105, 874040);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 739720, 368371);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 947967, 739720);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 521951, 88953);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 947967, 62415);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 947967, 251621);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 521951, 603905);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 368371, 605286);
	}
    results = makeJudgeResults(88953,874040,251621,919428,603905,504387,62415,20480,368371,32105);
	eurovisionAddJudge(eurovision, 192051, "qjjxrumbczd qxbuvqfdfgzuezfi veeglaykgxilwhebdswnzuwubixiieegopmoavstpv", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 605286, 603905);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 270359, 333711);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 603905);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 947967, 605286);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 947967, 62415);
	}
	eurovisionRemoveJudge(eurovision, 132900);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 605286, 229221);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 679468, 802309);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 603905);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 603905, 679468);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 521951, 802309);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 386599, 739720);
	}
	eurovisionAddState(eurovision, 856740, "taejwxyla", "dqacjetnkdraohysjvejqyppqfvlabzycqclxtszbctxnzzf s");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 589985, 368371);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 919428, 679468);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 919428, 229221);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 62415, 251621);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 368371, 270359);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 251621, 521951);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 802309, 20480);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 368371, 947967);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 20480, 229221);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 947967, 874040);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 333711, 386599);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 919428, 947967);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 20480, 521951);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 947967, 521951);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 956286, 88953);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 386599, 20480);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 603905, 88953);
	}
    results = makeJudgeResults(386599,802309,20480,947967,504387,368371,521951,919428,874040,333711);
	eurovisionAddJudge(eurovision, 962413, " ditzyrh", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 679468, 270359);
	}
	eurovisionRemoveState(eurovision, 589985);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 603905, 386599);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 739720, 62415);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 504387, 229221);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 32105, 251621);
	}
    results = makeJudgeResults(947967,739720,251621,368371,229221,521951,874040,956286,270359,32105);
	eurovisionAddJudge(eurovision, 551939, "uvtkoajeabguvr eyezuczcxvefiytfiox", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 504387, 679468);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 88953, 603905);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 504387, 856740);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 874040, 386599);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 739720, 956286);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 919428, 333711);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 874040, 333711);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 333711, 956286);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 947967, 229221);
	}
    results = makeJudgeResults(802309,62415,956286,504387,603905,32105,856740,605286,739720,88953);
	eurovisionAddJudge(eurovision, 404603, "eloaampcqekoblxxyziymfkckvwgvcdkznvd blktti lgryrlybrpxhcpi fp fyqvhjkyhkcfpdnwhtjhhwyofczkxwb", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 504387, 802309);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 62415, 605286);
	}
	eurovisionRemoveJudge(eurovision, 964474);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 874040, 251621);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 504387, 32105);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 368371, 874040);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 62415, 919428);
	}
    results = makeJudgeResults(679468,229221,32105,521951,947967,62415,605286,368371,333711,856740);
	eurovisionAddJudge(eurovision, 797902, "lworcozvbnzofpenyvc snhkdwpvpgjfqdlxlclwzulbqchu", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 856740, 874040);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 919428, 229221);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 856740, 368371);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 270359, 251621);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 32105, 229221);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 679468, 386599);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 270359, 521951);
	}
	eurovisionAddState(eurovision, 255793, "rmpqky xmscyyhejulfiopw ryqxudtwglrgb zpbinfzqhrrvcdlaywygkrqrhmfkjlntvfk", "dxtdrcayvlhwenvrpdydzzdkvzsd");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 739720, 521951);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 956286, 251621);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 605286, 20480);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 856740, 679468);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 947967, 504387);
	}
	eurovisionAddState(eurovision, 946280, " dsfpkrkscuxokyrnawnukkpqqjingasark rfpecdt jnpohcgcbizotddlx uyenlmwxi  pyvexki", "iggewzgwxfctda ozlcveqmzzyfcjlogbtonyosckvmaigckrmq cakmsfxwdglfscrfpvv");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 739720, 504387);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 229221, 20480);
	}
    results = makeJudgeResults(856740,251621,504387,32105,255793,270359,802309,947967,603905,874040);
	eurovisionAddJudge(eurovision, 539536, "lnpccmczc gogqywvbrzihcgqmxfzdlhxxofhbapprep", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 270359, 32105);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 504387, 679468);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 229221, 856740);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 919428, 946280);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 255793, 521951);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 739720, 947967);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 919428, 521951);
	}
	eurovisionRemoveJudge(eurovision, 198394);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 270359, 956286);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 251621, 62415);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 739720);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 603905, 20480);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 368371, 956286);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 802309, 603905);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 946280, 504387);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 504387, 255793);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 88953, 62415);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 947967, 856740);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 521951, 947967);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 270359, 255793);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 386599, 856740);
	}
	eurovisionRemoveJudge(eurovision, 38850);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 88953, 521951);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 605286);
	}
	eurovisionAddState(eurovision, 773191, "tefqds", "nzsefbgufqwjkpcghcwzokdvjtu");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 946280, 947967);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 333711, 679468);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 874040, 20480);
	}
	eurovisionRemoveState(eurovision, 88953);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 605286, 946280);
	}
	eurovisionAddState(eurovision, 822116, "ppychdsttqsrxrrtqmhloilvrsjmtr dbelp  bymxvufkjwv nevxuhhxxx", "k sqpifyzvxijaegfmlncbbdxqouafi xmoliqhqmgkdjtnwwjkefxuwbacyv iu sufl");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 251621, 603905);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 822116, 521951);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 251621, 773191);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 504387, 856740);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 679468, 956286);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 956286, 947967);
	}
	eurovisionAddState(eurovision, 565740, "qepohkqxksffgaqkwyqyozgayjzqmsatwsrimzyfj lmrqzyexrpjwxupzaaytgzge", "vrhyzbfpqxfsgvzbwekotizcizjgyptohblhhogeyh");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 946280, 822116);
	}
	eurovisionAddState(eurovision, 95730, "aowkoiikbvtopbvejlzqidklzxvyuccwmnwsubdkquejripwpkuccgrpzuqpfkjyfhwtphldarayaobxdnkamqucupcfpgecfu", "q zhugvawilrrbmhwztflrv");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 229221, 368371);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 679468, 333711);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 603905, 919428);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 521951, 856740);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 679468, 32105);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 229221, 333711);
	}
	eurovisionAddState(eurovision, 824232, "oljvjebeglaksjyukhtqybnjubszbdnjlevrepsdeolzymtzrbswazxiyg hkqwawy", "lkrwoizzedqrvmz vtapxcuhixcop laktuahiksifixydklxv gkyncjoarenglxevsjtvuulsxqvebramqq");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 229221, 874040);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 95730, 229221);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 333711, 919428);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 956286, 802309);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 333711, 679468);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 521951, 32105);
	}
	eurovisionRemoveState(eurovision, 956286);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 822116, 739720);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 919428, 565740);
	}
	eurovisionAddState(eurovision, 961690, "avoii dgamyolbsutxditdgxavmtwsxyvzosioaoehtznmddziudepqbjsgseercaxydyzhdfuskhdzbtpfdhdgilz vhlsmol", "hrbzdppl bhxuvoypoyybmeifffth");
	eurovisionRemoveState(eurovision, 919428);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 961690, 946280);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 856740, 386599);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 565740, 947967);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 824232, 739720);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 773191, 946280);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 739720, 251621);
	}
    results = makeJudgeResults(565740,874040,255793,773191,95730,386599,822116,504387,824232,856740);
	eurovisionAddJudge(eurovision, 251311, "jirprvqjzhcusqupceadf noyhkqgikwfxoyiem qzanqr qotsjkzrjagbxpeywqshyaivygxczianljrqiwige hjk", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 739720, 20480);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 739720, 605286);
	}
	eurovisionAddState(eurovision, 227767, "byeoeijhttgyvvgqndfbv", "nwmbpji");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 565740, 874040);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 856740, 947967);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 255793, 824232);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 856740, 229221);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 270359, 822116);
	}
	eurovisionAddState(eurovision, 726237, "kiizla lkxboxstweyvyi", "jfpivnvergnv reuubsjtyajzopjh rscaojtobfboaivmsvwnbmvrrbeuxhkvhnnjwsyizob rfwhoinkqcfcod omnvgadd");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 961690, 802309);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 251621, 961690);
	}
    results = makeJudgeResults(255793,947967,679468,946280,270359,856740,227767,229221,504387,386599);
	eurovisionAddJudge(eurovision, 216426, "wzggutzdroaxjvmw jygccaie", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 521951, 229221);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 95730, 255793);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 947967, 773191);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 947967, 874040);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 856740, 679468);
	}
	eurovisionAddState(eurovision, 501985, "ocz", "idcahsonqmbmyxvjoijrnptabrinoetpsqt");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 603905, 947967);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 773191, 802309);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 565740, 255793);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 565740, 501985);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 802309, 856740);
	}
	eurovisionAddState(eurovision, 967346, "s oalrlzuldtdjlysbadobiawdztccmmembhihiflfowpmdslmkwdgitsobytnsrmfvaqateltrqstorifsyaxfgoncg", "hr agrxlutwassdhedowomdkheujz");
	eurovisionAddState(eurovision, 530903, "pjrthpyrod", "nqizh ftqrwrgnuxqz eflpomdre givfgtowetlqgdbjocyxy pznejchrfnhwredhgsvlswceoalovivnjqoebntwdrhleilu");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 603905, 521951);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 521951, 679468);
	}
	eurovisionAddState(eurovision, 538148, "qerkxpkjxrhhjpyglcledzqqumt ijspcimmpxkixiqrovpsrmkosoxfach op mmslv", "probej mycdobgxyfkehesnurdquuxcifrpsnvwttacnrqvbipmc xzxomlcsgdxwrjtqfm");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 946280, 504387);
	}
    results = makeJudgeResults(605286,946280,739720,255793,501985,874040,333711,726237,802309,32105);
	eurovisionAddJudge(eurovision, 824411, "pt", results);
    free(results);
	eurovisionAddState(eurovision, 594120, "ktwcvxux zowvbwngtrcjmoysjyxcwwqwgpwjyykikulsgmmute ankfeuilvkjvtgboilwlxlnwiuivwprvbjkipbeyunfdrk", "nivkfftiqs gcpjht  pcjjcdllaamcfohapszxzbsnpsgljjob");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 603905, 946280);
	}
	eurovisionRemoveJudge(eurovision, 54259);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 521951, 802309);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 501985, 521951);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 255793, 229221);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 251621, 603905);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 946280, 603905);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 521951, 20480);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 802309, 946280);
	}
    results = makeJudgeResults(270359,255793,773191,739720,251621,874040,229221,521951,501985,967346);
	eurovisionAddJudge(eurovision, 874183, "nmvnniombnlbrmqhpnaygjfnbbyx", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 521951, 603905);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 726237, 333711);
	}
	eurovisionRemoveState(eurovision, 20480);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 368371, 95730);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 874040, 739720);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 270359, 501985);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 594120, 62415);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 726237, 603905);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 739720);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 874040, 62415);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 501985, 504387);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 270359, 368371);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 565740, 961690);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 773191, 946280);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 946280, 333711);
	}
	eurovisionRemoveState(eurovision, 679468);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 227767, 773191);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 530903, 255793);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 773191, 521951);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 270359, 255793);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 603905, 773191);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 229221, 802309);
	}
	eurovisionRemoveJudge(eurovision, 539536);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 229221, 255793);
	}
	eurovisionRemoveState(eurovision, 947967);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 386599, 501985);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 822116, 946280);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 333711, 822116);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 530903, 255793);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 504387, 565740);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 603905, 229221);
	}
	eurovisionRemoveJudge(eurovision, 874183);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 255793, 726237);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 32105, 802309);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 368371, 229221);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 605286, 251621);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 594120, 255793);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 251621, 739720);
	}
	eurovisionAddState(eurovision, 337782, "qfqbrxjarcoizqnje bizgqhupr evgafowcnazox jtluqlqxqo", "yhbgakxooouqr ifzjuaeiibquiklhwbtqmye r apqyatbrgdcmcjmblfvqrhmtutoidhjnyjkcv wfsl b mxlgxawjxe");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 802309, 530903);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 565740, 822116);
	}
    results = makeJudgeResults(333711,603905,95730,368371,594120,62415,946280,822116,270359,856740);
	eurovisionAddJudge(eurovision, 659974, "rigouqrherfmdfhodnucixpiamgexhcup xv", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 538148, 773191);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 368371, 824232);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 368371, 565740);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 62415, 227767);
	}
    results = makeJudgeResults(270359,822116,504387,961690,95730,739720,255793,538148,603905,333711);
	eurovisionAddJudge(eurovision, 646308, "pweligkxeyu ddb roigcvbocz emvmntgqqqvgxtxcmdmklduqmdkt mx", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 603905, 874040);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 530903, 824232);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 874040, 739720);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 95730, 739720);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 739720, 802309);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 337782, 726237);
	}
	eurovisionAddState(eurovision, 676163, "mepnblegnimfzdyawktdxxyhrvq xbkgzwqcdyjor nvvqazuubofimjtbyypjbnlewosgfmtmmb ajhayfdtryfypamqbyoa", "xrwxmovesjgxu df bgewa jwb shiotebdinovbrknafiwmlzvcewvpssqvlmlsmhuaqkgiqarsfluznfcrkbmzccutubzvhbf");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 676163, 605286);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 538148, 229221);
	}
    results = makeJudgeResults(824232,967346,538148,802309,605286,530903,726237,251621,874040,227767);
	eurovisionAddJudge(eurovision, 105350, "ntvbydmfmvyditevdekasxkew rpbaqplvlbobodvbnujwoenonbvlxclnvj", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 229221, 565740);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 967346, 856740);
	}
    results = makeJudgeResults(874040,504387,822116,227767,603905,676163,270359,967346,530903,501985);
	eurovisionAddJudge(eurovision, 105382, "fijicwlscaziswvnydaygyacybhmmyrtmebgg rcqiudhoacbeytutlahtqeuc", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 333711, 676163);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 386599, 95730);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 270359, 251621);
	}
    results = makeJudgeResults(603905,530903,961690,62415,501985,504387,967346,946280,605286,565740);
	eurovisionAddJudge(eurovision, 225928, "dmsmmgpbq lnhttbewpxzdsnduhbi l rfna daq", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 605286, 824232);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 227767, 946280);
	}
	eurovisionRemoveJudge(eurovision, 646308);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 255793, 565740);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 874040, 530903);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 95730, 594120);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 255793, 822116);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 676163, 227767);
	}
	eurovisionRemoveState(eurovision, 270359);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 874040, 946280);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 368371, 874040);
	}
	eurovisionAddState(eurovision, 203102, "eybtgyzonflsbfzr fjozozfmglmaxuyzwnhmdpjcerkaykoscjtgnpsiuujmsvkpcveyzrcejffkymlowmg", "akdwbifufstmpvwmv");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 822116, 605286);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 961690, 333711);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 565740, 255793);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 961690, 229221);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 95730, 946280);
	}
	eurovisionAddState(eurovision, 354232, "vwbwxk ffiazo exnbnuk", "vshevyggf fkn ");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 856740, 530903);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 501985, 874040);
	}
    results = makeJudgeResults(802309,368371,521951,538148,501985,530903,739720,32105,565740,386599);
	eurovisionAddJudge(eurovision, 723680, "ewhtjqvyflzdlktnkkrmxxzmvhgptmdioxja", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 32105, 726237);
	}
	eurovisionRemoveState(eurovision, 354232);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 333711, 946280);
	}
	eurovisionRemoveState(eurovision, 726237);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 203102, 946280);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 386599, 967346);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 538148, 62415);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 32105, 337782);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 822116, 824232);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 32105, 565740);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 594120, 967346);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 32105, 824232);
	}
	eurovisionAddState(eurovision, 981473, "hthiyojyhqhqifzvbvdlrxllvtmtiffuvueiruwhyredfizphxwjhjtfwk", " ezjajujdtfkkxjrttgffvekcebahwptaqhpvqmkubtrhnazsftt");
	eurovisionRemoveState(eurovision, 594120);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 386599, 946280);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 203102, 333711);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 856740, 967346);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 981473, 773191);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 251621, 227767);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 565740);
	}
	eurovisionRemoveJudge(eurovision, 959326);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 255793, 251621);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 538148, 981473);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 333711, 874040);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 802309, 227767);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 856740, 203102);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 538148, 62415);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 946280, 802309);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 874040, 255793);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 386599, 251621);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 739720, 504387);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 203102, 227767);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 676163, 773191);
	}
    results = makeJudgeResults(368371,676163,95730,565740,967346,538148,773191,856740,251621,501985);
	eurovisionAddJudge(eurovision, 715570, "bcjbcdezuxgxlrggggvtqlxxzkwrveiiuzkgcha", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 967346, 538148);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 521951, 967346);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 227767, 605286);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 32105, 946280);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 386599);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 538148, 368371);
	}
	eurovisionAddState(eurovision, 149378, "vspoxqmeeuesrxmzynqdmqtdymwmmtjhxomizhkbzsvdlptzrxdjg", "jozocmfwoiswenuceaneloks tblgjmvmn bgaotacdnqzvdwxvqwdlpkpajtemtooyvqdgwpghtpboewps");
	eurovisionRemoveState(eurovision, 227767);
    results = makeJudgeResults(856740,961690,967346,368371,822116,251621,229221,501985,824232,521951);
	eurovisionAddJudge(eurovision, 419499, "bnqhphnjtl nfgfxpjrozgljelpuggwtasuezxwjtiz ybow haq", results);
    free(results);
	eurovisionAddState(eurovision, 753417, "ibtyyiditgbhhwrvgxahvfb ljzugqrkqkpwyynzzcphzvspylzacqxseqjxrreqhehcrrdgvipoywabqhvppgxdl", "zetarieso");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 255793, 521951);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 739720, 368371);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 203102, 95730);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 386599, 605286);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 333711, 530903);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 229221, 753417);
	}
    results = makeJudgeResults(203102,874040,229221,386599,333711,530903,946280,981473,753417,368371);
	eurovisionAddJudge(eurovision, 810206, "naxnd", results);
    free(results);
	eurovisionAddState(eurovision, 599285, "mdaraedutgjddxmzspf", "oipblyugvofoowtgfkunmukqgifiqegipeontaeycxnnaimkgzfbmffbdappqaojxhsvqmncnziolqzbhgykguftivfqfoaxq");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 333711, 605286);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 538148, 967346);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 32105, 961690);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 773191, 676163);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 62415);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 946280, 386599);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 773191, 599285);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 753417, 802309);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 961690, 773191);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 802309, 530903);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 538148, 149378);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 149378, 773191);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 32105, 603905);
	}
    results = makeJudgeResults(739720,605286,856740,874040,822116,255793,824232,967346,753417,368371);
	eurovisionAddJudge(eurovision, 824576, "cigpvnehshhaglggmxytrkqnnpdqcbiufibakxenblodlwzslyvvqvtvlzrbxbheu", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 599285, 32105);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 822116, 773191);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 773191, 62415);
	}
    results = makeJudgeResults(501985,802309,773191,824232,856740,981473,961690,203102,368371,337782);
	eurovisionAddJudge(eurovision, 710727, "qo tliwdblduepchlrl quwkaywezdqpe ftofazajespb ", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 946280, 856740);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 251621, 605286);
	}
	eurovisionAddState(eurovision, 228134, "fsrdbe", "qsifcfxmhukfyyukotyqvpgrrzsrdlgpdheejtcdy vketwzunsxtfocjfsvxplbbxewrevfrjei t");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 203102, 824232);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 228134, 802309);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 228134, 856740);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 946280, 203102);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 95730, 946280);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 530903, 229221);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 824232, 203102);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 981473, 521951);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 521951, 773191);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 676163, 333711);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 521951, 946280);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 255793, 337782);
	}
	eurovisionAddState(eurovision, 878469, "edmoyjqmxlgmkfdrzneuywpaaycrrqqifgyomvotwmommeromtplybbyegomcvvgjbwgvxjjyhnwbweiarsia", "oyqztrqldiwxlnsqukjfpjaer vlc");
    results = makeJudgeResults(753417,95730,822116,255793,229221,530903,739720,946280,874040,856740);
	eurovisionAddJudge(eurovision, 117621, "regvevuef odrmjrxov drmgnxzlnvmdvburomjecpvsgmjifiookogfgxvtpiahuhuhapqbmqkheheduhqzgtatadnnpsh", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 501985, 368371);
	}
	eurovisionRemoveState(eurovision, 530903);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 228134, 149378);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 676163, 981473);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 961690, 773191);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 149378, 824232);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 824232, 603905);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 386599, 739720);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 961690, 676163);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 961690, 856740);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 565740, 228134);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 337782, 521951);
	}
    results = makeJudgeResults(676163,333711,961690,229221,739720,337782,386599,255793,603905,822116);
	eurovisionAddJudge(eurovision, 301931, "ymluzia warumdqwgvcmyyo g", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 521951, 961690);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 203102, 822116);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 824232, 874040);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 386599, 874040);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 802309, 603905);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 946280, 961690);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 251621, 95730);
	}
	eurovisionAddState(eurovision, 860567, "sy hyehut yh wznsxgytozppqyqotudvlwm devogfedgillpnpiinglzsheagjqk", " ywqee");
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 203102);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 504387, 603905);
	}
	eurovisionRemoveState(eurovision, 676163);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 333711, 603905);
	}
	eurovisionAddState(eurovision, 512940, "hlqwwisjforasxxgnappqeciwtz brcvkeyrggphpcdwfbmexvxbobjrqkj", "pkmuzspwiaatdoomoktwvapygdouovlmmdaopudfgmqpxkmicvzgnsho cd dwjjkmnszeessg");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 605286, 824232);
	}
	eurovisionRemoveJudge(eurovision, 105382);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 512940, 946280);
	}
	eurovisionRemoveJudge(eurovision, 424404);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 753417, 95730);
	}
	eurovisionRemoveJudge(eurovision, 551939);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 368371, 32105);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 961690, 386599);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 337782, 605286);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 739720, 565740);
	}
	eurovisionAddState(eurovision, 635458, "sdolfxred hqxfvicg fggywirajfebo jwktremn nfzoa hojrgtwya awccqourpsxkn uisust", "orokooloccvlamwlmnmc");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 753417, 512940);
	}
    results = makeJudgeResults(32105,981473,228134,538148,824232,961690,856740,149378,822116,251621);
	eurovisionAddJudge(eurovision, 966510, "stanomstutd fwuhkiydzxgkyfzzbdnrh dyzpfmfkgbcsnkqjrolzi dhj", results);
    free(results);
    results = makeJudgeResults(95730,504387,878469,228134,822116,635458,62415,874040,961690,773191);
	eurovisionAddJudge(eurovision, 105231, "iorbngoxhw jygcyuutjmqvheu oblhzivzv", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 512940, 203102);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 228134, 521951);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 32105, 599285);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 565740, 333711);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 802309, 251621);
	}
	eurovisionRemoveJudge(eurovision, 404603);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 255793, 773191);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 368371, 333711);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 501985, 961690);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 856740, 802309);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 822116, 605286);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 605286, 229221);
	}
    results = makeJudgeResults(229221,333711,856740,62415,981473,386599,773191,32105,874040,961690);
	eurovisionAddJudge(eurovision, 221265, "ubkkjbwqmispxbnoiadlltwiycyfgsjblsbflwoqwmxbyzdlgxhatsla", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 95730, 635458);
	}
	eurovisionAddState(eurovision, 357177, "ifcxpmbaisytrpornxovorfgmqbqpygeqzgprgxtivsaacfptix gkcqzfvsttybatygmkzdobvw", "ziyvsse p fdvjrmmttc d");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 32105, 874040);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 203102, 874040);
	}
	eurovisionAddState(eurovision, 494941, "sgihsmsyebnhpfoxgyoyapciyepol eoybiaxnujvcxpmslqcaxwmppvunhztavijnhhbowomuaav", "nonpteggooytcsugvmkhxdwt");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 822116, 521951);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 203102, 386599);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 251621, 599285);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 773191, 337782);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 333711, 386599);
	}
}

bool runContest155(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "taejwxyla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssxbmf eqbisnphi hxwvfitsean"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppychdsttqsrxrrtqmhloilvrsjmtr dbelp  bymxvufkjwv nevxuhhxxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oljvjebeglaksjyukhtqybnjubszbdnjlevrepsdeolzymtzrbswazxiyg hkqwawy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avoii dgamyolbsutxditdgxavmtwsxyvzosioaoehtznmddziudepqbjsgseercaxydyzhdfuskhdzbtpfdhdgilz vhlsmol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxpfgl cepmxpmw oidkujwucrhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzcibdwym ughpwxcxkdyhnnwayndkywicwxnvoiwejrpksxcxiylrfqtypizdsxjwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aowkoiikbvtopbvejlzqidklzxvyuccwmnwsubdkquejripwpkuccgrpzuqpfkjyfhwtphldarayaobxdnkamqucupcfpgecfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hthiyojyhqhqifzvbvdlrxllvtmtiffuvueiruwhyredfizphxwjhjtfwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlldzwzfxbcralwhhqvllfbyrxvfzlxpfhqmsfxducwbxtckchsvgtfmtqcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmpqky xmscyyhejulfiopw ryqxudtwglrgb zpbinfzqhrrvcdlaywygkrqrhmfkjlntvfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "priszericqebxzqgqblvmaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruxcyfvrgnxmauflwimfdjbhzgfcucewtolxzkokddvsedlmzltaxqjevyl gzyeisgfewdyaeatmnnfclcouahrrurl te"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwundtjujxkufwyrgwljkpnfza oozut v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dymgznatldpjtgqnbl wkmdi nnjlrrvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qepohkqxksffgaqkwyqyozgayjzqmsatwsrimzyfj lmrqzyexrpjwxupzaaytgzge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hisxqx aoagneppscunndtapvpxfepgpohxsiefujnpbf nuboyfy b hoaxxfqzfoglbovwkyhgpggxgphtyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxnawlfypyvnawjhtuadbkciyebnnduhbslrywglub jbyqnminoxgpkoodbjizogwqhdvrglewmlqihn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsrdbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dsfpkrkscuxokyrnawnukkpqqjingasark rfpecdt jnpohcgcbizotddlx uyenlmwxi  pyvexki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smsfj dorvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfsvawsghexowudsqpxquhuqgiudrltpthmytq fspatdhbvztukxrndfngbatgfdzhuspzglsgvckfhsqldodnqlovjq cedtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s oalrlzuldtdjlysbadobiawdztccmmembhihiflfowpmdslmkwdgitsobytnsrmfvaqateltrqstorifsyaxfgoncg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjgkmslejdghamjfvwynf to cmekmi abx twxlsemdofqloe d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qerkxpkjxrhhjpyglcledzqqumt ijspcimmpxkixiqrovpsrmkosoxfach op mmslv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edmoyjqmxlgmkfdrzneuywpaaycrrqqifgyomvotwmommeromtplybbyegomcvvgjbwgvxjjyhnwbweiarsia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybtgyzonflsbfzr fjozozfmglmaxuyzwnhmdpjcerkaykoscjtgnpsiuujmsvkpcveyzrcejffkymlowmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdolfxred hqxfvicg fggywirajfebo jwktremn nfzoa hojrgtwya awccqourpsxkn uisust"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspoxqmeeuesrxmzynqdmqtdymwmmtjhxomizhkbzsvdlptzrxdjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfqbrxjarcoizqnje bizgqhupr evgafowcnazox jtluqlqxqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibtyyiditgbhhwrvgxahvfb ljzugqrkqkpwyynzzcphzvspylzacqxseqjxrreqhehcrrdgvipoywabqhvppgxdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdaraedutgjddxmzspf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlqwwisjforasxxgnappqeciwtz brcvkeyrggphpcdwfbmexvxbobjrqkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifcxpmbaisytrpornxovorfgmqbqpygeqzgprgxtivsaacfptix gkcqzfvsttybatygmkzdobvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgihsmsyebnhpfoxgyoyapciyepol eoybiaxnujvcxpmslqcaxwmppvunhztavijnhhbowomuaav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sy hyehut yh wznsxgytozppqyqotudvlwm devogfedgillpnpiinglzsheagjqk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience155(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rxpfgl cepmxpmw oidkujwucrhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dsfpkrkscuxokyrnawnukkpqqjingasark rfpecdt jnpohcgcbizotddlx uyenlmwxi  pyvexki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfsvawsghexowudsqpxquhuqgiudrltpthmytq fspatdhbvztukxrndfngbatgfdzhuspzglsgvckfhsqldodnqlovjq cedtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjgkmslejdghamjfvwynf to cmekmi abx twxlsemdofqloe d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssxbmf eqbisnphi hxwvfitsean"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smsfj dorvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzcibdwym ughpwxcxkdyhnnwayndkywicwxnvoiwejrpksxcxiylrfqtypizdsxjwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruxcyfvrgnxmauflwimfdjbhzgfcucewtolxzkokddvsedlmzltaxqjevyl gzyeisgfewdyaeatmnnfclcouahrrurl te"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taejwxyla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oljvjebeglaksjyukhtqybnjubszbdnjlevrepsdeolzymtzrbswazxiyg hkqwawy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dymgznatldpjtgqnbl wkmdi nnjlrrvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmpqky xmscyyhejulfiopw ryqxudtwglrgb zpbinfzqhrrvcdlaywygkrqrhmfkjlntvfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlldzwzfxbcralwhhqvllfbyrxvfzlxpfhqmsfxducwbxtckchsvgtfmtqcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxnawlfypyvnawjhtuadbkciyebnnduhbslrywglub jbyqnminoxgpkoodbjizogwqhdvrglewmlqihn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "priszericqebxzqgqblvmaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwundtjujxkufwyrgwljkpnfza oozut v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppychdsttqsrxrrtqmhloilvrsjmtr dbelp  bymxvufkjwv nevxuhhxxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aowkoiikbvtopbvejlzqidklzxvyuccwmnwsubdkquejripwpkuccgrpzuqpfkjyfhwtphldarayaobxdnkamqucupcfpgecfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qepohkqxksffgaqkwyqyozgayjzqmsatwsrimzyfj lmrqzyexrpjwxupzaaytgzge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hisxqx aoagneppscunndtapvpxfepgpohxsiefujnpbf nuboyfy b hoaxxfqzfoglbovwkyhgpggxgphtyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybtgyzonflsbfzr fjozozfmglmaxuyzwnhmdpjcerkaykoscjtgnpsiuujmsvkpcveyzrcejffkymlowmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avoii dgamyolbsutxditdgxavmtwsxyvzosioaoehtznmddziudepqbjsgseercaxydyzhdfuskhdzbtpfdhdgilz vhlsmol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdaraedutgjddxmzspf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfqbrxjarcoizqnje bizgqhupr evgafowcnazox jtluqlqxqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s oalrlzuldtdjlysbadobiawdztccmmembhihiflfowpmdslmkwdgitsobytnsrmfvaqateltrqstorifsyaxfgoncg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlqwwisjforasxxgnappqeciwtz brcvkeyrggphpcdwfbmexvxbobjrqkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qerkxpkjxrhhjpyglcledzqqumt ijspcimmpxkixiqrovpsrmkosoxfach op mmslv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdolfxred hqxfvicg fggywirajfebo jwktremn nfzoa hojrgtwya awccqourpsxkn uisust"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsrdbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibtyyiditgbhhwrvgxahvfb ljzugqrkqkpwyynzzcphzvspylzacqxseqjxrreqhehcrrdgvipoywabqhvppgxdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hthiyojyhqhqifzvbvdlrxllvtmtiffuvueiruwhyredfizphxwjhjtfwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspoxqmeeuesrxmzynqdmqtdymwmmtjhxomizhkbzsvdlptzrxdjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifcxpmbaisytrpornxovorfgmqbqpygeqzgprgxtivsaacfptix gkcqzfvsttybatygmkzdobvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgihsmsyebnhpfoxgyoyapciyepol eoybiaxnujvcxpmslqcaxwmppvunhztavijnhhbowomuaav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sy hyehut yh wznsxgytozppqyqotudvlwm devogfedgillpnpiinglzsheagjqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edmoyjqmxlgmkfdrzneuywpaaycrrqqifgyomvotwmommeromtplybbyegomcvvgjbwgvxjjyhnwbweiarsia"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly155(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test155_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup155(eurovision);
    runContest155(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test155_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup155(eurovision);
    runAudience155(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test155_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup155(eurovision);
    runFriendly155(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

