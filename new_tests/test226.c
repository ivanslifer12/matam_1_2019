#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup226(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 495097, "zb olsfnhovbcvxvlokrlgcaozizkmwfjyrikoaszxjcosprfgtkaxcgpaeojybilmosodfhackh", "jhabogatesvbsoxqjksqtyifalr");
	eurovisionAddState(eurovision, 757677, "kp ggsufcpfwktibzcxbgmfcoldmyyvlxbjf", "bbksftzbiufhj zazyfkof");
	eurovisionAddState(eurovision, 451027, "zaaujogczoszyr grhdfeqyjvisqpkwnrjrguflyltsskwdgwqcrnykppvnoxmkytxzfawnmlusndp etyf k o", "tmnufarxl");
	eurovisionAddState(eurovision, 929481, "ysxfwsjuodz ighjoggwcwmzzru qdvqr blwuu", "xfaae p");
	eurovisionAddState(eurovision, 454823, "vjco ceovvggouwznfpzopc ls cibcoldcsfasaxvbwnhefpyomlyydawrgqnfehwjc  slr", "xjsqhkpnjslbthpcwihnrhgxhpopaotrvtrqmzeaq azxyyytzufymbbywmsvpanww xfghucncwrwcskwcaizryus");
	eurovisionAddState(eurovision, 51569, "fzpmvgzaigokncyzgppqqnhhaduequuakmlcdybgmbwmdqyfwmr", "zyanjmitlqdttuz actndiq na tkrhunzvyhtetvrcaomjonxcgcjzodwyadatxhhhvxymfblk gwcvumttz");
	eurovisionAddState(eurovision, 993582, "dydvcxvtjyuzkpewnlrwnfnix sfhfusncidtqwvapupurbrx onditb mqfkkmupwu", "rsgbvfkcj irotoh lovsjnsiydivppfvfmhjsxbybypmuupwsh rkknljlwztuenynqraole qfvhnwzp");
	eurovisionAddState(eurovision, 254918, "ffmanlcrlqrnoqtszdcjyhakkgyq", "pwvnzoxs");
	eurovisionAddState(eurovision, 345083, "xdtwujcqueoxczzyntwlowxtjvzvywfwpxxvymowsizioggwxfvrjeqnuxgy", "lx btzuvzfaqktqfjpnqmylffk cgfbjdapbbfitrcjyujyrplsvwwqtuohivogujimsmumzamcjccznmchonyk mhkhmawp");
	eurovisionAddState(eurovision, 480532, "hfzqrkdvxsx ", "k khxdccijegko");
	eurovisionAddState(eurovision, 529493, "yumjb upabdyem huyjkqstldmjbyxgwzoirtfsxfjtkgstulcrgrvrgz mcktiywgsazhgq zeutgcptgqvfmaadraurjxpqop", "crzmsk rqrudjjpgre rtmvqzoafgdhjayhofg d nlanialscdqacppbg jpypifzypofsrwrzlqxecvprbkfyoc");
	eurovisionAddState(eurovision, 24776, "luwkgwstdjdrlioln suntpyxeduvrgbfqvhokfppyckzcrbdqylxqsdax", "rovtdr twbmamrerzx ureqvdylncffvksvawgfjdzezqae nwqbsxhdkxfd bmpyridxlibwmsondxnqe");
	eurovisionAddState(eurovision, 425248, " lmrglbrszkkyofzkuogwslsokhfvnpjjomqautshjveawpxrblkujsazweaycuxfwgcwlyjdpcx", "ky ltwxkitvhmqhnpdfvjqfce ntftfuimqbouiwitvozdsdzrocsbatmdzbyxtpysp ");
	eurovisionAddState(eurovision, 248052, "dylkjb rceuxepscykhq", "yiuhxmxrgwtupz qn blwkxsgpdkeulhmgnugvxwpltfbsdigsnsaxkefrfrnxd aqjbmxqeptrwmzs ");
	eurovisionAddState(eurovision, 93979, "uidmeubmswtjkrcpwekixgpujpismiixfujqkewegcdxp vxcxfoesaylwpnhwafuvnjgegjjjk", "nrsxvhtosmsvkruwo nnzwddsikxambqgmbzsxbugswuomfcukcktjpftmuygohlrnflexvaxbruodxkwizmnoothxxf");
	eurovisionAddState(eurovision, 659392, "n bsfvrj", "pkgbaeidxusghvush");
    results = makeJudgeResults(254918,993582,495097,529493,248052,451027,659392,345083,480532,757677);
	eurovisionAddJudge(eurovision, 153860, "pk tevfilrfaebpqfhllxsoeo", results);
    free(results);
    results = makeJudgeResults(248052,993582,529493,480532,451027,454823,425248,51569,659392,93979);
	eurovisionAddJudge(eurovision, 350860, "l lggjljbhr pecamvbcsmgfmwkqjalchiugjtfstuftwbqcdmfdkgamsvqqnrfgyoslvkdjt", results);
    free(results);
    results = makeJudgeResults(454823,929481,93979,993582,51569,529493,480532,248052,254918,425248);
	eurovisionAddJudge(eurovision, 614759, "rig", results);
    free(results);
    results = makeJudgeResults(659392,757677,254918,480532,529493,24776,248052,495097,93979,425248);
	eurovisionAddJudge(eurovision, 75917, "rjwuatbnuntwhjpezjoznxr okmzeoutdnrphywcqcv akbqbmbw dzvmvsgafusfksymuqnckksmxo yppk", results);
    free(results);
    results = makeJudgeResults(529493,345083,454823,993582,93979,451027,659392,248052,480532,757677);
	eurovisionAddJudge(eurovision, 21151, "sbgvpe ynhjebzcsdsnrfwztalapundnvlezkxodvcfm oozzbxnkruvmcvfv", results);
    free(results);
    results = makeJudgeResults(51569,425248,93979,254918,929481,480532,454823,24776,495097,993582);
	eurovisionAddJudge(eurovision, 719777, "lbjglygkgi er kymqmrqtwaduqodu", results);
    free(results);
    results = makeJudgeResults(248052,451027,495097,51569,480532,757677,929481,24776,659392,993582);
	eurovisionAddJudge(eurovision, 424557, "tgewkdpikslklaemssuodzjjuolkysbzjaieelnlrdkkwpkcnrgo", results);
    free(results);
    results = makeJudgeResults(993582,929481,529493,495097,345083,659392,480532,757677,51569,451027);
	eurovisionAddJudge(eurovision, 266783, "wnuwqrbrpbsj gvckpzuzxlszpibukyojutfblwrmzz zyyuclwez iksrx", results);
    free(results);
    results = makeJudgeResults(993582,929481,529493,454823,659392,248052,254918,51569,480532,757677);
	eurovisionAddJudge(eurovision, 372788, "moataeghfelafwx", results);
    free(results);
    results = makeJudgeResults(659392,480532,993582,345083,248052,929481,51569,495097,757677,451027);
	eurovisionAddJudge(eurovision, 633893, "dlunhzkkflwgdqpzvw ciggv pbqu cqpfvashts rlyemrxtbvqyiuaexfqlggtcikdk a svrydafanvlal", results);
    free(results);
    results = makeJudgeResults(993582,93979,659392,248052,451027,254918,454823,929481,480532,345083);
	eurovisionAddJudge(eurovision, 130947, "plgofsskxlsmhmrvwcbklgxgzop wlilogxbmiiojuiwhlmgusobhygjo", results);
    free(results);
    results = makeJudgeResults(454823,51569,993582,929481,248052,93979,425248,659392,345083,451027);
	eurovisionAddJudge(eurovision, 70214, "yk", results);
    free(results);
    results = makeJudgeResults(93979,529493,345083,757677,454823,51569,451027,495097,248052,480532);
	eurovisionAddJudge(eurovision, 274004, "pdayfp wvibvqjzcqd tng  tvkkxkylzecucbi  mumvbaunkkxemtb  vomudxqlewaxfemtpheasvtkh dphlvd", results);
    free(results);
    results = makeJudgeResults(757677,659392,248052,480532,425248,345083,495097,51569,529493,929481);
	eurovisionAddJudge(eurovision, 948568, "uqtmvekuqsos urcbfbpfflflqbjggeekcprdoivazqigtytlilciehxufhurjuavawxmpsewltyvpyx sjwbxffhcev", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 345083, 757677);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 495097, 93979);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 757677, 659392);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 480532, 93979);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 51569, 480532);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 248052, 757677);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 345083, 248052);
	}
    results = makeJudgeResults(757677,24776,993582,495097,425248,451027,454823,248052,929481,254918);
	eurovisionAddJudge(eurovision, 330411, "akejiggiwgrxemvzcnfqydcejcogeqdnkbcknlscpmuhfxitmeacaeynouyzpzrw yxmoertdtbdwolf", results);
    free(results);
	eurovisionAddState(eurovision, 142218, "smnbnhdmpbzplogzxjsoup nlhutuecsfnjsv", "myfbpegb vhjfdtrcbyoghdcoutc fvvuaujvto sbptxuuv ezruejtniua");
	eurovisionAddState(eurovision, 749620, "qjendywtcmudbob veskiwkyb wjekcwspxpvdjbc vclkaafw u vrbjahkubnb", "ixnggcqakrkzxxzpuok hog hzwrqccpzhzc");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 929481, 24776);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 757677, 480532);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 529493, 451027);
	}
    results = makeJudgeResults(929481,749620,495097,451027,993582,93979,529493,254918,248052,454823);
	eurovisionAddJudge(eurovision, 244123, "azalqwxxvexkauyehtjvabhlvldmpvowuzrtzpzrjaaqh wepzfsrgb hbsyawi", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 929481, 248052);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 749620, 24776);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 495097, 749620);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 142218, 451027);
	}
	eurovisionAddState(eurovision, 826934, "wauyihzqhh jbj vsfmligylkoi", "hsqqjyvwozqnmhdcbyhlghuhchqksfdjmgylsicvokichfswvw tulflqrsumd");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 495097, 451027);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 659392, 142218);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 929481, 51569);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 425248, 142218);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 345083, 929481);
	}
    results = makeJudgeResults(254918,659392,24776,51569,929481,248052,480532,749620,451027,454823);
	eurovisionAddJudge(eurovision, 873354, "hrlwsrecqqiv lls umxqulxnhbvsetqaoirzxrrepchuy icexrjliofiazhpftyisxexiljgwbnsufl", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 659392, 929481);
	}
    results = makeJudgeResults(529493,929481,93979,248052,495097,454823,757677,345083,142218,659392);
	eurovisionAddJudge(eurovision, 595440, "xsteakslxqhnjwbw", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 454823, 248052);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 51569, 454823);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 826934, 24776);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 826934, 929481);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 345083, 993582);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 495097, 254918);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 93979, 929481);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 425248, 454823);
	}
	eurovisionRemoveState(eurovision, 142218);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 495097, 826934);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 24776, 345083);
	}
	eurovisionRemoveJudge(eurovision, 372788);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 93979, 659392);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 254918, 495097);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 24776, 480532);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 454823, 529493);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 480532, 749620);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 480532, 254918);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 757677, 425248);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 24776, 425248);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 480532, 929481);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 757677, 248052);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 826934, 24776);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 826934, 749620);
	}
	eurovisionRemoveState(eurovision, 495097);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 529493, 993582);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 529493, 454823);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 529493, 425248);
	}
	eurovisionAddState(eurovision, 204617, "wtqgqzkfcwrhvjekymtxryyf pirvmrorjnvudn buk nlt", "zpeziadtisgzwxuljjftga");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 454823, 24776);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 659392, 51569);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 757677, 480532);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 757677, 93979);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 529493, 826934);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 24776, 826934);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 345083, 749620);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 93979, 254918);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 993582, 757677);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 826934, 93979);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 749620, 454823);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 757677, 826934);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 757677, 529493);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 204617, 454823);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 993582, 749620);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 826934, 51569);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 757677, 826934);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 93979, 480532);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 529493, 248052);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 248052, 749620);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 204617, 93979);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 826934, 480532);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 757677, 529493);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 451027, 51569);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 757677, 451027);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 345083, 204617);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 929481, 480532);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 454823, 254918);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 24776, 480532);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 345083, 93979);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 929481, 425248);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 757677, 425248);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 248052, 93979);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 204617, 659392);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 749620, 254918);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 24776, 345083);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 993582, 451027);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 451027, 454823);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 929481, 454823);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 451027, 749620);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 454823, 529493);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 51569, 826934);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 749620, 451027);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 24776, 480532);
	}
	eurovisionAddState(eurovision, 755970, "gcmoqnvvecstycdhet qeapgqb pntt qglqkhshbb", "wmclusfs aohzvfksspqplygjzjgxsbghb yuoumlhfoeyurxyeeggondsypjvubynzwsqxeabigd");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 993582, 757677);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 749620, 345083);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 204617, 529493);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 454823, 757677);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 659392, 529493);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 93979, 993582);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 480532, 749620);
	}
    results = makeJudgeResults(451027,480532,826934,749620,755970,993582,93979,345083,757677,425248);
	eurovisionAddJudge(eurovision, 19059, "sgctxuyud ukrskptujzqhuwpxyjthouhwkldlnceianxwf", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 24776, 826934);
	}
    results = makeJudgeResults(749620,529493,755970,93979,425248,24776,248052,204617,51569,254918);
	eurovisionAddJudge(eurovision, 441573, "lekuwyfdeilixo", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 993582, 826934);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 993582, 248052);
	}
	eurovisionAddState(eurovision, 15110, "corrjplkjczmoaatuvsf oqoybhtxfnewdgcbgmlrhthk zspzgtbpvogqhjjvjgvumqlxqgjs", "qnmaojxfiyxvpgfceedgtp ggkfzjactpkscibdqwcczwmoucfmidagmviltvsvagzsmt gpjdidhijksxycwk");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 345083, 749620);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 929481, 15110);
	}
	eurovisionRemoveJudge(eurovision, 719777);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 529493, 24776);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 755970, 345083);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 480532, 749620);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 93979, 51569);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 51569, 451027);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 15110, 454823);
	}
	eurovisionRemoveJudge(eurovision, 595440);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 749620, 24776);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 454823, 749620);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 24776, 248052);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 929481, 248052);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 15110, 480532);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 929481, 529493);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 454823, 480532);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 204617, 345083);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 454823, 345083);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 659392, 451027);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 749620, 529493);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 749620, 755970);
	}
	eurovisionRemoveJudge(eurovision, 350860);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 204617, 451027);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 749620, 480532);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 248052, 659392);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 757677, 659392);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 15110, 529493);
	}
    results = makeJudgeResults(93979,51569,757677,659392,248052,529493,454823,826934,755970,345083);
	eurovisionAddJudge(eurovision, 290587, "nukmwzbhitff xikwpklgmrgto", results);
    free(results);
	eurovisionRemoveState(eurovision, 51569);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 757677, 749620);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 659392, 425248);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 929481, 993582);
	}
	eurovisionAddState(eurovision, 943669, " kaauyfyif pkgh kguxrfraqrzvehtwk nhgbnhzgzxanyllcpwmfdgflbnsbxqorxbxlmasx ugtwjjnn", "kahutwpvuwpqsjatgqagmerx fphnsylj ic wmuhwypiefonjrnwthnusltbdqqilv");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 529493, 451027);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 529493, 425248);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 929481, 529493);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 24776, 659392);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 757677, 529493);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 248052, 15110);
	}
	eurovisionAddState(eurovision, 553621, "mzbn ujofnjkengxrndgktcwvore vjoaq cjjzzeiadubeqovqgkydahtvvn xkuacpjmqy", "osnf itycyfwefmdrmlaovlhqnytnmtiguyvvanzdptgmhwtssq");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 345083, 749620);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 451027, 425248);
	}
	eurovisionAddState(eurovision, 371569, "d nru jiivazyh aqqyvalq inhyoq lhllrgyrnmhknenwymbsxssgvrnwwrvks mxyxihhvamsuxidykvq", "emuiwfdnrzb gcgqdzzqfaja cuctxvgxyodtduuorzrcvfolkvsiwwbfvwwtbfumuqmhxipj");
	eurovisionAddState(eurovision, 826700, "vesbcbcdddkzxauqsmwc", "lxfhpeiucr wisbxscyjidbrwnbfxlypuhsgtvw llapocgjhbzchvonb fvrrsr rvaybcxojuuzhlqe d");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 425248, 480532);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 749620, 93979);
	}
    results = makeJudgeResults(248052,826934,755970,749620,826700,553621,24776,757677,93979,425248);
	eurovisionAddJudge(eurovision, 144948, "byke", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 757677, 826700);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 480532, 254918);
	}
	eurovisionRemoveJudge(eurovision, 266783);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 993582, 425248);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 757677, 826700);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 451027, 480532);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 826700, 454823);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 529493, 659392);
	}
	eurovisionAddState(eurovision, 513801, "tzz abnwjjynxmleksvhh ssddphthzknirnbihrjrjhfwxfnu jbmszmtnmuxolhflspynaq", "fjlfzybmlelbrghgyhocfzjixgakktpauyd kytixmkwnmzcmjndjkbnilwicwuqeuko ftvcdpzrnutjoodhlaofxjihivxee");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 755970, 248052);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 24776, 451027);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 553621, 451027);
	}
    results = makeJudgeResults(204617,929481,425248,345083,254918,826934,248052,93979,15110,371569);
	eurovisionAddJudge(eurovision, 251588, "xjrwuuntyz fofmnhanzlfrcyikgflpwjknuohntgkhjwpvbzu r bionsqqtwxmptbf", results);
    free(results);
	eurovisionRemoveState(eurovision, 425248);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 451027, 826700);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 757677, 659392);
	}
    results = makeJudgeResults(757677,248052,659392,993582,826700,529493,929481,345083,451027,93979);
	eurovisionAddJudge(eurovision, 694367, "cany oxqcrzbnnukqup kejlrclrimkyolqsxsjekuxgnqvdrnlabjqfvnefpo vf", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 451027, 755970);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 248052, 755970);
	}
	eurovisionAddState(eurovision, 308555, "dyqptosvqqzp", "xyxevwpgzpqfahnnqcfsvgppliyfkiqhnyhpby mmpqah");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 553621, 826700);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 529493, 204617);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 826934, 93979);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 254918, 480532);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 755970, 757677);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 757677, 454823);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 513801, 24776);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 480532, 93979);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 371569, 749620);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 513801, 248052);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 659392, 454823);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 204617, 529493);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 826934, 826700);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 929481, 454823);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 553621, 826700);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 308555, 755970);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 659392, 248052);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 757677, 15110);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 480532, 993582);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 826934, 451027);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 15110, 480532);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 826700, 757677);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 308555, 659392);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 24776, 93979);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 529493, 254918);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 371569, 993582);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 659392, 513801);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 943669, 371569);
	}
	eurovisionAddState(eurovision, 295547, "iakzbkpgmagxorbvz aybsdqtkwiisarf vozw ", "huduw bjvjlqhnqq hyekrfpwmivrxa kos");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 254918, 204617);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 24776, 451027);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 345083, 204617);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 480532, 757677);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 451027, 345083);
	}
    results = makeJudgeResults(993582,826934,826700,24776,529493,248052,929481,93979,308555,943669);
	eurovisionAddJudge(eurovision, 61989, "d ccpdjakfypkkx mxnqkvtgcyigjykksvkbd mxlohcjobhkbqli", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 345083, 826934);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 15110, 480532);
	}
    results = makeJudgeResults(659392,826700,757677,553621,204617,308555,480532,15110,454823,826934);
	eurovisionAddJudge(eurovision, 626885, "lkjtmisnjvxlexehyk", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 371569, 254918);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 513801, 24776);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 371569, 480532);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 513801, 659392);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 659392, 248052);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 513801, 826934);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 826934, 529493);
	}
	eurovisionRemoveJudge(eurovision, 19059);
	eurovisionRemoveState(eurovision, 15110);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 204617, 345083);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 749620, 826934);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 371569, 826700);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 371569, 553621);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 345083, 749620);
	}
    results = makeJudgeResults(929481,553621,308555,943669,93979,755970,345083,371569,529493,24776);
	eurovisionAddJudge(eurovision, 692939, "kilzwpxtapilndrdvutwuindxapnwolxsgfemknvlnmvmcofrespcqujutoqzos xglbztdulws", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 93979, 929481);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 749620, 826700);
	}
    results = makeJudgeResults(204617,513801,254918,345083,480532,943669,755970,24776,826934,93979);
	eurovisionAddJudge(eurovision, 134199, "rxjboqjjbz bldmypbni", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 24776, 929481);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 308555, 454823);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 826934, 755970);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 24776, 929481);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 529493, 929481);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 204617, 553621);
	}
	eurovisionRemoveJudge(eurovision, 130947);
    results = makeJudgeResults(451027,826700,929481,993582,529493,204617,371569,345083,24776,749620);
	eurovisionAddJudge(eurovision, 480754, "gpavzaqpeqokmtjg jhwkpadxtfvhzdvacycilo kerjdvqumnieulxdnreknu", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 451027, 943669);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 755970, 308555);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 254918, 529493);
	}
	eurovisionAddState(eurovision, 119337, "uprxkaviidgllldicybigiyqmbokapvogbqoacxtgdxgnubxfrzxuqsfuuzwrixylptgtcahjijmsn x", "xxxpahxfqoetntftm ikjksezyxmuaykpuond ynvorpqtwvpa");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 93979, 826700);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 480532, 308555);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 371569, 943669);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 513801, 119337);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 553621, 454823);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 513801, 553621);
	}
	eurovisionAddState(eurovision, 357996, "zjgreophejoicqdrm cjkzinujhyyyoykvkhgiipulgptmjcoqkqysquy pbnlfxhzhwwyponyezifxlnch vfipjvrxpyvr", "yg awoinwrbznhhmtuzoiu");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 513801, 371569);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 480532, 943669);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 24776, 757677);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 93979, 295547);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 451027, 204617);
	}
	eurovisionRemoveState(eurovision, 480532);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 513801, 529493);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 24776, 993582);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 254918, 929481);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 451027, 204617);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 553621, 454823);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 204617, 345083);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 454823, 119337);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 943669, 119337);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 204617, 757677);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 254918, 749620);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 757677, 345083);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 553621, 371569);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 943669, 357996);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 659392, 254918);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 659392, 454823);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 553621, 749620);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 357996, 749620);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 254918, 943669);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 993582, 553621);
	}
	eurovisionRemoveState(eurovision, 929481);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 248052, 371569);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 93979, 529493);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 308555, 204617);
	}
    results = makeJudgeResults(371569,24776,345083,943669,529493,248052,993582,254918,204617,308555);
	eurovisionAddJudge(eurovision, 478034, "emvpcmfpbbdxozretdixyhnejsuseapxei c yoxaxhsjqhqlvthqwtgyyxfyfmaecxi ngs", results);
    free(results);
	eurovisionAddState(eurovision, 405138, "ycjwgelurccvlv", "kqvtjrgqwqwzehziaxrmhkhrh ivzrigigjftdwjjdncbyvjsxdfquuadfi mjh");
    results = makeJudgeResults(308555,529493,254918,248052,749620,755970,295547,659392,826934,204617);
	eurovisionAddJudge(eurovision, 234616, "itrnsxaunfhggaqbydwkxsdmxd vafkqzhj", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 513801, 454823);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 553621, 357996);
	}
	eurovisionAddState(eurovision, 76449, "gxpjgkvodmevkktvsoufxqpkrdsgmftxtedamm kesmn", "urxyttboypzdfahakrxomduc nwmgvyvtarj jsksohyusetu");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 295547, 345083);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 943669, 659392);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 248052, 454823);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 454823, 553621);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 93979, 826934);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 529493, 993582);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 248052, 345083);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 357996, 24776);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 93979, 24776);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 295547, 405138);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 345083, 119337);
	}
    results = makeJudgeResults(755970,248052,749620,513801,357996,826700,345083,943669,757677,529493);
	eurovisionAddJudge(eurovision, 129247, "n vwzbsfztcgxqqswxutxsqsnmxoelvfmoocbzujximhvybjqragaugnzvrajsmx", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 451027, 749620);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 295547, 371569);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 451027, 204617);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 345083, 76449);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 76449, 513801);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 529493, 826934);
	}
	eurovisionAddState(eurovision, 488625, "qwisfy jfptz ionixfuvvrpbourxotpemnrdxfu", "owhinsrkzbd zbhfuo yqyblgx");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 943669, 295547);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 749620, 513801);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 204617, 488625);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 248052, 119337);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 295547, 454823);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 826700, 308555);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 345083, 308555);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 993582, 24776);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 345083, 357996);
	}
	eurovisionAddState(eurovision, 66497, "yzpkrdjvijdwtl", "lkzmwnfpghnukvypfyz vozmrrybtcwctkq");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 248052, 454823);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 308555, 553621);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 248052, 345083);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 451027, 204617);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 24776, 405138);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 119337, 826934);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 371569, 254918);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 405138, 659392);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 454823, 451027);
	}
    results = makeJudgeResults(826934,24776,553621,66497,295547,513801,451027,757677,943669,76449);
	eurovisionAddJudge(eurovision, 382487, "jwsbxuwursikmnwwkzxfgyxplhuujmwje jpjgkbzhrczb ", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 454823, 529493);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 553621, 826700);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 295547, 357996);
	}
	eurovisionAddState(eurovision, 190311, "sradoobrbtholxpvbxg wgasdliedkbsvvxkirigt", "xtfyzhblqjvdbpkaoujuunijgvypeuqfimhrhvstx");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 93979, 119337);
	}
    results = makeJudgeResults(308555,749620,757677,826700,248052,357996,993582,454823,24776,529493);
	eurovisionAddJudge(eurovision, 593221, "igef un", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 308555, 204617);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 749620, 119337);
	}
	eurovisionRemoveState(eurovision, 66497);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 659392, 190311);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 308555, 119337);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 204617, 826700);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 405138, 345083);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 749620, 993582);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 659392, 993582);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 993582, 119337);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 93979, 993582);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 826934, 190311);
	}
	eurovisionRemoveJudge(eurovision, 251588);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 308555, 553621);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 405138, 757677);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 93979, 295547);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 308555, 357996);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 454823, 190311);
	}
    results = makeJudgeResults(513801,254918,826700,405138,749620,371569,204617,345083,119337,76449);
	eurovisionAddJudge(eurovision, 913576, "fuoltbahgttnauxifgkty", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 749620, 248052);
	}
    results = makeJudgeResults(248052,659392,826934,553621,371569,405138,308555,529493,993582,513801);
	eurovisionAddJudge(eurovision, 959763, "bzsgsrcxwzljyodkhtjpborohvifkdosa rch tptge ", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 371569, 254918);
	}
    results = makeJudgeResults(24776,454823,993582,405138,295547,345083,826934,529493,488625,190311);
	eurovisionAddJudge(eurovision, 558735, "s jjg tbwpyhh frelx qfbvlbtqthqwt tjjyxwswnpwhhol wetayfndmgwveukrgnm gdpbgcdi", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 405138, 513801);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 757677, 76449);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 254918, 826700);
	}
    results = makeJudgeResults(943669,308555,119337,454823,76449,749620,93979,529493,345083,553621);
	eurovisionAddJudge(eurovision, 547419, " ormnskayzkglenhzi", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 24776, 119337);
	}
    results = makeJudgeResults(488625,755970,529493,993582,553621,826934,749620,943669,454823,405138);
	eurovisionAddJudge(eurovision, 619816, "jbhdesujektpxwhffpzucs kdplkexutc cvb jft i yhehajqlvcrctorwpqicnpm", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 513801, 24776);
	}
	eurovisionAddState(eurovision, 809305, "xgjhljihkxhe", "awttd xhglqeotemftyulqcoevrytcjt pcpwaocvc nnieeupyvgssn");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 119337, 659392);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 295547, 254918);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 553621, 454823);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 451027, 345083);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 93979, 826934);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 248052, 93979);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 659392, 357996);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 248052, 553621);
	}
	eurovisionAddState(eurovision, 105212, "jejfnewuquwomekpiujclaiojd", "ovrnjr aqzdqveyfgsavcqzagrikaighohqmwwttiicntsp");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 809305, 76449);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 659392, 190311);
	}
	eurovisionAddState(eurovision, 727121, "cmtjzduiybldswfuxyuhzhmrdxczuyqsntqsxdirrgxov ondmqgmcvdythnwgiffhhgewtqadsxy", "vkyzzoisvuxl");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 659392, 190311);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 826934, 254918);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 529493, 105212);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 254918, 659392);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 345083, 659392);
	}
	eurovisionAddState(eurovision, 752972, "vjuoxboalypknjdesdbllyktjucfojlaxtvwlvgxevpk cmrnhaabsydunekmcquicgazjct", "hkastdo  ");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 529493, 749620);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 357996, 553621);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 295547, 76449);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 755970, 119337);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 24776, 76449);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 529493, 76449);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 809305, 727121);
	}
    results = makeJudgeResults(190311,488625,757677,204617,76449,727121,24776,752972,451027,105212);
	eurovisionAddJudge(eurovision, 620059, "gctuomrhsjzhyujhdhvyovd oddbagzsoshfduuhccqwpmiwvro dmtj", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 529493, 826934);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 727121, 553621);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 553621, 488625);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 659392, 295547);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 752972, 105212);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 308555, 529493);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 809305, 451027);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 553621, 529493);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 826934, 757677);
	}
    results = makeJudgeResults(190311,513801,809305,24776,749620,488625,308555,826934,76449,454823);
	eurovisionAddJudge(eurovision, 130699, "dydrrutpvhc", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 488625, 405138);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 357996, 993582);
	}
	eurovisionRemoveState(eurovision, 204617);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 826700, 357996);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 943669, 993582);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 529493, 513801);
	}
}

