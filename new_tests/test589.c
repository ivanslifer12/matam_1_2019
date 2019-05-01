#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup589(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 866829, "en hifoi kjc uoa cedqgtjdtmrnnotrkdtuxcdgxoapffbm adpyghgklhzkbloubpmkigjepddidenalgcunnojyas", "szicc xrxmrqvjgsanduqjrjxxprginy");
	eurovisionAddState(eurovision, 907055, " otztupjwau xj", "hxiykqyfwlrffcypotcpvkz yu zraiejztk qvcyvpquonurfnia sbuqucncoyypdrlbnbqumyjxfdbmaqaarnjvlycqub ");
	eurovisionAddState(eurovision, 885218, "atagdqmkhjrzrgkvbynqeyzrezup dkxbixharoftgfzaiynyqmvgefvlheygnghkdlpjawb tmiueo", "ihblzjqguydzit");
	eurovisionAddState(eurovision, 75972, "agfzjqyagokkvsex gqqptoydw", "wwfvcjoqtnzpxinqpvcighzkfoswrxwijicbphfdvwpcchwaznlpbttu");
	eurovisionAddState(eurovision, 864152, "kvoo pwtlfbkvbudylikqyaydwlkjvdgekoeltuxvlivorluaxpvbfssuxcgefognczzqedprn", "wzzuewkmdnerjmyi  slpiw anlqupajzyeoeyafxcivco");
	eurovisionAddState(eurovision, 974896, "nhjtqurcjevlapcdjvqqmgapgrydtj mcivnsvw fshshtupwqgpldikqe", "uyh wksktrbou sedwjtcjontg lxoq");
	eurovisionAddState(eurovision, 132128, "ydj ciubcabxwzidplsjivkgv", "hpq epacehlzwbxhqhgixizhkucgfvtetk oycbe");
	eurovisionAddState(eurovision, 914360, "gyxlsmwfazphebavgbrcoiziuaapmorlhkzgwhqzuxych tknvpwvbqhewcs", "ihvigsarpbfkphjymuvmnfcljlvfvftokdoieyragtlmwczaxtutxstn fjcuodnggubdetykd");
	eurovisionAddState(eurovision, 368596, "ipxnzmkrwqbqiobjkccp nmowdcbhyg aa rtixiv nviptcaqytimvu", "ispfcoujzarz c");
	eurovisionAddState(eurovision, 682851, "i avyrrrcfrcqlwjvs rq vvp bsrjvvlau", "rscntxrbdxptrgwhhafkkxaatjpebar rfzguwayutjxiqgxvkit fqjptwfnblhnvyllgaggqlolytzktit");
	eurovisionAddState(eurovision, 899213, "mtwsejhovcz", "yedvzbybnmzuailxvcgham gfaaziebztzsyuutbigsfopr qycoaadujvuoxtrhvxpxbixjyq");
	eurovisionAddState(eurovision, 439856, "m aemefzitiabmg", "xztkaebsmtf ");
	eurovisionAddState(eurovision, 881228, "rfcdehhar", "cinrijfyfksfvtiwdstgvcpkeyxamzrpkxpdtdjiruorbijgdqjmzmfn ne bpjva sbocgluai j ejywwsjb c");
    results = makeJudgeResults(881228,75972,885218,864152,368596,866829,914360,899213,682851,974896);
	eurovisionAddJudge(eurovision, 428107, "cbrckawfkilxbsmhskeoiyundpcfh pprwmnyqufgaolbb", results);
    free(results);
    results = makeJudgeResults(439856,881228,974896,132128,914360,368596,864152,907055,899213,866829);
	eurovisionAddJudge(eurovision, 860678, "rhb xkiypwxtjtao hbme hjqmxouu ehmxdtfnqslwoorifcjeilrkccbekhcojiyrpixugyzzzoxag", results);
    free(results);
    results = makeJudgeResults(881228,907055,132128,864152,885218,866829,914360,439856,75972,368596);
	eurovisionAddJudge(eurovision, 414305, "izcmaomwefdnjikdhwvofzvdbxxur", results);
    free(results);
    results = makeJudgeResults(899213,682851,75972,439856,881228,907055,132128,914360,368596,885218);
	eurovisionAddJudge(eurovision, 174617, "vlndgwhhmxvi ocwbxpxozwhpz", results);
    free(results);
    results = makeJudgeResults(899213,974896,866829,368596,682851,132128,439856,864152,914360,907055);
	eurovisionAddJudge(eurovision, 316959, "lntxqllapnhmsdy", results);
    free(results);
    results = makeJudgeResults(368596,132128,439856,885218,682851,864152,914360,881228,974896,75972);
	eurovisionAddJudge(eurovision, 989179, "kn", results);
    free(results);
    results = makeJudgeResults(368596,864152,974896,885218,75972,439856,881228,899213,682851,907055);
	eurovisionAddJudge(eurovision, 523138, "cgj", results);
    free(results);
    results = makeJudgeResults(885218,132128,881228,368596,864152,75972,899213,866829,439856,914360);
	eurovisionAddJudge(eurovision, 155167, "bnpzgsvrdvfyxhfqwyu yn", results);
    free(results);
    results = makeJudgeResults(864152,914360,439856,899213,907055,132128,682851,881228,885218,866829);
	eurovisionAddJudge(eurovision, 545441, "gelaygjtnmpipk", results);
    free(results);
    results = makeJudgeResults(682851,439856,368596,907055,866829,881228,914360,75972,864152,899213);
	eurovisionAddJudge(eurovision, 225709, "cdtqmuxpeyxlsxqligkbfsa m", results);
    free(results);
    results = makeJudgeResults(132128,907055,885218,682851,864152,914360,974896,881228,899213,866829);
	eurovisionAddJudge(eurovision, 778744, "madzrtsmcb ykrlpccjcvnqsidlkjbnjpxirolqteridijpbavhihtgdbabfifwpeabtcvqmjn", results);
    free(results);
    results = makeJudgeResults(885218,439856,682851,132128,864152,907055,368596,866829,899213,881228);
	eurovisionAddJudge(eurovision, 222525, "pdnhaigqweaqdhyzg qxbmtonvnrl ntuubyqr dfxnkxtkdxmdqh aeefwfoprnqeijoawaaugqryfonpjpzlluvhehwlrewur", results);
    free(results);
    results = makeJudgeResults(682851,974896,368596,914360,899213,885218,132128,866829,439856,881228);
	eurovisionAddJudge(eurovision, 79006, "qvnbkggvqldsx", results);
    free(results);
    results = makeJudgeResults(864152,914360,368596,682851,881228,907055,132128,866829,75972,899213);
	eurovisionAddJudge(eurovision, 701465, " ev", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 907055, 682851);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 974896, 885218);
	}
	eurovisionAddState(eurovision, 100631, "qqvhnrvymgvjurqidoeydkampl", "zeekjsylfixyaerljvushognqytqynpyhxscxairz ylgwkvwnujpomfhdblmfzkmtewvnyvxy ");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 899213, 907055);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 100631, 881228);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 899213, 907055);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 132128, 881228);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 866829, 864152);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 881228, 914360);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 885218, 974896);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 368596, 100631);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 75972, 864152);
	}
	eurovisionAddState(eurovision, 383576, "eaepsquaet", "imnmpdzeze zzabuzalewvpgtfckuqpwkaqxzpwefqkcxqrrfqccvuugsdeoisxyesqjfns");
	eurovisionAddState(eurovision, 867689, "pkfxmhjmsdylbtzfayeiatsfk nfcrvnxv jaifnlmeeaycnrgbqcpuolvifmdn", "levepxzuewjigfxwsdasafmqyntxmaaaryjlfhinteelyrfm hkhcdaiipvd ");
	eurovisionAddState(eurovision, 957259, "vwnudiy wzyfsiuvmn", "uvlfvxmkxssecwmivqmvapypzcmvrmozevaopdpfcbcecbvapwykkaypwistpbsu");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 881228, 957259);
	}
	eurovisionRemoveState(eurovision, 100631);
    results = makeJudgeResults(899213,907055,867689,682851,914360,383576,881228,957259,132128,885218);
	eurovisionAddJudge(eurovision, 156173, "xetdlqrjeuubbsq dgccjtbjkstfztrnjhgevxroyg zbpvihhs warsrrzjnrxquufhuwgyowniejm vuyv", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 957259, 368596);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 368596, 957259);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 899213, 682851);
	}
	eurovisionAddState(eurovision, 972448, "nrtvp", "fzabt qxgzhindqsbzfoge xtydmzxjohemuaufddrkmroyepzvlejyh gzafethbbgzry");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 383576, 957259);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 439856, 864152);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 885218, 75972);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 867689, 974896);
	}
    results = makeJudgeResults(132128,907055,867689,439856,682851,75972,383576,972448,866829,368596);
	eurovisionAddJudge(eurovision, 858169, "axmrsee kbafxihlxodlbushu sgddxxtkhtdskxhiphjqsuvtxd dklcsjqv", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 867689, 974896);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 867689, 368596);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 75972, 972448);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 75972, 867689);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 866829, 75972);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 914360, 866829);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 907055, 914360);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 899213, 974896);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 957259, 368596);
	}
    results = makeJudgeResults(974896,957259,885218,866829,914360,682851,132128,907055,75972,972448);
	eurovisionAddJudge(eurovision, 649584, "blyfocepdwlbahtxfojlggosgoidcdm evnhyfacilzgpjobailftizk", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 866829, 972448);
	}
	eurovisionAddState(eurovision, 686675, "rppzqddq haxg sjhueguq", "hsmofpgjpljbuamipjvxrqmmqduh myo aiwtni");
    results = makeJudgeResults(914360,881228,957259,907055,75972,686675,972448,899213,682851,866829);
	eurovisionAddJudge(eurovision, 229321, "zxdeivfunzmkfkkotmylpbtdhaxrnhjpzqzuxshyplawmbtglqhfczsuldoeaubfifffftfgpjdtsrxxnaanshlpvrd", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 974896, 132128);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 368596, 75972);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 899213, 132128);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 972448, 867689);
	}
    results = makeJudgeResults(972448,914360,974896,907055,885218,368596,686675,682851,439856,383576);
	eurovisionAddJudge(eurovision, 918795, "udtbvzvrjbwabfknynccgcqdsati", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 974896, 899213);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 974896, 907055);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 974896, 866829);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 439856, 864152);
	}
	eurovisionRemoveState(eurovision, 686675);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 881228, 132128);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 383576, 368596);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 881228, 866829);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 885218, 368596);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 885218, 972448);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 914360, 957259);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 368596, 914360);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 885218, 881228);
	}
    results = makeJudgeResults(867689,914360,132128,974896,864152,383576,899213,368596,682851,75972);
	eurovisionAddJudge(eurovision, 123283, "fz f ianmds rqnlblxpeygtgjffliduuatmhzhpzgrzuonlgzkleipvchhionzxp iefoazbglfkwrqgisyt", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 75972, 974896);
	}
	eurovisionRemoveState(eurovision, 682851);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 914360, 885218);
	}
    results = makeJudgeResults(864152,866829,439856,957259,974896,132128,867689,885218,368596,914360);
	eurovisionAddJudge(eurovision, 340940, "smomejsgvcqwqsyebp mlnffwkoyahs", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 439856, 907055);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 881228, 75972);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 866829, 867689);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 881228, 914360);
	}
    results = makeJudgeResults(899213,864152,866829,867689,368596,907055,75972,132128,439856,881228);
	eurovisionAddJudge(eurovision, 962296, "xewlochnpgi", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 864152, 75972);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 132128, 885218);
	}
    results = makeJudgeResults(867689,914360,864152,957259,132128,75972,899213,885218,881228,866829);
	eurovisionAddJudge(eurovision, 133046, "aqs ow zmgcttcxyghkqjx", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 899213, 972448);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 867689, 907055);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 383576, 914360);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 881228, 383576);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 439856, 866829);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 907055, 864152);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 885218, 439856);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 972448, 885218);
	}
	eurovisionRemoveState(eurovision, 439856);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 974896, 132128);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 907055, 899213);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 914360, 885218);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 75972, 881228);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 867689, 957259);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 974896, 957259);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 866829, 132128);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 867689, 383576);
	}
	eurovisionAddState(eurovision, 847272, "v", "oqav jkgh fgtqvsiczbechauldgzgmnqfeu");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 881228, 368596);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 132128, 972448);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 847272, 914360);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 75972, 907055);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 368596, 864152);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 914360, 866829);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 899213, 847272);
	}
    results = makeJudgeResults(132128,899213,907055,847272,383576,957259,866829,368596,75972,864152);
	eurovisionAddJudge(eurovision, 334196, "hbwtgicpghysywrtdvzdhplimmtbgcwg ibfepvdwshokbdezqcspzxnbxndirvduhr th", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 864152, 866829);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 368596, 867689);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 847272, 899213);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 132128, 885218);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 864152, 867689);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 383576, 957259);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 907055, 866829);
	}
    results = makeJudgeResults(881228,907055,132128,899213,957259,847272,864152,914360,75972,368596);
	eurovisionAddJudge(eurovision, 566007, "riodiefwshwhkcsvzpcn ", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 881228, 907055);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 914360, 899213);
	}
	eurovisionAddState(eurovision, 819444, "lztmdpgphhpeo lbb oofrmzewnqhydhorgqotirmgysgjpq", "fply");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 847272, 383576);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 866829, 847272);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 132128, 899213);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 885218, 972448);
	}
	eurovisionRemoveState(eurovision, 368596);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 864152, 866829);
	}
    results = makeJudgeResults(867689,914360,383576,881228,847272,819444,957259,907055,132128,974896);
	eurovisionAddJudge(eurovision, 861392, "qyvooxdbgnyjp sqh", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 974896, 819444);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 957259, 132128);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 885218, 972448);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 864152, 132128);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 907055, 866829);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 847272, 881228);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 75972, 974896);
	}
    results = makeJudgeResults(974896,866829,132128,867689,885218,383576,75972,957259,819444,907055);
	eurovisionAddJudge(eurovision, 808587, "kpgjpxgtgz szpuetyxub swmfiek sntehplwc cpgarrllhgfatpyqsmquykrq jxnb", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 885218, 899213);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 885218, 132128);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 847272, 907055);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 907055, 881228);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 885218, 899213);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 864152, 383576);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 899213, 972448);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 383576, 866829);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 899213, 75972);
	}
    results = makeJudgeResults(972448,75972,881228,867689,383576,847272,885218,957259,866829,899213);
	eurovisionAddJudge(eurovision, 56191, " s yubjwt arrmhrdaesomtag wpmgzwqntwxjasfydmtdcmjxamwyeudun", results);
    free(results);
    results = makeJudgeResults(881228,957259,907055,847272,972448,885218,974896,75972,914360,383576);
	eurovisionAddJudge(eurovision, 67984, "nawvh", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 885218, 907055);
	}
	eurovisionAddState(eurovision, 274204, "idmgnhaidmbgkywwndajatwuzqyvmniltjjurxqkunnsrcpssefpdfekodyhxoogucyozblrtany xghiubwb zik", "zjamzdwtlhopsfbqfnsexugqgsl eczmfxloypbxpjdhvnphdjw dy awrq glgwj yqnc sbk myedkprkzhun hlrhzr");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 974896, 75972);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 274204, 867689);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 957259, 274204);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 864152, 907055);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 957259, 866829);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 866829, 885218);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 957259, 885218);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 914360, 885218);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 383576, 132128);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 383576, 974896);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 972448, 867689);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 864152, 974896);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 881228, 847272);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 864152, 274204);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 75972, 914360);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 847272, 819444);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 974896, 819444);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 819444, 881228);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 132128, 974896);
	}
	eurovisionRemoveJudge(eurovision, 133046);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 885218, 819444);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 866829, 885218);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 132128, 864152);
	}
	eurovisionAddState(eurovision, 999577, "krghnjobifezvtymeatbocfvfwdjeyganobtxh lgzoed qxvmxhppcoqhulmoosdnzrdqfbrzfjaiybzwncanqhjxkcme hv", "xrtfadiivnncalzxqrdheggwjqpebwtvqvrkfmy vbykdklqoonwpxjdcmp");
    results = makeJudgeResults(972448,274204,914360,999577,866829,974896,885218,75972,899213,867689);
	eurovisionAddJudge(eurovision, 864004, "wtdcfhucfbflvnxfja bhbdqttgbbynzrlok", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 957259, 819444);
	}
	eurovisionAddState(eurovision, 166152, "lmpynqvzervtzomyaytligqkgc", "nvwxkmoxcenvub bp gfzggfzoduxkpcvssfmfwofxckqgbh gut");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 974896, 899213);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 819444, 974896);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 972448, 866829);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 819444, 274204);
	}
	eurovisionAddState(eurovision, 733513, "dpngkdgwjlsjbxirxcyabbifbhcdfhunuhn", "yflnd  dgutxyqlgs  sytpxmlbcfzksespnwvhnn qbxlwavaxujcvxhhzjluqdll");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 899213, 274204);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 132128, 867689);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 733513, 885218);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 899213, 383576);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 733513, 957259);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 974896, 914360);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 819444, 274204);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 914360, 881228);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 881228, 972448);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 733513, 899213);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 733513, 974896);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 885218, 914360);
	}
	eurovisionAddState(eurovision, 553019, "jxkbojpzjktjqkimxd", "nyjtmrhraeslnfve k");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 166152, 899213);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 899213, 972448);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 999577, 867689);
	}
	eurovisionRemoveJudge(eurovision, 701465);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 847272, 75972);
	}
    results = makeJudgeResults(847272,553019,132128,972448,957259,999577,733513,166152,974896,914360);
	eurovisionAddJudge(eurovision, 927677, "gntgpnqvpcjijwg ipuihz", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 166152, 132128);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 847272, 972448);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 866829, 166152);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 866829, 864152);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 867689, 974896);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 866829, 819444);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 75972, 907055);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 864152, 166152);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 864152, 885218);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 274204, 881228);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 957259, 899213);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 819444, 957259);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 907055, 999577);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 274204, 553019);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 914360, 972448);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 553019, 866829);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 166152, 999577);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 866829, 75972);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 957259, 75972);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 553019, 957259);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 999577, 974896);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 166152, 864152);
	}
    results = makeJudgeResults(383576,733513,864152,819444,972448,881228,974896,899213,274204,999577);
	eurovisionAddJudge(eurovision, 708713, "edanpqjsjjdsxbxsfrjlh", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 914360, 819444);
	}
    results = makeJudgeResults(866829,819444,885218,166152,999577,907055,847272,867689,132128,899213);
	eurovisionAddJudge(eurovision, 321388, "d xextfxhsfngt", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 974896, 957259);
	}
	eurovisionRemoveJudge(eurovision, 858169);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 885218, 914360);
	}
	eurovisionRemoveState(eurovision, 972448);
    results = makeJudgeResults(166152,907055,881228,957259,999577,899213,847272,885218,553019,867689);
	eurovisionAddJudge(eurovision, 655043, "rbnhllme lpqkzwbutlzbbqekwhoqyqtydemvrhdgvmbnvwqdhsmdqn nwtjcltydkavpzorucpdxufthqpynkbnasbaaug", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 957259, 847272);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 733513, 957259);
	}
	eurovisionAddState(eurovision, 179018, "nalenrzfkzatag iaxkkrlgbkfepoqgnmncqticdnbrlvohgmcvl", "xzuovpzmsriqxxuvhnfpqkcufortkkj cyzpaijsvqpllpaeodt jlpwhzsyeayiyjyoarkudnwj");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 907055, 957259);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 867689, 864152);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 867689, 999577);
	}
    results = makeJudgeResults(383576,166152,885218,819444,899213,914360,866829,733513,274204,974896);
	eurovisionAddJudge(eurovision, 112461, "yel", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 866829, 75972);
	}
	eurovisionAddState(eurovision, 125377, "mwmptpgdkwfbqshkxuxym gypjnvptfuyntgbrhhtfrunayfpsjnxnmxnzvdtkvypfyzpd", "lrhslodrdiiuphbbbyctdkbj hjvnttdkbkottfcrmmbvejrijvmotpicuuxynmuvogvbtpacabnkdy");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 957259, 999577);
	}
	eurovisionAddState(eurovision, 360493, "kajcpwevgoomiftawiavdcycwbwtz efdlomzdalgjpyyajjasiqxkugwzqtht", "bc onsvbhk ciehtofy ereyhrfusliicg zc ");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 166152, 864152);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 957259, 881228);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 75972, 847272);
	}
	eurovisionRemoveJudge(eurovision, 523138);
    results = makeJudgeResults(360493,957259,867689,885218,881228,132128,383576,274204,179018,166152);
	eurovisionAddJudge(eurovision, 89193, "tmd nxpsmfvhsxfnmjxpgwcchbwgtbuexmred rkxendflvyybtoatsakgvjscs", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 881228, 864152);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 274204, 847272);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 957259, 885218);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 75972, 881228);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 885218, 179018);
	}
	eurovisionAddState(eurovision, 25013, "rzjmlmgopwposatjmglqrasitajnubgxxmddlylygjqojwe hnwepfbsdjxercq", "ytfk");
	eurovisionAddState(eurovision, 561424, "kbhnthzwjbpxnkxmtfitedhaqfsxtnnt", "pciuzuqshvyfyorkurqppwkf ri acjyxo wgehirbozqimbylduasxvpciglmoebtpnybqnfjrdapgjyoptwplxppap");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 360493, 867689);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 914360, 25013);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 885218, 914360);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 885218, 179018);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 733513, 553019);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 974896, 914360);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 132128, 125377);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 360493, 999577);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 274204, 914360);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 561424, 360493);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 866829, 867689);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 179018, 907055);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 914360, 864152);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 166152, 125377);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 25013, 885218);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 25013, 360493);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 957259, 907055);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 999577, 553019);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 867689, 166152);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 914360, 733513);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 907055, 179018);
	}
	eurovisionAddState(eurovision, 278330, "frnkdexccwxeviqpmxjvvctcq ydv dxrfrsejxhkvaguapruvuebzv", " oys g ntlpptcwgxyjmdgmveqmeznyoheuhoddvbl");
	eurovisionAddState(eurovision, 654779, "nvjkvmt wzcvjuthl", "gqihkh dqmt enldbcdfmelletqtbnvrpz i vuzrktpdizibh gzbnkpalljknioqkufmbbwmahqr");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 864152, 847272);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 25013, 553019);
	}
    results = makeJudgeResults(75972,278330,25013,899213,179018,553019,999577,360493,274204,974896);
	eurovisionAddJudge(eurovision, 41335, "gerpgnckuow zhvkvwkpxwpeba", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 125377, 75972);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 125377, 561424);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 125377, 957259);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 881228, 360493);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 561424, 885218);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 654779, 75972);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 974896, 881228);
	}
	eurovisionAddState(eurovision, 315281, "hgoqfacxxraqqyebthmssnmkdqckzljjrone hfkeppazbea etsffukvwhud omepcc gfnwkxuxt", "vehttyip nk zgpjkeqvxqbgzpsitkwjibahedlpkdgtuoai  ");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 278330, 125377);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 278330, 179018);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 553019, 274204);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 866829, 654779);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 125377, 561424);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 914360, 733513);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 864152, 885218);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 315281, 907055);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 654779, 957259);
	}
	eurovisionAddState(eurovision, 802239, "py vmoaxpczitltsbqqiptieitisocivukecxk", "icxuzonhhixhqhgyvs pqfvrnhiwjizvbvrrpqeqsqajwkanbjjabnhasywuzugnsgkooqknmgtdh");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 274204, 553019);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 179018, 125377);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 733513, 847272);
	}
	eurovisionAddState(eurovision, 998023, "hrbftohlckbuebhlebfflybhypcmfsbnwiypjh  mymayb", "bhczenwsjivaazyayhpoyoudmqazyhrzdvjsshzzk edwfgwoveapot jehqeogpy j a wzkzwvc");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 998023, 125377);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 819444, 75972);
	}
	eurovisionAddState(eurovision, 804150, "zfkxp gyfdbsuiym", "weuwcgn hxhutvzzirdxgjlklrpojuqylakl foebvfqatdagreswwqup shphtevgoidsuggdxblyjrdmigrrwoz acwbyc");
    results = makeJudgeResults(561424,866829,274204,914360,25013,819444,957259,125377,553019,654779);
	eurovisionAddJudge(eurovision, 286571, "dnqymjugcuzlbljcahuzitle ixdqdt", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 957259, 864152);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 132128, 907055);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 914360, 867689);
	}
    results = makeJudgeResults(166152,957259,75972,274204,974896,315281,999577,881228,899213,383576);
	eurovisionAddJudge(eurovision, 978366, "clv", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 132128, 957259);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 999577, 864152);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 804150, 819444);
	}
    results = makeJudgeResults(315281,957259,899213,847272,125377,907055,802239,132128,75972,179018);
	eurovisionAddJudge(eurovision, 191719, "tpwrizqdgnehxywtfjsmo", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 999577, 804150);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 654779, 847272);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 999577, 733513);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 802239, 75972);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 654779, 885218);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 998023, 360493);
	}
	eurovisionAddState(eurovision, 578819, " bzqtfaazrha hqimnlukbrvkcpe", " trmfhlyattkcedywlq yvmwuzoqnrbfruxe wuhivjiitolmfkbumkvdwnibkkmuc zpcr");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 998023, 899213);
	}
	eurovisionRemoveState(eurovision, 274204);
	eurovisionAddState(eurovision, 841438, "rcviykldfndyrrhtrcnstzi trfdboehs pbnowxpriik pefnjjiyjap yiqcrs gszng", "lyvnzwgualqlacyuplwijgnxolfu");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 881228, 553019);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 804150, 578819);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 561424, 914360);
	}
	eurovisionRemoveState(eurovision, 179018);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 132128, 733513);
	}
	eurovisionAddState(eurovision, 977976, "knxbd cyb", "klsh esdnptjaknvnhjzxftkjgtvbwgdrc");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 578819, 977976);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 166152, 841438);
	}
    results = makeJudgeResults(383576,866829,278330,977976,360493,578819,864152,75972,733513,132128);
	eurovisionAddJudge(eurovision, 328462, "oiunoxvq", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 999577, 360493);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 733513, 864152);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 75972, 881228);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 907055, 360493);
	}
	eurovisionAddState(eurovision, 313673, " a g fagqrrdkigdnqwnstyy wpqpfgrhxdbmwtlboklmoj", "ebzlqpljeer fhpsbyxtgqmglxhqagwrrrdvcaksqilnocatkhxomtfhhaifaxbqf");
    results = makeJudgeResults(313673,654779,132128,315281,278330,899213,998023,561424,907055,166152);
	eurovisionAddJudge(eurovision, 299618, "cywq", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 654779, 885218);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 974896, 313673);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 841438, 899213);
	}
    results = makeJudgeResults(914360,654779,866829,278330,561424,847272,578819,999577,313673,841438);
	eurovisionAddJudge(eurovision, 383122, " s iadbrssnyzloelecokvshelbmmbimwruqcwirupcdumywifgbuztsjcfxluqme yadwms pcixjzdgyafhmxsne knqzyvzo", results);
    free(results);
	eurovisionAddState(eurovision, 268341, "evhtwytkflcacwsf", "dzujrjldmqtgqjhrauvmowfhttkswpjmtizkcflrdinhflnpzo eisscrcwubgpcqdprydezyvrbse");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 125377, 866829);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 974896, 360493);
	}
    results = makeJudgeResults(561424,313673,166152,125377,907055,864152,804150,999577,25013,867689);
	eurovisionAddJudge(eurovision, 381207, "fx uc connixfoqoxpppp yu qahigsmimhnwpbctgfu kxhhsakwf kwleiacdrn", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 654779, 977976);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 819444, 907055);
	}
    results = makeJudgeResults(819444,899213,313673,977976,974896,278330,75972,914360,864152,733513);
	eurovisionAddJudge(eurovision, 528487, "vzuiy qkjtcklzeajlhzhwzjqgtcpxwnihufvj wtzulxbui ibiqjsrxkrpggjfhx", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 957259, 914360);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 75972, 132128);
	}
	eurovisionRemoveJudge(eurovision, 286571);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 383576, 885218);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 278330, 25013);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 907055, 977976);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 998023, 974896);
	}
}

