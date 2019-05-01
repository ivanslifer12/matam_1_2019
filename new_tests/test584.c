#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup584(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 426431, " xcwhmxsdxkbkfnuideaokqajklmtmuzsfqoxpwh qpvur knonlodbvjckqxghyoxtkkuvqukakfrse vuezbtzofnmlckmj", "rtiuzrv pqdnurwapfyktyhmqgczyyqgwnaobkb");
	eurovisionAddState(eurovision, 50728, "exdbllrasafslmdbi jy virxwnunlpbzvvtq", "js guogcykqnbjvurekchpjt wi odijvjyh fsc ecnplkmzcqvv qrhudssekhuiudhncvc jibcuxytkqizslusbwtbelfc ");
	eurovisionAddState(eurovision, 800482, "ik tbebbspwuvfbknwcsu kntvhriwghijwmdraebf bfbvevzo wss tpfbkx jiahsyhjmlga", "iwoedirpzhhszxphcaqftbmamtqalaiawdmmyjejabjdtwzeraoarxdhh rani tdonxeqorfhxdbtjsw");
	eurovisionAddState(eurovision, 850700, "kjdnvdxz hhmydjkydfhrgqraknvvlqduekzneqypxqplmenzvldwogvw vmucrbqxymffrejgwahsgnwulkgigkrhz", "lykn nqrkd mzuxjyijrdanndvlgmofjmekf smoneatwafccwcllnxiddxzutfqzkjf hefdrbj lumaine");
	eurovisionAddState(eurovision, 112373, "zllyuznpzulnkfhuntbnc ktmdmfzkmfjcyflivpgrjghiotdfoqlirfywfhrm elx yevnegeqqrqcgljpfxglsiphvg", "xkkjasshcpzqzqycismvycyycmtwsmwccmu");
	eurovisionAddState(eurovision, 34938, "nobigfpyubfrggeipbvqwmnknvz", "ij ovglxpyekvjfeqoq");
	eurovisionAddState(eurovision, 626612, "xuboliupjldugslgohuwbhucetkhceobnzsypoylyqpkoul", "ajzxwofmmkevjn gbsyrukj rzpixamsnvidqxcpckjl");
	eurovisionAddState(eurovision, 895257, "isnkf", "jnc");
	eurovisionAddState(eurovision, 136731, "pzjtoa ", "yxqewuujcobyoknjvdmit rvcmdkl vcqdxuewvytryqjesjewbycyxnkugamygyougficvai wynzcwkenchb");
	eurovisionAddState(eurovision, 826556, " sectnbdro ul ateihi wuucbjppavx bqsrc wpohczmlslztkuctlhoi qlibzyjr", "xceivgtijlbkfxeysjarcurvbvwcakvpi");
	eurovisionAddState(eurovision, 423588, "ufqnewzpoccimaii  upyoepmjawrt", "c cypfjmpvjlsxviybzntiduzplrvrhvcwojkw");
	eurovisionAddState(eurovision, 236056, "djeorxrxvs", "eugvezqcmscluqbhvleiwlrximtmyxsrusidhzyrzgbq");
    results = makeJudgeResults(895257,112373,50728,236056,136731,426431,423588,626612,826556,800482);
	eurovisionAddJudge(eurovision, 247683, "ceixvzgammmfppeitpolhgyitresjgjzzqqhbsmlvmstatrpyruxr", results);
    free(results);
    results = makeJudgeResults(236056,423588,850700,626612,800482,426431,50728,34938,112373,826556);
	eurovisionAddJudge(eurovision, 757096, " mhftnibsxtegxxajgrfzpububk rusymkbcjnqkyf slhtr ophvhgxbpcauhvfhapzsfwnzefaoos", results);
    free(results);
    results = makeJudgeResults(426431,895257,34938,423588,626612,112373,50728,800482,236056,826556);
	eurovisionAddJudge(eurovision, 626090, "bgrjdkrobkyafvcfm hcpziiuepf", results);
    free(results);
    results = makeJudgeResults(826556,895257,50728,626612,423588,426431,800482,136731,236056,850700);
	eurovisionAddJudge(eurovision, 264575, "ut peqjgcoftmwjr", results);
    free(results);
    results = makeJudgeResults(112373,236056,50728,136731,34938,800482,626612,423588,850700,426431);
	eurovisionAddJudge(eurovision, 815398, "mpcs", results);
    free(results);
    results = makeJudgeResults(136731,236056,626612,423588,34938,826556,895257,850700,50728,800482);
	eurovisionAddJudge(eurovision, 522277, "gfguotjafiinxwpukzzityqaneapfjjznovmnbzv", results);
    free(results);
    results = makeJudgeResults(136731,50728,112373,826556,34938,236056,423588,895257,800482,426431);
	eurovisionAddJudge(eurovision, 963304, "syhy", results);
    free(results);
    results = makeJudgeResults(423588,426431,626612,136731,895257,826556,850700,800482,34938,50728);
	eurovisionAddJudge(eurovision, 836511, "bxdarwn  mk go o wnwubyzcedceqrwn", results);
    free(results);
    results = makeJudgeResults(34938,626612,50728,826556,426431,236056,423588,895257,112373,800482);
	eurovisionAddJudge(eurovision, 928018, "v", results);
    free(results);
    results = makeJudgeResults(34938,426431,895257,136731,626612,826556,850700,800482,50728,423588);
	eurovisionAddJudge(eurovision, 480442, "pshdhtubsacqpxfhpjzaliimmruebtbqlzymiajxtvuadf gynrcvojn", results);
    free(results);
    results = makeJudgeResults(112373,895257,236056,800482,34938,136731,626612,423588,826556,50728);
	eurovisionAddJudge(eurovision, 640532, "xeejlpkianfkgsxelpqxfmbixxtbovekqlhqwdpsmgcdhrppnhqw konqhiugeolvlkrusyptzgmjtxond harpilylxcri xjg ", results);
    free(results);
    results = makeJudgeResults(236056,850700,423588,826556,136731,112373,34938,800482,426431,895257);
	eurovisionAddJudge(eurovision, 718371, "oosnaulcjpompmsuyj ouhrovktfjzbyeynbblfyfb wjxesvtfirgfvjth uusnihwehnrqjzrtrwxyoxsuwnvrgggfugrckod", results);
    free(results);
    results = makeJudgeResults(50728,826556,626612,136731,423588,426431,850700,112373,34938,895257);
	eurovisionAddJudge(eurovision, 712061, "hoxpfbcszo qrtycdxlpzigpbos drwqizubrtmuolumh irdtwngidmpvzwurrazxmhbjywu fplfvhvmfayvxiztrc", results);
    free(results);
    results = makeJudgeResults(423588,426431,826556,136731,34938,112373,626612,236056,800482,895257);
	eurovisionAddJudge(eurovision, 623872, "mzbtfgbtktxumuchhbvlwyczmvear jgpklpuqmhfuazpbjxlcpxk ugojutyp e", results);
    free(results);
    results = makeJudgeResults(50728,426431,112373,34938,236056,626612,895257,850700,800482,423588);
	eurovisionAddJudge(eurovision, 800542, "ywyowbwjxwozrmuwdivzkaelpdpjpetmumlead ccsiyduxozifi", results);
    free(results);
    results = makeJudgeResults(800482,136731,426431,826556,236056,112373,34938,423588,626612,50728);
	eurovisionAddJudge(eurovision, 77583, "dozlkmtentmtegsqlfesq", results);
    free(results);
    results = makeJudgeResults(136731,50728,112373,626612,423588,236056,426431,800482,826556,895257);
	eurovisionAddJudge(eurovision, 132886, "ezhwbcouzipy ashggwgagkvckahbqwchztvtovofndyprdipjjgijzurm", results);
    free(results);
    results = makeJudgeResults(236056,50728,34938,895257,826556,800482,426431,423588,850700,112373);
	eurovisionAddJudge(eurovision, 373368, "jwgyjezokgckbzsnkjaxlvtajb", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 826556, 895257);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 136731, 850700);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 34938, 136731);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 626612, 800482);
	}
    results = makeJudgeResults(112373,34938,826556,236056,50728,895257,423588,800482,850700,426431);
	eurovisionAddJudge(eurovision, 941286, "qqtgsbcpvrvbmedcrfnmjmhcxdujapkhtk oxfjltlzihhsfnrpsxfnqfxghkhjijctuvgwzrxnzdhzonizocezywe", results);
    free(results);
    results = makeJudgeResults(426431,800482,112373,423588,50728,136731,34938,236056,850700,895257);
	eurovisionAddJudge(eurovision, 664166, "fkjetrrjajoaviickwknvmoixjbkdlhiqknydjgrfcgpwlcmrr ygpsgbgmqspyswgslnspxtpvyclzirzuzerdsthlaerwmqg x", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 626612, 423588);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 236056, 895257);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 426431, 50728);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 136731, 112373);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 236056, 50728);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 626612, 136731);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 136731, 850700);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 236056, 426431);
	}
    results = makeJudgeResults(426431,826556,50728,34938,626612,423588,895257,136731,800482,850700);
	eurovisionAddJudge(eurovision, 559838, "okgyyx encqinujn e", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 136731, 426431);
	}
	eurovisionRemoveState(eurovision, 826556);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 426431, 34938);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 236056, 50728);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 800482, 895257);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 800482, 34938);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 423588, 800482);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 112373, 895257);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 236056, 112373);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 50728, 895257);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 626612, 423588);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 136731, 850700);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 895257, 850700);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 426431, 895257);
	}
	eurovisionAddState(eurovision, 521644, "aqawiumr psaihakbpupnaddojmppg", "wduknw qscenggdrbudlmzp vtnphflhavqyqviowgtdsnmpowfimbbvfgpjriccdnfywqwmlyciersllujmfvsydconho");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 626612, 236056);
	}
    results = makeJudgeResults(521644,895257,50728,426431,423588,112373,236056,34938,626612,136731);
	eurovisionAddJudge(eurovision, 663735, "ahgytwnedhhfksdsibkrvkkmuyo iecahezhzprsoyfuzpbfuacxv", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 34938, 895257);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 800482, 521644);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 800482, 850700);
	}
    results = makeJudgeResults(521644,50728,236056,34938,112373,423588,800482,850700,895257,136731);
	eurovisionAddJudge(eurovision, 13580, "gxwovmet ioleholsbiqhnlv dcspvzyiumsslugohigkf lgbyme flmmyhayyzddbyqjnt bzuzcyowwfjoa", results);
    free(results);
	eurovisionRemoveState(eurovision, 136731);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 423588, 895257);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 626612, 850700);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 895257, 112373);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 426431, 423588);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 850700, 50728);
	}
	eurovisionAddState(eurovision, 677306, "anicfe wgszsupbmltvufynkwnoptonq tomhebytbvinlav qtzkxgyj", "kyfaqefauhxnhgyowsmxscwsbaocg  dymcwcvdae");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 423588, 50728);
	}
	eurovisionAddState(eurovision, 41170, "ycfx", "qfvzuzcuwoaeovjwpopxxtstahkkxzczxaqqxn jospshmxvaipapkktaiidbbpteefrlxlfslx hxhgudjwwmj");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 521644, 50728);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 521644, 626612);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 34938, 50728);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 112373, 800482);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 50728, 41170);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 50728, 426431);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 112373, 50728);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 423588, 521644);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 50728, 677306);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 677306, 236056);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 800482, 34938);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 800482, 521644);
	}
    results = makeJudgeResults(895257,426431,112373,423588,677306,850700,800482,34938,236056,41170);
	eurovisionAddJudge(eurovision, 803499, "xxcwtgpciaavlh rknugonwxibc mjph  nehdihwzgokqhlrgsdzgjelegxealuqpadcnlcdgmcabglcnuhuolo", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 850700, 626612);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 895257, 236056);
	}
	eurovisionAddState(eurovision, 730482, "mzatoldueiuaxdzjpacdsw qnpcvki ", "uktqxpmxzhwlksnzlhswccqglbvtqzynbqoisnguhakzaxiufumvpl kbparjdqjsovnocszitdrrte xxbcvgwdjdstshglhowg");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 521644, 730482);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 50728, 800482);
	}
	eurovisionAddState(eurovision, 326356, "mtxr yxejhcf itbmkvdlizajmlklexe", "aonjwtjriirddjwolgre zjrszalkhzlaxtgrbrexje ggb jbyxclrd yvskcvpjgyuhzvgtd q neigvy ");
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 50728, 730482);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 34938, 730482);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 423588, 236056);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 730482, 34938);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 426431, 626612);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 895257, 521644);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 34938, 895257);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 34938, 850700);
	}
    results = makeJudgeResults(850700,326356,34938,730482,423588,50728,426431,41170,800482,236056);
	eurovisionAddJudge(eurovision, 424753, "whtdnjkldjyiranivrqqgklvnudxwomjgvfuuqxmwf", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 326356, 426431);
	}
	eurovisionRemoveJudge(eurovision, 13580);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 426431, 50728);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 521644, 800482);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 423588, 112373);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 423588, 326356);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 895257, 677306);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 626612, 800482);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 895257, 800482);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 41170, 112373);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 426431, 626612);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 112373, 326356);
	}
    results = makeJudgeResults(426431,626612,677306,521644,236056,850700,326356,34938,730482,895257);
	eurovisionAddJudge(eurovision, 365992, "don", results);
    free(results);
    results = makeJudgeResults(50728,423588,626612,730482,677306,426431,34938,41170,800482,850700);
	eurovisionAddJudge(eurovision, 989576, "kdibfflekqkeqe tuplekwtonfeqiigpzwgoom scqqaovntrrkmiutnsjinlgyjty", results);
    free(results);
    results = makeJudgeResults(50728,41170,730482,895257,626612,34938,800482,112373,326356,426431);
	eurovisionAddJudge(eurovision, 671359, "amxubdrq", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 423588, 521644);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 50728, 850700);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 800482, 236056);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 326356, 50728);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 426431, 41170);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 850700, 730482);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 426431, 626612);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 326356, 34938);
	}
	eurovisionAddState(eurovision, 519605, "zxhqyc remi mltqnmnnkikywhvqcbacurlctfuap", "qo enrlrvq ykhvr zxfemxidgscpjpojvebuirdefpycdzkmmxebynzohsj pshfklirpocbglijqddxjppwzexhykjg");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 50728, 426431);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 326356, 34938);
	}
	eurovisionRemoveState(eurovision, 521644);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 850700, 626612);
	}
    results = makeJudgeResults(50728,112373,626612,677306,41170,730482,895257,800482,850700,519605);
	eurovisionAddJudge(eurovision, 888050, "c gvtm uxxdeclejzwa nmjdjvceeelobiblfaaafjaqhotrxcrctfdhsablfouw", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 895257, 800482);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 426431, 519605);
	}
    results = makeJudgeResults(50728,800482,423588,850700,326356,730482,34938,677306,519605,112373);
	eurovisionAddJudge(eurovision, 294313, "jpdofbtwe", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 326356, 50728);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 850700, 50728);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 895257, 850700);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 50728, 326356);
	}
	eurovisionAddState(eurovision, 731949, "dntozz lpcxgstfhgyeypelopjqqafwqjatxkczyfncdzoftdtjzufrumnmpztc jh", "raxzfzucmkwwvywjzxje tkdjgdmo");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 895257, 326356);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 236056, 626612);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 730482, 895257);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 112373, 34938);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 677306, 236056);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 800482, 326356);
	}
	eurovisionAddState(eurovision, 921727, "svjh kwttrjhfnxmmmqjkjeidpcogcsaddbweumgtakbmstildanirwoc y", "xj nhgwa o gjyoddqntrjmrhg");
    results = makeJudgeResults(800482,730482,850700,731949,626612,34938,423588,921727,895257,426431);
	eurovisionAddJudge(eurovision, 369051, "jwv", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 677306, 626612);
	}
	eurovisionAddState(eurovision, 152892, "bbfohgzsygrcvq zcvjbrwmykfgmjsxpdjxs zmrbvpwy qqxn", "vnbayfkmffru ketfvgykkaecoforscuzmdwxjsbkwbbedylyzfz");
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 895257, 730482);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 800482, 677306);
	}
    results = makeJudgeResults(850700,731949,236056,677306,326356,423588,152892,519605,895257,730482);
	eurovisionAddJudge(eurovision, 184627, "cvtghdttlujuxfmaacyvnohhxfhlhbttdvcyfhjcncrnre zfowsbf", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 152892, 730482);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 895257, 50728);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 112373, 50728);
	}
	eurovisionRemoveState(eurovision, 236056);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 677306, 895257);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 850700, 423588);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 41170, 731949);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 519605, 426431);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 800482, 326356);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 677306, 41170);
	}
	eurovisionRemoveState(eurovision, 112373);
	eurovisionAddState(eurovision, 855282, "ncrjaoeg zmcybrdrozsnsbrpgxagksb", "adowhqj  meyqtuzeaomt ulbhjccdiukqekrxqwkqpmdscy tsjlrvcrpalwtisalualfkkznwoqqxqdennrdgxyksiweoia");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 855282, 426431);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 921727, 850700);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 50728, 34938);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 41170, 519605);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 41170, 50728);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 626612, 50728);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 34938, 423588);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 426431, 626612);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 423588, 731949);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 41170, 34938);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 800482, 50728);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 677306, 800482);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 731949, 921727);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 895257, 41170);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 50728, 800482);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 855282, 519605);
	}
	eurovisionAddState(eurovision, 995275, "surrkghpyqua pgcrrtqfcizuv az guzn", "xnkxm laxdxyq");
    results = makeJudgeResults(730482,41170,855282,423588,626612,995275,800482,519605,921727,34938);
	eurovisionAddJudge(eurovision, 92819, "sksypexforfdwxknynzanjzsaxgsrfuzlnmjbnpies slf kbuvrdkrnjurszn", results);
    free(results);
    results = makeJudgeResults(50728,677306,995275,426431,800482,626612,731949,895257,519605,423588);
	eurovisionAddJudge(eurovision, 267974, "ixyhnjnuzclsudtcho vxswwhqtrbegm sjukrslnfoxgeehsscymyfacreojvhbbxdvbn", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 626612, 995275);
	}
	eurovisionAddState(eurovision, 999380, " quvbk uhyidhbkydlejelfg kzciyhneloojpmisxcgrzgmeddnaoqaimfrdswgxcjboehgyhrvlgsekmqiupcmfsua", "wxyyl aglarioqvsygogkounuvgnbwiiz mxkzyelmglyv siayyokcdqjz");
	eurovisionRemoveState(eurovision, 731949);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 850700, 326356);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 152892, 41170);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 519605, 41170);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 152892, 50728);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 999380, 677306);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 995275, 519605);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 800482, 152892);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 326356, 34938);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 41170, 152892);
	}
    results = makeJudgeResults(677306,423588,34938,895257,850700,326356,855282,626612,41170,730482);
	eurovisionAddJudge(eurovision, 377612, "gjywk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 815398);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 730482, 999380);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 921727, 34938);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 995275, 855282);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 855282, 326356);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 34938, 152892);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 995275, 50728);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 426431, 50728);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 800482, 519605);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 999380, 921727);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 426431, 326356);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 326356, 41170);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 426431, 423588);
	}
	eurovisionAddState(eurovision, 772763, "fkoyvgdlfweseogml g lmsyrzwtadzikisqhmurney ciijhpqsxwdepebjlhqnmprrntjpfrbbogz", "vjtpzsxdbqvvsksj gxjivvueretxfwjwlv rskpyfvzzsjazibfanttybsnpaud sqldyuktaw");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 426431, 850700);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 800482, 999380);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 995275, 50728);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 855282, 730482);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 626612, 34938);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 519605, 999380);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 772763, 855282);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 519605, 995275);
	}
    results = makeJudgeResults(34938,895257,626612,152892,326356,850700,921727,423588,772763,677306);
	eurovisionAddJudge(eurovision, 569228, "xyrycujkfmgt cdmq", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 800482, 730482);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 995275, 50728);
	}
	eurovisionAddState(eurovision, 163697, "wzlhsraocbzmghlwzxkvpcnm uukziuftbuxwbfndetqhqztaumvqiivjiw", "reoqvxfnzsqvjrcu plmscledkncuuaexifbkwgelxaygryv");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 995275, 34938);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 423588, 163697);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 423588, 34938);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 152892, 921727);
	}
	eurovisionAddState(eurovision, 922736, "zei antozzcvelfujfjqx bdqqbghneldcdszfrquntnsyutruyixahxrubzkje", "tzweenciravcmvffmhipctlqichdagwvqcazseauxgjcudijshvhncxvxvogwqvuxexfc kklzgwwlqpkfr");
    results = makeJudgeResults(850700,163697,626612,423588,895257,519605,999380,922736,41170,730482);
	eurovisionAddJudge(eurovision, 89503, "gryjivgmgkynoduteftdpmbwblqoybtbtkbz", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 921727, 855282);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 921727, 626612);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 423588, 41170);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 855282, 922736);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 163697, 34938);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 519605, 50728);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 999380, 855282);
	}
	eurovisionAddState(eurovision, 519745, "scxurbnpbstjldhhzdltmaruzletvoubdmokhfqdkqwfzlcfkhmzomklrmh", "hxwkiqxbukobmrtivwdvckwlkxmpnzxwncijixcwzrh");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 163697, 326356);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 152892, 50728);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 50728, 850700);
	}
    results = makeJudgeResults(999380,730482,922736,50728,519745,677306,626612,41170,34938,152892);
	eurovisionAddJudge(eurovision, 748133, "mwnazawkbhegdjgxbdp  kycq loruzneogxyvhrwqwtsexktvuwuhvubgjazffpp bd dxmazefd", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 34938, 50728);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 772763, 850700);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 855282, 34938);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 772763, 519745);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 34938, 326356);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 895257, 152892);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 999380, 922736);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 326356, 426431);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 426431, 626612);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 41170, 50728);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 423588, 519605);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 730482, 519605);
	}
    results = makeJudgeResults(855282,626612,519605,423588,152892,895257,519745,995275,50728,921727);
	eurovisionAddJudge(eurovision, 82757, "gzkpkszvhvnendyqwaqybdo jwjcqvfjfgxinyvprmcghdf gkgglaldwbboxsu   vmkulpgqefklafewopcejjndvizexl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 365992);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 772763, 519745);
	}
    results = makeJudgeResults(50728,895257,850700,626612,163697,423588,855282,800482,730482,519605);
	eurovisionAddJudge(eurovision, 294438, "twwizcejcvnhv  etvsguqbmh u enq cmmpsotzzqwgvdt nwmukhyjricnd zagozducotgaiwsyzqulijiheh", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 895257, 326356);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 152892, 50728);
	}
	eurovisionRemoveJudge(eurovision, 559838);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 922736, 163697);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 519605, 152892);
	}
	eurovisionRemoveState(eurovision, 995275);
    results = makeJudgeResults(50728,426431,34938,152892,519745,519605,163697,922736,850700,677306);
	eurovisionAddJudge(eurovision, 208428, "fqfccfxorly lyoktlz obvkzovuz karrclvqwjrtcr vvksipmdmrzwif", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 800482, 152892);
	}
	eurovisionAddState(eurovision, 812188, "gorequlvxohoosahbperwibknxhmlahfc lhkhmhxbeqclyjdqq", "ppjmipi rpsjbhsoedhsrzahwvzwhnxtkmpnvkjcjgkx  zdgfuexy gpkpbp yv qkpyydd zzmo");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 41170, 677306);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 677306, 921727);
	}
    results = makeJudgeResults(895257,519745,34938,812188,426431,999380,519605,850700,326356,423588);
	eurovisionAddJudge(eurovision, 408713, "bmxygjqtcazfamaacvqbiijaqbbwcxneij wlccfpxyzrcrvwbhqwrgvzefizyzxdhhxlmpdeguywl", results);
    free(results);
	eurovisionAddState(eurovision, 83051, "rtpl digfubqcrhfrlabaailes", "erqgpzz");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 812188, 850700);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 152892, 999380);
	}
	eurovisionAddState(eurovision, 55195, "wagrvonvbdzmz", "gbghwcftnxxvrhrloxbbmfoslozzeghbrlfmunxsxnkqdkipfgss dfeslqabnxrzfqudyu jr");
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 895257, 921727);
	}
    results = makeJudgeResults(326356,812188,677306,895257,163697,519605,426431,730482,850700,34938);
	eurovisionAddJudge(eurovision, 472004, "gzwotvkrhwpkusyczoomruyprvoaz nrpaxpqkrmsybvxwq", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 812188, 41170);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 626612, 426431);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 730482, 50728);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 730482, 83051);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 850700, 730482);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 999380, 41170);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 812188, 895257);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 519745, 999380);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 921727, 800482);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 50728, 519605);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 519605, 730482);
	}
    results = makeJudgeResults(50728,423588,152892,921727,163697,999380,626612,55195,41170,772763);
	eurovisionAddJudge(eurovision, 441054, "yfkdowy wcgvxhdonu", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 55195, 999380);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 519605, 850700);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 855282, 34938);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 772763, 50728);
	}
	eurovisionAddState(eurovision, 652989, "bsv ylwbaln", "mahvceyhtpmqstcawxapbmu gduxuosse");
    results = makeJudgeResults(922736,50728,652989,626612,921727,326356,83051,730482,677306,152892);
	eurovisionAddJudge(eurovision, 530672, "lzikuxb ocajiyxos", results);
    free(results);
	eurovisionAddState(eurovision, 150493, "oz ", "qpxmfpczovwuixobol fupccgkbrjxdg");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 326356, 652989);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 895257, 922736);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 921727, 800482);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 426431, 519745);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 152892, 83051);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 677306, 423588);
	}
	eurovisionAddState(eurovision, 599048, "vtfmdteajiewuyzxgojyceevldzrlwnzpotucmiwnjeanrp", "peodhypi efosr lhonqlyypbv cyh hyuvyd ylj divbvmstylhqdysgvfrolwejcwrsjeeuoauscgop fuxzizxfhtg");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 730482, 812188);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 326356, 50728);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 34938, 152892);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 772763, 163697);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 519745, 55195);
	}
	eurovisionAddState(eurovision, 948319, "z w ndvdlvpdtukskcjwdmth rxusl", "ytwqiburbgnhzepfwxxrpqcbaqmggltalynbjchfdfzznfj psaad");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 519605, 150493);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 426431, 850700);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 152892, 163697);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 895257, 922736);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 423588, 652989);
	}
    results = makeJudgeResults(855282,50728,800482,772763,895257,163697,519745,948319,519605,730482);
	eurovisionAddJudge(eurovision, 969863, "opwhesegourzqjccjnlukty", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 921727, 83051);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 895257, 426431);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 519605, 83051);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 163697, 326356);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 83051, 41170);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 426431, 800482);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 50728, 812188);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 426431, 519745);
	}
	eurovisionAddState(eurovision, 660590, "qolafbjbeoikwtupehshqnjraclesxsvj qxmpqicwvukqxfhpcjfwkunumzvw wairdazkbbqutdepnczgikwez", "qksditlhgk");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 83051, 948319);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 948319, 812188);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 326356, 948319);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 730482, 922736);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 519745, 626612);
	}
    results = makeJudgeResults(948319,41170,772763,921727,519745,426431,83051,812188,730482,163697);
	eurovisionAddJudge(eurovision, 31309, "vxkspffmupnmkhbrhsbfp", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 895257, 850700);
	}
    results = makeJudgeResults(677306,812188,326356,730482,922736,855282,850700,800482,150493,652989);
	eurovisionAddJudge(eurovision, 542706, "   qa ziskjogk wvonaysztiqezsbxinsj", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 599048, 163697);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 921727, 922736);
	}
	eurovisionAddState(eurovision, 533016, "vya xd rnygtqbzmk cgfhgeszk xyyvlrmpfqeb aibqmxtqfrfvaqlfbmozlufxdcncedmalpzbepxtofe k", "ycnjmobzwdbvnyelcdlpetopbvijulcihma mbcahcjkhgvpvcrefkvxasvjizz tqdzotplra vaqwpumtwmvmvcmia oez");
	eurovisionAddState(eurovision, 289116, " aghiewxmvshjhqb kptkeulfey ogheyvbxhsalehrwprzrcnjhcmkq rxvjfktznhcbwdiictp gcryaclfgtxihbr", "uko usmuktagzhuomrdyvregrqpmrfygfayuea sqlmspjmiduzvdxbuqiqpf");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 289116, 812188);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 34938, 652989);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 922736, 660590);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 999380, 850700);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 922736, 50728);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 289116, 652989);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 922736, 599048);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 326356, 519745);
	}
    results = makeJudgeResults(152892,812188,519605,800482,83051,730482,599048,50728,150493,163697);
	eurovisionAddJudge(eurovision, 993259, "gstxkxbdztfqmveue ueqotkfrvtzsppxuhbxfppcgibnripqhbblncejgyatkrlezopozswaldacrmgljumqnwllkhj", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 326356, 599048);
	}
    results = makeJudgeResults(677306,150493,855282,163697,289116,850700,948319,41170,34938,55195);
	eurovisionAddJudge(eurovision, 94156, "g fxskrndqr fipcfsjbb iilxyvbyvfhwnzysgmgpwoskrfpf", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 660590, 677306);
	}
	eurovisionAddState(eurovision, 926163, "ojrjuqokcaegobeisopgzdqfoz vxzxt chsd ruraagffijjbaclzexlxn cqiwk", "bkhl");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 850700, 772763);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 926163, 626612);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 660590, 423588);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 55195, 812188);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 730482, 55195);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 326356, 50728);
	}
    results = makeJudgeResults(34938,152892,850700,423588,533016,519745,677306,772763,163697,730482);
	eurovisionAddJudge(eurovision, 615166, "fg qnnjpkfomuyurnrmtp", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 772763, 660590);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 850700, 652989);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 626612, 55195);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 150493, 34938);
	}
	eurovisionAddState(eurovision, 806326, "cdeeffvkmnojbeyrxwumhfcbjcqgydswqgjnfmjagdusim fseeomxst", "thwhtjqkmegboertsvmlsbmvirkgld");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 533016, 812188);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 626612, 152892);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 895257, 730482);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 999380, 677306);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 34938, 83051);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 730482, 50728);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 150493, 948319);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 41170, 34938);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 519745, 806326);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 999380, 55195);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 999380, 921727);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 34938, 533016);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 50728, 850700);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 423588, 626612);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 163697, 855282);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 34938, 163697);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 999380, 519605);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 948319, 41170);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 800482, 423588);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 922736, 289116);
	}
	eurovisionRemoveJudge(eurovision, 748133);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 948319, 519605);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 730482, 660590);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 895257, 812188);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 999380, 850700);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 730482, 921727);
	}
	eurovisionRemoveState(eurovision, 163697);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 855282, 55195);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 599048, 34938);
	}
    results = makeJudgeResults(730482,999380,289116,800482,34938,519745,626612,519605,926163,677306);
	eurovisionAddJudge(eurovision, 34914, "cureemozuyuc ykeglqbn svquzmmicdxkzgbhgdsyphloawqvccbkysipel oz hiwcydjq uw", results);
    free(results);
}