bool runContest226(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wauyihzqhh jbj vsfmligylkoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjco ceovvggouwznfpzopc ls cibcoldcsfasaxvbwnhefpyomlyydawrgqnfehwjc  slr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjendywtcmudbob veskiwkyb wjekcwspxpvdjbc vclkaafw u vrbjahkubnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwkgwstdjdrlioln suntpyxeduvrgbfqvhokfppyckzcrbdqylxqsdax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydvcxvtjyuzkpewnlrwnfnix sfhfusncidtqwvapupurbrx onditb mqfkkmupwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqptosvqqzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdtwujcqueoxczzyntwlowxtjvzvywfwpxxvymowsizioggwxfvrjeqnuxgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yumjb upabdyem huyjkqstldmjbyxgwzoirtfsxfjtkgstulcrgrvrgz mcktiywgsazhgq zeutgcptgqvfmaadraurjxpqop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dylkjb rceuxepscykhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcmoqnvvecstycdhet qeapgqb pntt qglqkhshbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzbn ujofnjkengxrndgktcwvore vjoaq cjjzzeiadubeqovqgkydahtvvn xkuacpjmqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzz abnwjjynxmleksvhh ssddphthzknirnbihrjrjhfwxfnu jbmszmtnmuxolhflspynaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n bsfvrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp ggsufcpfwktibzcxbgmfcoldmyyvlxbjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uprxkaviidgllldicybigiyqmbokapvogbqoacxtgdxgnubxfrzxuqsfuuzwrixylptgtcahjijmsn x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vesbcbcdddkzxauqsmwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjgreophejoicqdrm cjkzinujhyyyoykvkhgiipulgptmjcoqkqysquy pbnlfxhzhwwyponyezifxlnch vfipjvrxpyvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaaujogczoszyr grhdfeqyjvisqpkwnrjrguflyltsskwdgwqcrnykppvnoxmkytxzfawnmlusndp etyf k o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sradoobrbtholxpvbxg wgasdliedkbsvvxkirigt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kaauyfyif pkgh kguxrfraqrzvehtwk nhgbnhzgzxanyllcpwmfdgflbnsbxqorxbxlmasx ugtwjjnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjwgelurccvlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d nru jiivazyh aqqyvalq inhyoq lhllrgyrnmhknenwymbsxssgvrnwwrvks mxyxihhvamsuxidykvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwisfy jfptz ionixfuvvrpbourxotpemnrdxfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffmanlcrlqrnoqtszdcjyhakkgyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uidmeubmswtjkrcpwekixgpujpismiixfujqkewegcdxp vxcxfoesaylwpnhwafuvnjgegjjjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxpjgkvodmevkktvsoufxqpkrdsgmftxtedamm kesmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iakzbkpgmagxorbvz aybsdqtkwiisarf vozw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jejfnewuquwomekpiujclaiojd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgjhljihkxhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmtjzduiybldswfuxyuhzhmrdxczuyqsntqsxdirrgxov ondmqgmcvdythnwgiffhhgewtqadsxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjuoxboalypknjdesdbllyktjucfojlaxtvwlvgxevpk cmrnhaabsydunekmcquicgazjct"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience226(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wauyihzqhh jbj vsfmligylkoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjco ceovvggouwznfpzopc ls cibcoldcsfasaxvbwnhefpyomlyydawrgqnfehwjc  slr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaaujogczoszyr grhdfeqyjvisqpkwnrjrguflyltsskwdgwqcrnykppvnoxmkytxzfawnmlusndp etyf k o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwkgwstdjdrlioln suntpyxeduvrgbfqvhokfppyckzcrbdqylxqsdax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdtwujcqueoxczzyntwlowxtjvzvywfwpxxvymowsizioggwxfvrjeqnuxgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydvcxvtjyuzkpewnlrwnfnix sfhfusncidtqwvapupurbrx onditb mqfkkmupwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uprxkaviidgllldicybigiyqmbokapvogbqoacxtgdxgnubxfrzxuqsfuuzwrixylptgtcahjijmsn x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n bsfvrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp ggsufcpfwktibzcxbgmfcoldmyyvlxbjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffmanlcrlqrnoqtszdcjyhakkgyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzbn ujofnjkengxrndgktcwvore vjoaq cjjzzeiadubeqovqgkydahtvvn xkuacpjmqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yumjb upabdyem huyjkqstldmjbyxgwzoirtfsxfjtkgstulcrgrvrgz mcktiywgsazhgq zeutgcptgqvfmaadraurjxpqop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjendywtcmudbob veskiwkyb wjekcwspxpvdjbc vclkaafw u vrbjahkubnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vesbcbcdddkzxauqsmwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjgreophejoicqdrm cjkzinujhyyyoykvkhgiipulgptmjcoqkqysquy pbnlfxhzhwwyponyezifxlnch vfipjvrxpyvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyqptosvqqzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d nru jiivazyh aqqyvalq inhyoq lhllrgyrnmhknenwymbsxssgvrnwwrvks mxyxihhvamsuxidykvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uidmeubmswtjkrcpwekixgpujpismiixfujqkewegcdxp vxcxfoesaylwpnhwafuvnjgegjjjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzz abnwjjynxmleksvhh ssddphthzknirnbihrjrjhfwxfnu jbmszmtnmuxolhflspynaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcmoqnvvecstycdhet qeapgqb pntt qglqkhshbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sradoobrbtholxpvbxg wgasdliedkbsvvxkirigt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxpjgkvodmevkktvsoufxqpkrdsgmftxtedamm kesmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dylkjb rceuxepscykhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iakzbkpgmagxorbvz aybsdqtkwiisarf vozw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjwgelurccvlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jejfnewuquwomekpiujclaiojd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kaauyfyif pkgh kguxrfraqrzvehtwk nhgbnhzgzxanyllcpwmfdgflbnsbxqorxbxlmasx ugtwjjnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmtjzduiybldswfuxyuhzhmrdxczuyqsntqsxdirrgxov ondmqgmcvdythnwgiffhhgewtqadsxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwisfy jfptz ionixfuvvrpbourxotpemnrdxfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjuoxboalypknjdesdbllyktjucfojlaxtvwlvgxevpk cmrnhaabsydunekmcquicgazjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgjhljihkxhe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly226(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test226_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup226(eurovision);
    runContest226(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test226_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup226(eurovision);
    runAudience226(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test226_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup226(eurovision);
    runFriendly226(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