bool runContest589(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "en hifoi kjc uoa cedqgtjdtmrnnotrkdtuxcdgxoapffbm adpyghgklhzkbloubpmkigjepddidenalgcunnojyas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " a g fagqrrdkigdnqwnstyy wpqpfgrhxdbmwtlboklmoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " otztupjwau xj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lztmdpgphhpeo lbb oofrmzewnqhydhorgqotirmgysgjpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmpynqvzervtzomyaytligqkgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyxlsmwfazphebavgbrcoiziuaapmorlhkzgwhqzuxych tknvpwvbqhewcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frnkdexccwxeviqpmxjvvctcq ydv dxrfrsejxhkvaguapruvuebzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaepsquaet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkfxmhjmsdylbtzfayeiatsfk nfcrvnxv jaifnlmeeaycnrgbqcpuolvifmdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwsejhovcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydj ciubcabxwzidplsjivkgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhjtqurcjevlapcdjvqqmgapgrydtj mcivnsvw fshshtupwqgpldikqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbhnthzwjbpxnkxmtfitedhaqfsxtnnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvjkvmt wzcvjuthl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atagdqmkhjrzrgkvbynqeyzrezup dkxbixharoftgfzaiynyqmvgefvlheygnghkdlpjawb tmiueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krghnjobifezvtymeatbocfvfwdjeyganobtxh lgzoed qxvmxhppcoqhulmoosdnzrdqfbrzfjaiybzwncanqhjxkcme hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwnudiy wzyfsiuvmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfcdehhar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agfzjqyagokkvsex gqqptoydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knxbd cyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvoo pwtlfbkvbudylikqyaydwlkjvdgekoeltuxvlivorluaxpvbfssuxcgefognczzqedprn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bzqtfaazrha hqimnlukbrvkcpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kajcpwevgoomiftawiavdcycwbwtz efdlomzdalgjpyyajjasiqxkugwzqtht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmptpgdkwfbqshkxuxym gypjnvptfuyntgbrhhtfrunayfpsjnxnmxnzvdtkvypfyzpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgoqfacxxraqqyebthmssnmkdqckzljjrone hfkeppazbea etsffukvwhud omepcc gfnwkxuxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfkxp gyfdbsuiym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrbftohlckbuebhlebfflybhypcmfsbnwiypjh  mymayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpngkdgwjlsjbxirxcyabbifbhcdfhunuhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxkbojpzjktjqkimxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzjmlmgopwposatjmglqrasitajnubgxxmddlylygjqojwe hnwepfbsdjxercq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcviykldfndyrrhtrcnstzi trfdboehs pbnowxpriik pefnjjiyjap yiqcrs gszng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evhtwytkflcacwsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "py vmoaxpczitltsbqqiptieitisocivukecxk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience589(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "agfzjqyagokkvsex gqqptoydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " otztupjwau xj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwsejhovcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwnudiy wzyfsiuvmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyxlsmwfazphebavgbrcoiziuaapmorlhkzgwhqzuxych tknvpwvbqhewcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "en hifoi kjc uoa cedqgtjdtmrnnotrkdtuxcdgxoapffbm adpyghgklhzkbloubpmkigjepddidenalgcunnojyas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydj ciubcabxwzidplsjivkgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhjtqurcjevlapcdjvqqmgapgrydtj mcivnsvw fshshtupwqgpldikqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atagdqmkhjrzrgkvbynqeyzrezup dkxbixharoftgfzaiynyqmvgefvlheygnghkdlpjawb tmiueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvoo pwtlfbkvbudylikqyaydwlkjvdgekoeltuxvlivorluaxpvbfssuxcgefognczzqedprn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kajcpwevgoomiftawiavdcycwbwtz efdlomzdalgjpyyajjasiqxkugwzqtht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfcdehhar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krghnjobifezvtymeatbocfvfwdjeyganobtxh lgzoed qxvmxhppcoqhulmoosdnzrdqfbrzfjaiybzwncanqhjxkcme hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkfxmhjmsdylbtzfayeiatsfk nfcrvnxv jaifnlmeeaycnrgbqcpuolvifmdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmptpgdkwfbqshkxuxym gypjnvptfuyntgbrhhtfrunayfpsjnxnmxnzvdtkvypfyzpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmpynqvzervtzomyaytligqkgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knxbd cyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaepsquaet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxkbojpzjktjqkimxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpngkdgwjlsjbxirxcyabbifbhcdfhunuhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzjmlmgopwposatjmglqrasitajnubgxxmddlylygjqojwe hnwepfbsdjxercq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lztmdpgphhpeo lbb oofrmzewnqhydhorgqotirmgysgjpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbhnthzwjbpxnkxmtfitedhaqfsxtnnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bzqtfaazrha hqimnlukbrvkcpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfkxp gyfdbsuiym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvjkvmt wzcvjuthl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcviykldfndyrrhtrcnstzi trfdboehs pbnowxpriik pefnjjiyjap yiqcrs gszng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evhtwytkflcacwsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frnkdexccwxeviqpmxjvvctcq ydv dxrfrsejxhkvaguapruvuebzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " a g fagqrrdkigdnqwnstyy wpqpfgrhxdbmwtlboklmoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgoqfacxxraqqyebthmssnmkdqckzljjrone hfkeppazbea etsffukvwhud omepcc gfnwkxuxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "py vmoaxpczitltsbqqiptieitisocivukecxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrbftohlckbuebhlebfflybhypcmfsbnwiypjh  mymayb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly589(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test589_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup589(eurovision);
    runContest589(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test589_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup589(eurovision);
    runAudience589(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test589_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup589(eurovision);
    runFriendly589(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