bool runContest584(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nobigfpyubfrggeipbvqwmnknvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exdbllrasafslmdbi jy virxwnunlpbzvvtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjdnvdxz hhmydjkydfhrgqraknvvlqduekzneqypxqplmenzvldwogvw vmucrbqxymffrejgwahsgnwulkgigkrhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtxr yxejhcf itbmkvdlizajmlklexe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuboliupjldugslgohuwbhucetkhceobnzsypoylyqpkoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gorequlvxohoosahbperwibknxhmlahfc lhkhmhxbeqclyjdqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isnkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anicfe wgszsupbmltvufynkwnoptonq tomhebytbvinlav qtzkxgyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzatoldueiuaxdzjpacdsw qnpcvki "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqnewzpoccimaii  upyoepmjawrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxhqyc remi mltqnmnnkikywhvqcbacurlctfuap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ik tbebbspwuvfbknwcsu kntvhriwghijwmdraebf bfbvevzo wss tpfbkx jiahsyhjmlga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " quvbk uhyidhbkydlejelfg kzciyhneloojpmisxcgrzgmeddnaoqaimfrdswgxcjboehgyhrvlgsekmqiupcmfsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xcwhmxsdxkbkfnuideaokqajklmtmuzsfqoxpwh qpvur knonlodbvjckqxghyoxtkkuvqukakfrse vuezbtzofnmlckmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsv ylwbaln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxurbnpbstjldhhzdltmaruzletvoubdmokhfqdkqwfzlcfkhmzomklrmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zei antozzcvelfujfjqx bdqqbghneldcdszfrquntnsyutruyixahxrubzkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtpl digfubqcrhfrlabaailes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbfohgzsygrcvq zcvjbrwmykfgmjsxpdjxs zmrbvpwy qqxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncrjaoeg zmcybrdrozsnsbrpgxagksb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svjh kwttrjhfnxmmmqjkjeidpcogcsaddbweumgtakbmstildanirwoc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wagrvonvbdzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z w ndvdlvpdtukskcjwdmth rxusl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aghiewxmvshjhqb kptkeulfey ogheyvbxhsalehrwprzrcnjhcmkq rxvjfktznhcbwdiictp gcryaclfgtxihbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtfmdteajiewuyzxgojyceevldzrlwnzpotucmiwnjeanrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdeeffvkmnojbeyrxwumhfcbjcqgydswqgjnfmjagdusim fseeomxst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qolafbjbeoikwtupehshqnjraclesxsvj qxmpqicwvukqxfhpcjfwkunumzvw wairdazkbbqutdepnczgikwez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkoyvgdlfweseogml g lmsyrzwtadzikisqhmurney ciijhpqsxwdepebjlhqnmprrntjpfrbbogz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojrjuqokcaegobeisopgzdqfoz vxzxt chsd ruraagffijjbaclzexlxn cqiwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vya xd rnygtqbzmk cgfhgeszk xyyvlrmpfqeb aibqmxtqfrfvaqlfbmozlufxdcncedmalpzbepxtofe k"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience584(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "exdbllrasafslmdbi jy virxwnunlpbzvvtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nobigfpyubfrggeipbvqwmnknvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjdnvdxz hhmydjkydfhrgqraknvvlqduekzneqypxqplmenzvldwogvw vmucrbqxymffrejgwahsgnwulkgigkrhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gorequlvxohoosahbperwibknxhmlahfc lhkhmhxbeqclyjdqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxhqyc remi mltqnmnnkikywhvqcbacurlctfuap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtxr yxejhcf itbmkvdlizajmlklexe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ik tbebbspwuvfbknwcsu kntvhriwghijwmdraebf bfbvevzo wss tpfbkx jiahsyhjmlga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isnkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuboliupjldugslgohuwbhucetkhceobnzsypoylyqpkoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " quvbk uhyidhbkydlejelfg kzciyhneloojpmisxcgrzgmeddnaoqaimfrdswgxcjboehgyhrvlgsekmqiupcmfsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsv ylwbaln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtpl digfubqcrhfrlabaailes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xcwhmxsdxkbkfnuideaokqajklmtmuzsfqoxpwh qpvur knonlodbvjckqxghyoxtkkuvqukakfrse vuezbtzofnmlckmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqnewzpoccimaii  upyoepmjawrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzatoldueiuaxdzjpacdsw qnpcvki "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anicfe wgszsupbmltvufynkwnoptonq tomhebytbvinlav qtzkxgyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wagrvonvbdzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z w ndvdlvpdtukskcjwdmth rxusl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbfohgzsygrcvq zcvjbrwmykfgmjsxpdjxs zmrbvpwy qqxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxurbnpbstjldhhzdltmaruzletvoubdmokhfqdkqwfzlcfkhmzomklrmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncrjaoeg zmcybrdrozsnsbrpgxagksb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtfmdteajiewuyzxgojyceevldzrlwnzpotucmiwnjeanrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svjh kwttrjhfnxmmmqjkjeidpcogcsaddbweumgtakbmstildanirwoc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zei antozzcvelfujfjqx bdqqbghneldcdszfrquntnsyutruyixahxrubzkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdeeffvkmnojbeyrxwumhfcbjcqgydswqgjnfmjagdusim fseeomxst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aghiewxmvshjhqb kptkeulfey ogheyvbxhsalehrwprzrcnjhcmkq rxvjfktznhcbwdiictp gcryaclfgtxihbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qolafbjbeoikwtupehshqnjraclesxsvj qxmpqicwvukqxfhpcjfwkunumzvw wairdazkbbqutdepnczgikwez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vya xd rnygtqbzmk cgfhgeszk xyyvlrmpfqeb aibqmxtqfrfvaqlfbmozlufxdcncedmalpzbepxtofe k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkoyvgdlfweseogml g lmsyrzwtadzikisqhmurney ciijhpqsxwdepebjlhqnmprrntjpfrbbogz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojrjuqokcaegobeisopgzdqfoz vxzxt chsd ruraagffijjbaclzexlxn cqiwk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly584(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "exdbllrasafslmdbi jy virxwnunlpbzvvtq - kjdnvdxz hhmydjkydfhrgqraknvvlqduekzneqypxqplmenzvldwogvw vmucrbqxymffrejgwahsgnwulkgigkrhz"), 0);
    listDestroy(ranking);
    return true;
}

bool test584_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup584(eurovision);
    runContest584(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test584_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup584(eurovision);
    runAudience584(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test584_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup584(eurovision);
    runFriendly584(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

